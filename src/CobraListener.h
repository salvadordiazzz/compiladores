
// Generated from ../src/Cobra.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CobraParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CobraParser.
 */
class  CobraListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(CobraParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(CobraParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(CobraParser::StatementContext *ctx) = 0;
  virtual void exitStatement(CobraParser::StatementContext *ctx) = 0;

  virtual void enterVarDeclaration(CobraParser::VarDeclarationContext *ctx) = 0;
  virtual void exitVarDeclaration(CobraParser::VarDeclarationContext *ctx) = 0;

  virtual void enterInferredVarDeclaration(CobraParser::InferredVarDeclarationContext *ctx) = 0;
  virtual void exitInferredVarDeclaration(CobraParser::InferredVarDeclarationContext *ctx) = 0;

  virtual void enterRangeDeclaration(CobraParser::RangeDeclarationContext *ctx) = 0;
  virtual void exitRangeDeclaration(CobraParser::RangeDeclarationContext *ctx) = 0;

  virtual void enterListCollection(CobraParser::ListCollectionContext *ctx) = 0;
  virtual void exitListCollection(CobraParser::ListCollectionContext *ctx) = 0;

  virtual void enterDictCollection(CobraParser::DictCollectionContext *ctx) = 0;
  virtual void exitDictCollection(CobraParser::DictCollectionContext *ctx) = 0;

  virtual void enterAssignment(CobraParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(CobraParser::AssignmentContext *ctx) = 0;

  virtual void enterDisplay(CobraParser::DisplayContext *ctx) = 0;
  virtual void exitDisplay(CobraParser::DisplayContext *ctx) = 0;

  virtual void enterGetInput(CobraParser::GetInputContext *ctx) = 0;
  virtual void exitGetInput(CobraParser::GetInputContext *ctx) = 0;

  virtual void enterFunctionDef(CobraParser::FunctionDefContext *ctx) = 0;
  virtual void exitFunctionDef(CobraParser::FunctionDefContext *ctx) = 0;

  virtual void enterBlock(CobraParser::BlockContext *ctx) = 0;
  virtual void exitBlock(CobraParser::BlockContext *ctx) = 0;

  virtual void enterReturnBlock(CobraParser::ReturnBlockContext *ctx) = 0;
  virtual void exitReturnBlock(CobraParser::ReturnBlockContext *ctx) = 0;

  virtual void enterConditional(CobraParser::ConditionalContext *ctx) = 0;
  virtual void exitConditional(CobraParser::ConditionalContext *ctx) = 0;

  virtual void enterLoopStruct(CobraParser::LoopStructContext *ctx) = 0;
  virtual void exitLoopStruct(CobraParser::LoopStructContext *ctx) = 0;

  virtual void enterRepeatStruct(CobraParser::RepeatStructContext *ctx) = 0;
  virtual void exitRepeatStruct(CobraParser::RepeatStructContext *ctx) = 0;

  virtual void enterWaitLoop(CobraParser::WaitLoopContext *ctx) = 0;
  virtual void exitWaitLoop(CobraParser::WaitLoopContext *ctx) = 0;

  virtual void enterObjectDecl(CobraParser::ObjectDeclContext *ctx) = 0;
  virtual void exitObjectDecl(CobraParser::ObjectDeclContext *ctx) = 0;

  virtual void enterArrayDecl(CobraParser::ArrayDeclContext *ctx) = 0;
  virtual void exitArrayDecl(CobraParser::ArrayDeclContext *ctx) = 0;

  virtual void enterMatrixDecl(CobraParser::MatrixDeclContext *ctx) = 0;
  virtual void exitMatrixDecl(CobraParser::MatrixDeclContext *ctx) = 0;

  virtual void enterParameterList(CobraParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(CobraParser::ParameterListContext *ctx) = 0;

  virtual void enterDataType(CobraParser::DataTypeContext *ctx) = 0;
  virtual void exitDataType(CobraParser::DataTypeContext *ctx) = 0;

  virtual void enterParen(CobraParser::ParenContext *ctx) = 0;
  virtual void exitParen(CobraParser::ParenContext *ctx) = 0;

  virtual void enterSubsum(CobraParser::SubsumContext *ctx) = 0;
  virtual void exitSubsum(CobraParser::SubsumContext *ctx) = 0;

  virtual void enterPower(CobraParser::PowerContext *ctx) = 0;
  virtual void exitPower(CobraParser::PowerContext *ctx) = 0;

  virtual void enterLitExp(CobraParser::LitExpContext *ctx) = 0;
  virtual void exitLitExp(CobraParser::LitExpContext *ctx) = 0;

  virtual void enterMuldiv(CobraParser::MuldivContext *ctx) = 0;
  virtual void exitMuldiv(CobraParser::MuldivContext *ctx) = 0;

  virtual void enterIntLiteral(CobraParser::IntLiteralContext *ctx) = 0;
  virtual void exitIntLiteral(CobraParser::IntLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(CobraParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(CobraParser::FloatLiteralContext *ctx) = 0;

  virtual void enterCharLiteral(CobraParser::CharLiteralContext *ctx) = 0;
  virtual void exitCharLiteral(CobraParser::CharLiteralContext *ctx) = 0;

  virtual void enterStringLiteral(CobraParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(CobraParser::StringLiteralContext *ctx) = 0;

  virtual void enterBoolLiteral(CobraParser::BoolLiteralContext *ctx) = 0;
  virtual void exitBoolLiteral(CobraParser::BoolLiteralContext *ctx) = 0;

  virtual void enterIdentifierLiteral(CobraParser::IdentifierLiteralContext *ctx) = 0;
  virtual void exitIdentifierLiteral(CobraParser::IdentifierLiteralContext *ctx) = 0;


};

