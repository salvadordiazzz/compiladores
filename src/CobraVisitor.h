
// Generated from ../src/Cobra.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CobraParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CobraParser.
 */
class  CobraVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CobraParser.
   */
    virtual std::any visitProgram(CobraParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(CobraParser::StatementContext *context) = 0;

    virtual std::any visitVarDeclaration(CobraParser::VarDeclarationContext *context) = 0;

    virtual std::any visitInferredVarDeclaration(CobraParser::InferredVarDeclarationContext *context) = 0;

    virtual std::any visitRangeDeclaration(CobraParser::RangeDeclarationContext *context) = 0;

    virtual std::any visitListCollection(CobraParser::ListCollectionContext *context) = 0;

    virtual std::any visitDictCollection(CobraParser::DictCollectionContext *context) = 0;

    virtual std::any visitAssignment(CobraParser::AssignmentContext *context) = 0;

    virtual std::any visitDisplay(CobraParser::DisplayContext *context) = 0;

    virtual std::any visitGetInput(CobraParser::GetInputContext *context) = 0;

    virtual std::any visitFunctionDef(CobraParser::FunctionDefContext *context) = 0;

    virtual std::any visitBlock(CobraParser::BlockContext *context) = 0;

    virtual std::any visitConditional(CobraParser::ConditionalContext *context) = 0;

    virtual std::any visitLoopStruct(CobraParser::LoopStructContext *context) = 0;

    virtual std::any visitRepeatStruct(CobraParser::RepeatStructContext *context) = 0;

    virtual std::any visitWaitLoop(CobraParser::WaitLoopContext *context) = 0;

    virtual std::any visitObjectDecl(CobraParser::ObjectDeclContext *context) = 0;

    virtual std::any visitArrayDecl(CobraParser::ArrayDeclContext *context) = 0;

    virtual std::any visitMatrixDecl(CobraParser::MatrixDeclContext *context) = 0;

    virtual std::any visitParameterList(CobraParser::ParameterListContext *context) = 0;

    virtual std::any visitDataType(CobraParser::DataTypeContext *context) = 0;

    virtual std::any visitParen(CobraParser::ParenContext *context) = 0;

    virtual std::any visitSubsum(CobraParser::SubsumContext *context) = 0;

    virtual std::any visitPower(CobraParser::PowerContext *context) = 0;

    virtual std::any visitLitExp(CobraParser::LitExpContext *context) = 0;

    virtual std::any visitMuldiv(CobraParser::MuldivContext *context) = 0;

    virtual std::any visitIntLiteral(CobraParser::IntLiteralContext *context) = 0;

    virtual std::any visitFloatLiteral(CobraParser::FloatLiteralContext *context) = 0;

    virtual std::any visitCharLiteral(CobraParser::CharLiteralContext *context) = 0;

    virtual std::any visitStringLiteral(CobraParser::StringLiteralContext *context) = 0;

    virtual std::any visitBoolLiteral(CobraParser::BoolLiteralContext *context) = 0;

    virtual std::any visitIdentifierLiteral(CobraParser::IdentifierLiteralContext *context) = 0;


};

