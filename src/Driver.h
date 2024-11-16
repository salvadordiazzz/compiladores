#ifndef __DRIVER_H__ 
#define __DRIVER_H__

#include "CobraBaseVisitor.h"
#include "llvm/ADT/APInt.h"
#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/InstrTypes.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Intrinsics.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"
#include "llvm/Support/raw_ostream.h"
#include <regex>
using namespace antlr4;
using namespace llvm;
using namespace  std;
class SymbolTable {
private:
    // Una pila de mapas, cada mapa representa un scope
    std::vector<std::map<std::string, llvm::Value*>> scopes;

public:
    SymbolTable() {
        // Crear el scope global
        enterScope();
    }

    void enterScope() {
        scopes.push_back(std::map<std::string, llvm::Value*>());
    }

    void exitScope() {
        if (!scopes.empty()) {
            scopes.pop_back();
        }
    }

    bool define(const std::string& name, llvm::Value* value) {
        if (scopes.empty()) return false;
        // Define en el scope actual (último scope)
        scopes.back()[name] = value;
        return true;
    }

    llvm::Value* resolve(const std::string& name) {
        // Buscar desde el scope más interno al más externo
        for (auto it = scopes.rbegin(); it != scopes.rend(); ++it) {
            auto found = it->find(name);
            if (found != it->end()) {
                return found->second;
            }
        }
        return nullptr;
    }

    llvm::Type* getType(const std::string& name) {
        llvm::Value* value = resolve(name);
        if (value) {
            return value->getType();
        }
        return nullptr;
    }
};

class CobraDriver : public CobraBaseVisitor {
private:
    LLVMContext C;
    Module *M;
    IRBuilder<> *irBuilder;
    Value *ptr;
    Function *mainFunc;
    Function *memsetFunc;
    FunctionCallee getcharFunc;
    FunctionCallee putcharFunc;
    SymbolTable symbolTable; 
    std::unordered_map<std::string, llvm::Value*> namedValues;
    std::unordered_map<std::string, std::vector<llvm::Value*>>arrayValues;
    llvm::Function *currentFunction = nullptr;

    llvm::AllocaInst *CreateEntryBlockAlloca(llvm::Function *function, const std::string &varName) {
        llvm::IRBuilder<> TmpB(&function->getEntryBlock(), 
                              function->getEntryBlock().begin());
        return TmpB.CreateAlloca(llvm::Type::getInt32Ty(C), 
                                0, 
                                varName.c_str());
    }
public:
  CobraDriver() : M(new Module("CobraModule", C)), irBuilder(nullptr) {
        declareString();
        declarePrintf();
    }

    void declareString() {
    // Declarar las cadenas de formato para cada tipo
    new GlobalVariable(
        *M,
        ArrayType::get(Type::getInt8Ty(C), 4),
        true,
        GlobalValue::PrivateLinkage,
        ConstantDataArray::getString(C, "%d\n", true),
        ".str.int"
    );

    new GlobalVariable(
        *M,
        ArrayType::get(Type::getInt8Ty(C), 4),
        true,
        GlobalValue::PrivateLinkage,
        ConstantDataArray::getString(C, "%f\n", true),
        ".str.float"
    );

    new GlobalVariable(
        *M,
        ArrayType::get(Type::getInt8Ty(C), 4),
        true,
        GlobalValue::PrivateLinkage,
        ConstantDataArray::getString(C, "%s\n", true),
        ".str.str"
    );
}

Function *declarePrintf() {
    // Declarar printf solo con el puntero a la cadena de formato
    std::vector<Type*> printfArgs = {
        PointerType::get(Type::getInt8Ty(C), 0)
    };

    FunctionType *printfType = FunctionType::get(
        Type::getInt32Ty(C),
        printfArgs,
        true  // Variadic
    );

    return Function::Create(
        printfType,
        Function::ExternalLinkage,
        "printf",
        M
    );
}

void callPrintf(Value *valueToPrint) {
    Function *printfFunc = M->getFunction("printf");
    GlobalVariable *formatStr = nullptr;
    Value *printValue = valueToPrint;

    // Determinar el tipo y seleccionar el formato adecuado
    if (valueToPrint->getType()->isIntegerTy()) {
        formatStr = M->getNamedGlobal(".str.int");
    }
    else if (valueToPrint->getType()->isFloatingPointTy()) {
        formatStr = M->getNamedGlobal(".str.float");
    }
    else if (valueToPrint->getType()->isPointerTy()) {
        // Si es un puntero, podría ser una cadena
        formatStr = M->getNamedGlobal(".str.str");
    }

    if (formatStr) {
        // Crear GEP para el formato
        Value *formatPtr = irBuilder->CreateInBoundsGEP(
            formatStr->getValueType(),
            formatStr,
            {
                ConstantInt::get(Type::getInt32Ty(C), 0),
                ConstantInt::get(Type::getInt32Ty(C), 0)
            }
        );

        // Realizar conversiones si son necesarias
        if (valueToPrint->getType()->isIntegerTy() && 
            valueToPrint->getType()->getIntegerBitWidth() != 32) {
            // Convertir a i32 si es necesario
            printValue = irBuilder->CreateSExt(valueToPrint, Type::getInt32Ty(C));
        }
        else if (valueToPrint->getType()->isFloatingPointTy() && 
                 !valueToPrint->getType()->isDoubleTy()) {
            // Convertir a double si es necesario
            printValue = irBuilder->CreateFPExt(valueToPrint, Type::getDoubleTy(C));
        }

        // Llamar a printf con el formato y valor apropiados
        irBuilder->CreateCall(printfFunc, {formatPtr, printValue});
    }
}









    std::any visitProgram(CobraParser::ProgramContext *ctx) override {
    //mainFunc = Function::Create(FunctionType::get(Type::getInt32Ty(C), false),
    //                            Function::ExternalLinkage, "main", M);
    
    //irBuilder = new IRBuilder<>(BasicBlock::Create(C, "begin", mainFunc));
    
    irBuilder = new IRBuilder<>(C);
    for (auto child : ctx->children) {
            // Verifica el tipo de cada hijo y visita según corresponda
            if (auto statement = dynamic_cast<CobraParser::StatementContext*>(child)) {
                visit(statement); // Visita la declaración
            } else if (auto functionDef = dynamic_cast<CobraParser::FunctionDefContext*>(child)) {
                visit(functionDef); // Visita la definición de función
            } else if (auto loopStruct = dynamic_cast<CobraParser::LoopStructContext*>(child)) {
                visit(loopStruct); // Visita la estructura de bucle
            } else if (auto repeatStruct = dynamic_cast<CobraParser::RepeatStructContext*>(child)) {
                visit(repeatStruct); // Visita la estructura de repetición
            } else if (auto conditional = dynamic_cast<CobraParser::ConditionalContext*>(child)) {
                visit(conditional); // Visita la estructura condicional
            } else if (auto objectDecl = dynamic_cast<CobraParser::ObjectDeclContext*>(child)) {
                visit(objectDecl); // Visita la declaración de objeto
            } else if (auto arrayDecl = dynamic_cast<CobraParser::ArrayDeclContext*>(child)) {
                visit(arrayDecl); // Visita la declaración de array
            } else if (auto matrixDecl = dynamic_cast<CobraParser::MatrixDeclContext*>(child)) {
                visit(matrixDecl); // Visita la declaración de matriz
            } else if (auto waitLoop = dynamic_cast<CobraParser::WaitLoopContext*>(child)) {
                visit(waitLoop); // Visita el ciclo de espera
            } else if (auto rangeDeclaration = dynamic_cast<CobraParser::RangeDeclarationContext*>(child)) {
                visit(rangeDeclaration); // Visita la declaración de rango
            }
            // Aquí podrías agregar más tipos de declaraciones si es necesario
        }
    //irBuilder->CreateRet(llvm::ConstantInt::get(llvm::Type::getInt32Ty(C), 1));

        // Imprimir el IR generado
    M->print(llvm::outs(), nullptr);
    return {};
  }










    std::any visitStatement(CobraParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitVarDeclaration(CobraParser::VarDeclarationContext *ctx) override {
    // Obtiene el tipo de la variable desde el contexto
    std::any result = ctx->dataType()->accept(this); // number val= 0;

    // Comprobar si el tipo devuelto es un Type*
    if (result.type() != typeid(Type*)) {
        std::cerr << "Error: el tipo devuelto no es Type*." << std::endl;
        std::cout << "Tipo almacenado en result: " << result.type().name() << std::endl;
        return nullptr; // Manejar el error de tipo
    }

    // Realizar el cast a Type*
    Type* type = std::any_cast<Type*>(result); // Aquí deberías obtener el Type* correcto

    // Obtiene el nombre de la variable
    std::string varName = ctx->IDENTIFIER()->getText();

    // Crea la asignación de espacio en la memoria para la variable
    AllocaInst *alloc = irBuilder->CreateAlloca(type, nullptr, varName);

    // Si hay una inicialización, realiza la carga y almacenamiento del valor
    if (ctx->expression()) {
        std::any result = ctx->expression()->accept(this);
        // Verificar si el tipo de la expresión es un Value*
        if (result.type() != typeid(Value*)) {
            std::cerr << "Error: el valor de inicialización no es Value*." << std::endl;
            std::cout << "Tipo almacenado en result: " << result.type().name() << std::endl;
            return nullptr; // Manejar el error de tipo
        }

        // Ahora puedes hacer el cast a Value* porque el tipo ha sido validado
        Value *initValue = std::any_cast<Value*>(result);
        irBuilder->CreateStore(initValue, alloc);
    }

    // Puedes almacenar el puntero a la variable en un mapa o estructura para usarlo más tarde
    namedValues[varName] = alloc; // Guardar la dirección de la variable

    return nullptr; // O algún valor que necesites retornar
}








    std::any visitInferredVarDeclaration(CobraParser::InferredVarDeclarationContext *ctx) override {

    return visitChildren(ctx);
  }

    std::any visitRangeDeclaration(CobraParser::RangeDeclarationContext *ctx) override {
    // Obtener el nombre de la variable y los límites del rango
    std::string name = ctx->IDENTIFIER()->getText();
    Value* startValue = std::any_cast<Value*>(visit(ctx->expression(0)));
    Value* endValue = std::any_cast<Value*>(visit(ctx->expression(1)));

    if (!startValue->getType()->isIntegerTy() || !endValue->getType()->isIntegerTy()){
        std::cerr << "Error: los límites del rango deben ser enteros." << std::endl;
        return nullptr;
    }
    ConstantInt* start = llvm::dyn_cast<llvm::ConstantInt>(startValue);
    ConstantInt* end = llvm::dyn_cast<llvm::ConstantInt>(endValue);

    int size=end->getSExtValue() - start->getSExtValue()+1;
    std::vector<Value*> values;
    Type* integer=Type::getInt32Ty(C);
    for(int i=0; i<size; i++){
        llvm::Value* val = ConstantInt::get(integer, start->getSExtValue() + i);
        values.push_back(val);
    }
    ArrayType*arrayType=ArrayType::get(integer,values.size());
    AllocaInst*alloc=irBuilder->CreateAlloca(arrayType,nullptr,name);
    for (int i=0; i<size; i++){
        Value*val=ConstantInt::get(integer,i);
        std::vector<Value*>vec={
            ConstantInt::get(integer,0),
            val
        };
        Value*arrayPtr=irBuilder->CreateGEP(arrayType,alloc,vec,"rangepointer");
        irBuilder->CreateStore(values[i],arrayPtr);
    }
    namedValues[name]=alloc;

    return nullptr;
}




    std::any visitListCollection(CobraParser::ListCollectionContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitDictCollection(CobraParser::DictCollectionContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitAssignment(CobraParser::AssignmentContext *ctx) override {
        std::string name = ctx->IDENTIFIER()->getText();
        if (namedValues.find(name) == namedValues.end()) {
        std::cerr << "Error: la variable '" << name << "' no ha sido declarada." << std::endl;
            return nullptr;
        }
        AllocaInst *alloc = dyn_cast<AllocaInst>(namedValues[name]);
        Value* value = any_cast<Value*>(ctx->expression()->accept(this));
        irBuilder->CreateStore(value,alloc);
        return nullptr;
  }

std::any visitDisplay(CobraParser::DisplayContext *ctx) override {
    std::vector<Value*> values;

    // Iterar sobre los hijos del contexto
    for (auto child : ctx->children) {
        // Verifica si el hijo es un STRING
        if (child->getText()[0] == '"' && child->getText().back() == '"') {
            std::string strValue = child->getText();
            strValue = strValue.substr(1, strValue.length() - 2); // Quita las comillas dobles
            
            // Crear un valor LLVM para el string
            Value* stringValue = stringToValue(C, *M, strValue);
            values.push_back(stringValue);
        } 
        // Verifica si es un identificador (nombre de variable)
        else if (std::regex_match(child->getText(), std::regex("^[a-zA-Z_][a-zA-Z_0-9]*$"))) {
            std::string varName = child->getText();
            if (namedValues.find(varName) != namedValues.end()) {
                // Si es un nombre de variable conocido, obtenemos la dirección de memoria
                Value* varAddress = namedValues[varName];
                
                // Deducimos el tipo a partir del alloca
                if (AllocaInst* alloca = dyn_cast<AllocaInst>(varAddress)) {
                    Type* allocatedType = alloca->getAllocatedType();
                    LoadInst* loadedValue = irBuilder->CreateLoad(allocatedType, varAddress, "load_value");
                    values.push_back(loadedValue);
                }
            }
        }
        // Si es una expresión, la procesamos
        else {
            if (auto expressionContext = dynamic_cast<CobraParser::ExpressionContext*>(child)) {
                if (Value* value = any_cast<Value*>(expressionContext->accept(this))) {
                    values.push_back(value);
                }
            }
        }
    }

    // Llamamos a printf para imprimir los valores recogidos
    for (Value* value : values) {
        callPrintf(value);
    }

    return nullptr;
}



  llvm::Value* stringToValue(llvm::LLVMContext& context, llvm::Module& module, const std::string& str) {
    // Crear un IRBuilder para construir IR
    llvm::IRBuilder<> builder(context);
    
    // Crear una cadena constante
    llvm::ArrayType* arrayType = llvm::ArrayType::get(llvm::Type::getInt8Ty(context), str.size() + 1); // +1 para el null terminator
    llvm::Constant* stringConstant = llvm::ConstantDataArray::getString(context, str, true);
    
    // Crear un global variable para la cadena
    llvm::GlobalVariable* globalString = new llvm::GlobalVariable(
        module, 
        arrayType, 
        true, // isConstant
        llvm::GlobalValue::PrivateLinkage, 
        stringConstant, 
        ".str"
    );
    
    // Obtener la dirección de la cadena
    llvm::Type* elementType = globalString->getValueType();
    llvm::Value* stringPointer = builder.CreateConstGEP2_32(elementType, globalString, 0, 0, "stringPointer");


    
    return stringPointer; // Retorna el Value* que apunta a la cadena
}





    std::any visitGetInput(CobraParser::GetInputContext *ctx) override {
    return visitChildren(ctx);
  }

std::any visitFunctionDef(CobraParser::FunctionDefContext *ctx) override {
    std::string functionName = ctx->IDENTIFIER(0)->getText();
    
    // First analyze the return type by looking at the return block if it exists
    llvm::Type* returnType = nullptr;
    if (ctx->returnBlock()) {
        auto returnExpr = ctx->returnBlock()->expression();
        if (returnExpr) {
            // Visit the expression to determine its type
            std::any result = visit(returnExpr);
            llvm::Value* returnValue = std::any_cast<llvm::Value*>(result);
            returnType = returnValue->getType();
        }
    }
    
    // If no return type could be determined, default to double
    if (!returnType) {
        returnType = llvm::Type::getDoubleTy(C);
    }

    std::vector<std::string> paramNames;
    std::vector<llvm::Type*> paramTypes;

    // Collecting parameter names and types
    for (size_t i = 1; i < ctx->IDENTIFIER().size(); i++) {
        paramNames.push_back(ctx->IDENTIFIER(i)->getText());
        paramTypes.push_back(llvm::Type::getDoubleTy(C));
    }
    
    llvm::FunctionType* functionType = llvm::FunctionType::get(returnType, paramTypes, false);
    llvm::Function* function = llvm::Function::Create(functionType, llvm::Function::ExternalLinkage, functionName, M);

    // Create the entry block for the function
    llvm::BasicBlock* entryBB = llvm::BasicBlock::Create(C, "entry", function);
    irBuilder->SetInsertPoint(entryBB);
    
    currentFunction = function;

    // Handle function parameters
    size_t idx = 0;
    for (auto &arg : function->args()) {
        arg.setName(paramNames[idx]);
        llvm::AllocaInst* alloca = irBuilder->CreateAlloca(arg.getType(), nullptr, paramNames[idx]);
        irBuilder->CreateStore(&arg, alloca);
        namedValues[paramNames[idx]] = alloca;
        idx++;
    }

    // Visit either block or returnBlock
    if (ctx->block()) {
        visit(ctx->block());
        // If regular block, add default return since there's no explicit return
        if (currentFunction->getReturnType()->isDoubleTy()) {
            irBuilder->CreateRet(llvm::ConstantFP::get(llvm::Type::getDoubleTy(C), 0.0));
        }
    } else if (ctx->returnBlock()) {
        visit(ctx->returnBlock());
    }

    return function;
}

std::any visitBlock(CobraParser::BlockContext *ctx) override {
    symbolTable.enterScope();

    // Visit all statements in the block
    for (auto statement : ctx->statement()) {
        visit(statement);
    }

    symbolTable.exitScope();
    return nullptr;
}

std::any visitReturnBlock(CobraParser::ReturnBlockContext *ctx) override {
    symbolTable.enterScope();
    
    // Visit statements before return
    for (auto statement : ctx->statement()) {
        visit(statement);
    }
    
    // Handle return expression
    std::any result = visit(ctx->expression());
    llvm::Value* returnValue = std::any_cast<llvm::Value*>(result);
    
    // Convert return value to match function return type if needed
    llvm::Type* expectedType = currentFunction->getReturnType();
    if (returnValue->getType() != expectedType) {
        if (returnValue->getType()->isIntegerTy() && expectedType->isDoubleTy()) {
            // Convert integer to double
            returnValue = irBuilder->CreateSIToFP(returnValue, expectedType, "conv_to_double");
        } else if (returnValue->getType()->isDoubleTy() && expectedType->isIntegerTy()) {
            // Convert double to integer
            returnValue = irBuilder->CreateFPToSI(returnValue, expectedType, "conv_to_int");
        }
    }
    
    // Create return instruction
    irBuilder->CreateRet(returnValue);
    
    symbolTable.exitScope();
    return nullptr;
}





    std::any visitConditional(CobraParser::ConditionalContext *ctx) override {
    Value* leftExpr = std::any_cast<Value*>(visit(ctx->expression(0)));
    Value* rightExpr = std::any_cast<Value*>(visit(ctx->expression(1)));
    std::string comparison = ctx->comparisonOperator(0)->getText();

    llvm::Function *currentFunction = irBuilder->GetInsertBlock()->getParent();
    
    // Create all basic blocks upfront
    llvm::BasicBlock *thenBB = llvm::BasicBlock::Create(C, "then", currentFunction);
    llvm::BasicBlock *mergeBB = llvm::BasicBlock::Create(C, "merge");
    llvm::BasicBlock *elseBB = nullptr;
    llvm::BasicBlock *checkNextBB = nullptr;

    // Type conversion for comparisons
    llvm::Type *floatType = llvm::Type::getFloatTy(C);            
    if (leftExpr->getType()->isIntegerTy()) {
        leftExpr = irBuilder->CreateSIToFP(leftExpr, floatType, "leftToFloat");
    } else if (leftExpr->getType()->isDoubleTy()) {
        leftExpr = irBuilder->CreateFPCast(leftExpr, floatType, "leftToFloat");
    }

    if (rightExpr->getType()->isIntegerTy()) {
        rightExpr = irBuilder->CreateSIToFP(rightExpr, floatType, "rightToFloat");
    } else if (rightExpr->getType()->isDoubleTy()) {
        rightExpr = irBuilder->CreateFPCast(rightExpr, floatType, "rightToFloat");
    }

    // Set up main comparison
    llvm::CmpInst::Predicate pred;
    if (comparison == "<") pred = llvm::CmpInst::FCMP_OLT;
    else if (comparison == "<=") pred = llvm::CmpInst::FCMP_OLE;
    else if (comparison == ">") pred = llvm::CmpInst::FCMP_OGT;
    else if (comparison == ">=") pred = llvm::CmpInst::FCMP_OGE;
    else if (comparison == "==") pred = llvm::CmpInst::FCMP_OEQ;
    else if (comparison == "!=") pred = llvm::CmpInst::FCMP_ONE;
    else throw std::runtime_error("Unknown comparison operator: " + comparison);
    
    Value* condition = irBuilder->CreateFCmp(pred, leftExpr, rightExpr, "fcmp");

    // Create otherwiseWhen blocks
    std::vector<llvm::BasicBlock*> otherwiseWhenBlocks;
    size_t otherwiseWhenCount = ctx->OTHERWISEWHEN().size();
    for (size_t i = 0; i < otherwiseWhenCount; i++) {
        otherwiseWhenBlocks.push_back(
            llvm::BasicBlock::Create(C, "otherwiseWhen" + std::to_string(i), currentFunction)
        );
    }

    // Create else block if needed
    bool hasOtherwise = ctx->OTHERWISE() != nullptr;
    if (hasOtherwise) {
        elseBB = llvm::BasicBlock::Create(C, "else", currentFunction);
    }

    // Create branches
    irBuilder->CreateCondBr(condition, thenBB, otherwiseWhenBlocks.empty() ? (elseBB ? elseBB : mergeBB) : otherwiseWhenBlocks[0]);

    // Generate otherwiseWhen blocks
    for (size_t i = 0; i < otherwiseWhenBlocks.size(); i++) {
        irBuilder->SetInsertPoint(otherwiseWhenBlocks[i]);

        // Add comparison for this otherwiseWhen
        std::string owComparison = ctx->comparisonOperator(i + 1)->getText();
        llvm::Value* owLeftExpr = std::any_cast<Value*>(visit(ctx->expression(2 + i * 2)));
        llvm::Value* owRightExpr = std::any_cast<Value*>(visit(ctx->expression(2 + i * 2 + 1)));
        
        // Type conversion for otherwiseWhen comparisons
        if (owLeftExpr->getType()->isIntegerTy()) {
            owLeftExpr = irBuilder->CreateSIToFP(owLeftExpr, floatType, "owLeftToFloat");
        } else if (owLeftExpr->getType()->isDoubleTy()) {
            owLeftExpr = irBuilder->CreateFPCast(owLeftExpr, floatType, "owLeftToFloat");
        }

        if (owRightExpr->getType()->isIntegerTy()) {
            owRightExpr = irBuilder->CreateSIToFP(owRightExpr, floatType, "owRightToFloat");
        } else if (owRightExpr->getType()->isDoubleTy()) {
            owRightExpr = irBuilder->CreateFPCast(owRightExpr, floatType, "owRightToFloat");
        }

        llvm::CmpInst::Predicate owPred;
        if (owComparison == "<") owPred = llvm::CmpInst::FCMP_OLT;
        else if (owComparison == "<=") owPred = llvm::CmpInst::FCMP_OLE;
        else if (owComparison == ">") owPred = llvm::CmpInst::FCMP_OGT;
        else if (owComparison == ">=") owPred = llvm::CmpInst::FCMP_OGE;
        else if (owComparison == "==") owPred = llvm::CmpInst::FCMP_OEQ;
        else if (owComparison == "!=") owPred = llvm::CmpInst::FCMP_ONE;
        else throw std::runtime_error("Unknown comparison operator in otherwiseWhen: " + owComparison);
        
        llvm::Value* owCondition = irBuilder->CreateFCmp(owPred, owLeftExpr, owRightExpr, "owCmp");

        // Conditionally branch into next block
        irBuilder->CreateCondBr(owCondition, thenBB, (i == otherwiseWhenBlocks.size() - 1 ? (elseBB ? elseBB : mergeBB) : otherwiseWhenBlocks[i + 1]));
    }

    // Generate then block
    irBuilder->SetInsertPoint(thenBB);
    visit(ctx->block(0));
    irBuilder->CreateBr(mergeBB);

    // Generate else block if it exists
    if (elseBB) {
        irBuilder->SetInsertPoint(elseBB);
        visit(ctx->block(ctx->block().size() - 1));
        irBuilder->CreateBr(mergeBB);
    }

    // Set up merge block
    mergeBB->insertInto(currentFunction);
    irBuilder->SetInsertPoint(mergeBB);

    return nullptr;
}



    std::any visitComparisonOperator(CobraParser::ComparisonOperatorContext *ctx) override {
    return nullptr; // Nothing ;)
  }
    std::any visitLoopStruct(CobraParser::LoopStructContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitRepeatStruct(CobraParser::RepeatStructContext *ctx) override {
    // Obtener las expresiones de inicio, fin e incremento como Value*
    Value *startValue = std::any_cast<Value*>(ctx->expression(0)->accept(this));
    Value *endValue = std::any_cast<Value*>(ctx->expression(1)->accept(this));
    Value *stepValue = std::any_cast<Value*>(ctx->expression(2)->accept(this));

    // Convertir valores a int32 si es necesario
    Type *int32Type = Type::getInt32Ty(C);
    if (startValue->getType()->isFloatingPointTy()) {
        startValue = irBuilder->CreateFPToSI(startValue, int32Type, "startToInt");
    }
    if (endValue->getType()->isFloatingPointTy()) {
        endValue = irBuilder->CreateFPToSI(endValue, int32Type, "endToInt");
    }
    if (stepValue->getType()->isFloatingPointTy()) {
        stepValue = irBuilder->CreateFPToSI(stepValue, int32Type, "stepToInt");
    }

    // Crear el bucle for en IR
    Function *function = irBuilder->GetInsertBlock()->getParent();
    BasicBlock *loopBlock = BasicBlock::Create(C, "loop", function);
    BasicBlock *afterBlock = BasicBlock::Create(C, "afterloop", function);

    // Inicializar el contador
    Value *counter = irBuilder->CreateAlloca(int32Type, nullptr, "counter");
    irBuilder->CreateStore(startValue, counter);

    // Saltar al bloque del bucle
    irBuilder->CreateBr(loopBlock);

    // Generar el cuerpo del bucle
    irBuilder->SetInsertPoint(loopBlock);

    // Cargar y comparar el contador
    Value *loadedCounter = irBuilder->CreateLoad(int32Type, counter);
    Value *condition = irBuilder->CreateICmpSLT(loadedCounter, endValue);

    // Incrementar el contador antes de procesar el cuerpo
    Value *incrementedCounter = irBuilder->CreateAdd(loadedCounter, stepValue);
    irBuilder->CreateStore(incrementedCounter, counter);

    // Generar salto condicional hacia el bucle o el bloque de salida
    BasicBlock *bodyBlock = BasicBlock::Create(C, "body", function);
    irBuilder->CreateCondBr(condition, bodyBlock, afterBlock);

    // Procesar el cuerpo del bucle
    irBuilder->SetInsertPoint(bodyBlock);
    ctx->block()->accept(this);
    irBuilder->CreateBr(loopBlock); // Salto al inicio del bucle

    // Continuar después del bucle
    irBuilder->SetInsertPoint(afterBlock);

    return nullptr;
}



    std::any visitWaitLoop(CobraParser::WaitLoopContext *ctx) override {
         // Obtiene el texto del token TIME
        std::string timeText = ctx->TIME()->getText();

        // Extraer el número de segundos desde el token TIME
        size_t pos = timeText.find("seconds");
        if (pos == std::string::npos) {
            std::cerr << "Error: formato inválido para el tiempo en 'pause'." << std::endl;
            return nullptr; // Manejar el error
        }
        int seconds = std::stoi(timeText.substr(0, pos));

        // Generar código para la espera (simulación de un bucle o llamada a función externa)
        Function *sleepFunc = M->getFunction("sleep");
        if (!sleepFunc) {
            // Si no existe, declarar la función sleep (ej. estándar POSIX)
            FunctionType *sleepType = FunctionType::get(Type::getVoidTy(C), {Type::getInt32Ty(C)}, false);
            sleepFunc = Function::Create(sleepType, Function::ExternalLinkage, "sleep", M);
        }

        // Llama a la función sleep con el número de segundos
        Value *timeValue = ConstantInt::get(Type::getInt32Ty(C), seconds);
        irBuilder->CreateCall(sleepFunc, {timeValue});

        // Ejecuta el bloque de código después de la espera
        ctx->block()->accept(this);

        return nullptr;
  }

    std::any visitObjectDecl(CobraParser::ObjectDeclContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitArrayDecl(CobraParser::ArrayDeclContext *ctx) override {
        auto datatype=ctx->dataType()->accept(this);
        Type*type=std::any_cast<Type*>(datatype);
        std::string name=ctx->IDENTIFIER()->getText();
        std::vector<Value*> elements;
        for (auto exprCtx : ctx->expression()) {
            Value *value = std::any_cast<Value *>(exprCtx->accept(this));

            // Realizar conversiones si el tipo de la expresión no coincide con el tipo esperado
            if (value->getType() != type) {
                if (type->isIntegerTy() && value->getType()->isFloatingPointTy()) {
                    value = irBuilder->CreateFPToSI(value, type, "convertToInt");
                } else if (type->isFloatingPointTy() && value->getType()->isIntegerTy()) {
                    value = irBuilder->CreateSIToFP(value, type, "convertToFloat");
                } else {
                    std::cerr << "Error: Tipo incompatible en la inicialización del arreglo." << std::endl;
                    return nullptr;
                }
            }

            elements.push_back(value);
        }
        // Crear el tipo del arreglo en IR
            ArrayType *arrayType = ArrayType::get(type, elements.size());

            // Reservar espacio para el arreglo
            AllocaInst *alloc = irBuilder->CreateAlloca(arrayType, nullptr, name);

            // Inicializar los elementos del arreglo
            for (size_t i = 0; i < elements.size(); ++i) {
                Value *index = ConstantInt::get(Type::getInt32Ty(C), i);
                std::vector<Value *> indices = {
                    ConstantInt::get(Type::getInt32Ty(C), 0), // Base del arreglo
                    index                                           // Índice actual
                };

                Value *elementPtr = irBuilder->CreateGEP(arrayType, alloc, indices, "elementPtr");
                irBuilder->CreateStore(elements[i], elementPtr);
            }

            // Almacenar la referencia del arreglo en el mapa de valores nombrados
            namedValues[name] = alloc;
        return nullptr;
  }

    std::any visitArrayAccess(CobraParser::ArrayAccessContext *ctx) override {
    // Obtener el nombre del arreglo
    std::string arrayName = ctx->IDENTIFIER()->getText();

    // Verificar que el arreglo exista en namedValues
    if (namedValues.find(arrayName) == namedValues.end()) {
        std::cerr << "Error: El arreglo " << arrayName << " no está definido." << std::endl;
        return nullptr;
    }

    // Obtener la dirección del arreglo
    Value* arrayAddress = namedValues[arrayName];

    // Verificar que es una instrucción de asignación
    AllocaInst* alloca = dyn_cast<AllocaInst>(arrayAddress);
    if (!alloca) {
        std::cerr << "Error: " << arrayName << " no es un arreglo válido." << std::endl;
        return nullptr;
    }

    // Obtener el tipo del arreglo
    Type* arrayType = alloca->getAllocatedType();
    if (!arrayType->isArrayTy()) {
        std::cerr << "Error: " << arrayName << " no es un tipo de arreglo." << std::endl;
        return nullptr;
    }

    // Evaluar el índice
    Value* indexValue = std::any_cast<Value*>(ctx->expression()->accept(this));

    // Asegurarse de que el índice sea i32
    if (!indexValue->getType()->isIntegerTy(32)) {
        indexValue = irBuilder->CreateIntCast(indexValue, Type::getInt32Ty(C), false, "indexCast");
    }

    // Calcular el puntero al elemento del arreglo
    Value* elementPtr = irBuilder->CreateGEP(
        arrayType,                       // Tipo del arreglo
        alloca,                          // Dirección base del arreglo
        {ConstantInt::get(Type::getInt32Ty(C), 0), indexValue}, // Índice
        "elementPtr"
    );

    // Cargar el valor del elemento
    Type* elementType = arrayType->getArrayElementType();
    Value* elementValue = irBuilder->CreateLoad(elementType, elementPtr, "load_element");

    return elementValue;
}

    std::any visitMatrixDecl(CobraParser::MatrixDeclContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitParameterList(CobraParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

std::any visitDataType(CobraParser::DataTypeContext *ctx) override {
    std::string dataTypeStr = ctx->getText();

    // Verificar y devolver el tipo adecuado como Type*
    if (dataTypeStr == "number") {
        return std::make_any<Type*>(Type::getInt32Ty(C)); // Type* devuelto
    } else if (dataTypeStr == "decimal") {
        return std::make_any<Type*>(Type::getDoubleTy(C)); // Type* devuelto
    } else if (dataTypeStr == "letter") {
        return std::make_any<Type*>(Type::getInt8Ty(C)); // Type* devuelto
    } else if (dataTypeStr == "string") {
        return std::make_any<Type*>(PointerType::getUnqual(IntegerType::getInt8Ty(C))); // Type* devuelto
    } else if (dataTypeStr == "flag") {
        return std::make_any<Type*>(Type::getInt1Ty(C)); // Type* devuelto
    }

    throw std::runtime_error("Unknown data type: " + dataTypeStr);
}





    std::any visitParen(CobraParser::ParenContext *ctx) override {
    // Visita la expresión dentro de los paréntesis
    return ctx->expression()->accept(this);
}

    std::any visitSubsum(CobraParser::SubsumContext *ctx) override {
    // Obtener los valores de las expresiones
    llvm::Value *left = std::any_cast<llvm::Value*>(visit(ctx->expression(0)));
    llvm::Value *right = std::any_cast<llvm::Value*>(visit(ctx->expression(1)));

    // Determinar si alguno de los dos es de tipo flotante
    bool isLeftFloat = left->getType()->isFloatingPointTy();
    bool isRightFloat = right->getType()->isFloatingPointTy();

    llvm::Value *finalLeft = left;
    llvm::Value *finalRight = right;

    // Si alguno de los dos es flotante, convertimos ambos a flotante
    if (isLeftFloat || isRightFloat) {
        if (!isLeftFloat) {
            finalLeft = irBuilder->CreateSIToFP(left, Type::getDoubleTy(C), "leftToFloat");
        }
        if (!isRightFloat) {
            finalRight = irBuilder->CreateSIToFP(right, Type::getDoubleTy(C), "rightToFloat");
        }

        // Realizar la suma o resta en punto flotante
        if (ctx->ADD()) {
            return static_cast<llvm::Value*>(irBuilder->CreateFAdd(finalLeft, finalRight, "addtmp"));
        } else if (ctx->SUB()) {
            return static_cast<llvm::Value*>(irBuilder->CreateFSub(finalLeft, finalRight, "subtmp"));
        }
    } else {
        // Si ambos son enteros, realizar la suma o resta en enteros
        if (ctx->ADD()) {
            return static_cast<llvm::Value*>(irBuilder->CreateAdd(finalLeft, finalRight, "addtmp"));
        } else if (ctx->SUB()) {
            return static_cast<llvm::Value*>(irBuilder->CreateSub(finalLeft, finalRight, "subtmp"));
        }
    }

    throw std::runtime_error("Operador no soportado en visitSubsum.");
}


    std::any visitPower(CobraParser::PowerContext *ctx) override {
    // Obtener los valores de las expresiones base y exponente
    llvm::Value *base = std::any_cast<llvm::Value*>(visit(ctx->expression(0)));
    llvm::Value *exponent = std::any_cast<llvm::Value*>(visit(ctx->expression(1)));

    // Convertir ambos valores a tipo flotante (doble)
    llvm::Value *finalBase = base;
    llvm::Value *finalExponent = exponent;

    // Si la base no es flotante, la convertimos a flotante
    if (!base->getType()->isFloatingPointTy()) {
        finalBase = irBuilder->CreateSIToFP(base, Type::getDoubleTy(C), "baseToFloat");
    }

    // Si el exponente no es flotante, lo convertimos a flotante
    if (!exponent->getType()->isFloatingPointTy()) {
        finalExponent = irBuilder->CreateSIToFP(exponent, Type::getDoubleTy(C), "expToFloat");
    }

    // Obtener la función intrínseca de pow para punto flotante (doble)
    Function *powFunc = llvm::Intrinsic::getOrInsertDeclaration(M, llvm::Intrinsic::pow, { Type::getDoubleTy(C) });

    // Llamar a la función de potencia con los valores convertidos a flotante
    return static_cast<llvm::Value*>(irBuilder->CreateCall(powFunc, {finalBase, finalExponent}, "powtmp"));
}


    std::any visitLitExp(CobraParser::LitExpContext *ctx) override {
               // std::cerr << "Tipo de LitExpContext: " << typeid(*ctx).name() << std::endl;
          //std::cerr << "Contenido de LitExpContext: " << ctx->getText() << std::endl;

          // Asumiendo que ctx es de tipo LitExpContext, y el primer hijo es el literal
          if (ctx->children.empty()) {
              std::cerr << "No hay hijos en LitExpContext" << std::endl;
              return {}; // Manejo de error si no hay hijos
          }

          auto* literalCtx = ctx->children[0];

          // Aquí verificamos qué tipo de literal es este hijo
          if (auto intCtx = dynamic_cast<CobraParser::IntLiteralContext*>(literalCtx)) {
            //  std::cerr << "Encontrado un literal entero: " << intCtx->getText() << std::endl;
              return visitIntLiteral(intCtx);
          } else if (auto floatCtx = dynamic_cast<CobraParser::FloatLiteralContext*>(literalCtx)) {
              //std::cerr << "Encontrado un literal flotante: " << floatCtx->getText() << std::endl;
              return visitFloatLiteral(floatCtx);
          } else if (auto charCtx = dynamic_cast<CobraParser::CharLiteralContext*>(literalCtx)) {
             // std::cerr << "Encontrado un literal de carácter: " << charCtx->getText() << std::endl;
              return visitCharLiteral(charCtx);
          } else if (auto stringCtx = dynamic_cast<CobraParser::StringLiteralContext*>(literalCtx)) {
             // std::cerr << "Encontrado un literal de cadena: " << stringCtx->getText() << std::endl;
              return visitStringLiteral(stringCtx);
          } else if (auto boolCtx = dynamic_cast<CobraParser::BoolLiteralContext*>(literalCtx)) {
             // std::cerr << "Encontrado un literal booleano: " << boolCtx->getText() << std::endl;
              return visitBoolLiteral(boolCtx);
          } else if (auto identifierCtx = dynamic_cast<CobraParser::IdentifierLiteralContext*>(literalCtx)) {
              //std::cerr << "Encontrado un literal de identificador: " << identifierCtx->getText() << std::endl;
              return visitIdentifierLiteral(identifierCtx);
          } else {
              std::cerr << "No se encontró un literal válido en el hijo." << std::endl;
              return {}; // Manejo de error si no se encuentra un tipo de literal válido
          }



    }





    std::any visitMuldiv(CobraParser::MuldivContext *ctx) override {
    // Obtener los valores de las expresiones
    llvm::Value *left = std::any_cast<llvm::Value*>(visit(ctx->expression(0)));
    llvm::Value *right = std::any_cast<llvm::Value*>(visit(ctx->expression(1)));

    llvm::Value *finalLeft = left;
    llvm::Value *finalRight = right;

    // Comprobamos si se trata de una división
    if (ctx->DIV()) {
        // Convertimos ambos operandos a doble precisión para asegurar precisión en la división
        if (!left->getType()->isFloatingPointTy()) {
            finalLeft = irBuilder->CreateSIToFP(left, Type::getDoubleTy(C), "leftToDouble");
        }
        if (!right->getType()->isFloatingPointTy()) {
            finalRight = irBuilder->CreateSIToFP(right, Type::getDoubleTy(C), "rightToDouble");
        }

        // Realizar la división en punto flotante (doble precisión)
        return static_cast<llvm::Value*>(irBuilder->CreateFDiv(finalLeft, finalRight, "divtmp"));
    }

    // Si es una multiplicación, comprobamos si alguno es flotante
    bool isLeftFloat = left->getType()->isFloatingPointTy();
    bool isRightFloat = right->getType()->isFloatingPointTy();

    // Convertir ambos a flotante si al menos uno es flotante
    if (isLeftFloat || isRightFloat) {
        if (!isLeftFloat) {
            finalLeft = irBuilder->CreateSIToFP(left, Type::getDoubleTy(C), "leftToFloat");
        }
        if (!isRightFloat) {
            finalRight = irBuilder->CreateSIToFP(right, Type::getDoubleTy(C), "rightToFloat");
        }
        // Realizar la multiplicación en punto flotante
        return static_cast<llvm::Value*>(irBuilder->CreateFMul(finalLeft, finalRight, "multmp"));
    } else {
        // Realizar la multiplicación en enteros
        return static_cast<llvm::Value*>(irBuilder->CreateMul(finalLeft, finalRight, "multmp"));
    }

    throw std::runtime_error("Operador no soportado en visitMuldiv.");
}



   std::any visitIntLiteral(CobraParser::IntLiteralContext *ctx) override {
    //std::cerr << "hola llegúe aasdklasd" << std::endl;
    int value = std::stoi(ctx->INTEGER()->getText());

    // Retorna un ConstantInt para el valor entero
    return std::make_any<llvm::Value*>(llvm::ConstantInt::get(llvm::Type::getInt32Ty(C), value));
}

    std::any visitFloatLiteral(CobraParser::FloatLiteralContext *ctx) override {
    double value = std::stod(ctx->DECIMAL()->getText());

    // Retorna un ConstantFP para el valor flotante
    return std::make_any<llvm::Value*>(llvm::ConstantFP::get(llvm::Type::getDoubleTy(C), value));
}

std::any visitCharLiteral(CobraParser::CharLiteralContext *ctx) override {
    char value = ctx->CHARACTER()->getText()[1]; // Asumiendo que el caracter está entre comillas
    int asciiValue = static_cast<int>(value);

    // Retorna un ConstantInt para el valor del carácter (como un valor entero de 32 bits)
    return std::make_any<llvm::Value*>(llvm::ConstantInt::get(llvm::Type::getInt32Ty(C), asciiValue));
}

std::any visitStringLiteral(CobraParser::StringLiteralContext *ctx) override{
    std::string value = ctx->TEXT()->getText();
    value = value.substr(1, value.size() - 2); // Elimina las comillas alrededor de la cadena

    // Convierte el string a un array de caracteres y lo guarda en una constante de LLVM
    llvm::ArrayType* arrayType = llvm::ArrayType::get(llvm::Type::getInt8Ty(C), value.size() + 1); // +1 para el null terminator
    llvm::Constant* constStr = llvm::ConstantDataArray::getString(C, value, true);
    llvm::GlobalVariable* globalStr = new llvm::GlobalVariable(*M, arrayType, true, llvm::GlobalValue::PrivateLinkage, constStr);

    return std::make_any<llvm::Value*>(globalStr);
}

 std::any visitBoolLiteral(CobraParser::BoolLiteralContext *ctx) override {
    bool value = (ctx->BOOLEAN()->getText() == "true");

    // Retorna un ConstantInt para el valor booleano (0 o 1)
    return std::make_any<llvm::Value*>(llvm::ConstantInt::get(llvm::Type::getInt1Ty(C), value ? 1 : 0));
}

 std::any visitIdentifierLiteral(CobraParser::IdentifierLiteralContext *ctx) override {
    std::string varName = ctx->getText();

    // Busca el valor de la variable en el mapa de variables
    llvm::Value *varValue = namedValues[varName];
    if (!varValue) {
        throw std::runtime_error("Variable '" + varName + "' is not defined");
    }

    // Si es una variable almacenada en un alloca, deducimos el tipo a partir de la instrucción alloca
    if (AllocaInst *alloca = llvm::dyn_cast<AllocaInst>(varValue)) {
        Type *allocatedType = alloca->getAllocatedType();  // Obtiene el tipo de la variable desde la alloca
        llvm::Value *loadedValue = irBuilder->CreateLoad(allocatedType, varValue, varName);
        return loadedValue;
    }

    // Si no es un puntero (no es una instrucción alloca), ya es el valor inmediato, así que lo devuelve directamente
    return varValue;
}







};
#endif // __DRIVER_H__