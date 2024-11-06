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

    std::unordered_map<std::string, llvm::Value*> namedValues;

    
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
    mainFunc = Function::Create(FunctionType::get(Type::getInt32Ty(C), false),
                                Function::ExternalLinkage, "main", M);
        
    irBuilder = new IRBuilder<>(BasicBlock::Create(C, "begin", mainFunc));
    

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
    irBuilder->CreateRet(llvm::ConstantInt::get(llvm::Type::getInt32Ty(C), 1));

        // Imprimir el IR generado
    M->print(llvm::outs(), nullptr);
    return {};
  }










    std::any visitStatement(CobraParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitVarDeclaration(CobraParser::VarDeclarationContext *ctx) override {
    // Obtiene el tipo de la variable desde el contexto
    std::any result = ctx->dataType()->accept(this);

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
    return visitChildren(ctx);
  }

    std::any visitListCollection(CobraParser::ListCollectionContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitDictCollection(CobraParser::DictCollectionContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitAssignment(CobraParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
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
    return visitChildren(ctx);
  }

    std::any visitBlock(CobraParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitConditional(CobraParser::ConditionalContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitLoopStruct(CobraParser::LoopStructContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitRepeatStruct(CobraParser::RepeatStructContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitWaitLoop(CobraParser::WaitLoopContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitObjectDecl(CobraParser::ObjectDeclContext *ctx) override {
    return visitChildren(ctx);
  }

    std::any visitArrayDecl(CobraParser::ArrayDeclContext *ctx) override {
    return visitChildren(ctx);
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