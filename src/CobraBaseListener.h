
// Generated from ../src/Cobra.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CobraListener.h"


/**
 * This class provides an empty implementation of CobraListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CobraBaseListener : public CobraListener {
public:

  virtual void enterProgram(CobraParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(CobraParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(CobraParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(CobraParser::StatementContext * /*ctx*/) override { }

  virtual void enterVarDeclaration(CobraParser::VarDeclarationContext * /*ctx*/) override { }
  virtual void exitVarDeclaration(CobraParser::VarDeclarationContext * /*ctx*/) override { }

  virtual void enterInferredVarDeclaration(CobraParser::InferredVarDeclarationContext * /*ctx*/) override { }
  virtual void exitInferredVarDeclaration(CobraParser::InferredVarDeclarationContext * /*ctx*/) override { }

  virtual void enterRangeDeclaration(CobraParser::RangeDeclarationContext * /*ctx*/) override { }
  virtual void exitRangeDeclaration(CobraParser::RangeDeclarationContext * /*ctx*/) override { }

  virtual void enterListCollection(CobraParser::ListCollectionContext * /*ctx*/) override { }
  virtual void exitListCollection(CobraParser::ListCollectionContext * /*ctx*/) override { }

  virtual void enterDictCollection(CobraParser::DictCollectionContext * /*ctx*/) override { }
  virtual void exitDictCollection(CobraParser::DictCollectionContext * /*ctx*/) override { }

  virtual void enterAssignment(CobraParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(CobraParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterDisplay(CobraParser::DisplayContext * /*ctx*/) override { }
  virtual void exitDisplay(CobraParser::DisplayContext * /*ctx*/) override { }

  virtual void enterGetInput(CobraParser::GetInputContext * /*ctx*/) override { }
  virtual void exitGetInput(CobraParser::GetInputContext * /*ctx*/) override { }

  virtual void enterFunctionDef(CobraParser::FunctionDefContext * /*ctx*/) override { }
  virtual void exitFunctionDef(CobraParser::FunctionDefContext * /*ctx*/) override { }

  virtual void enterBlock(CobraParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(CobraParser::BlockContext * /*ctx*/) override { }

  virtual void enterReturnBlock(CobraParser::ReturnBlockContext * /*ctx*/) override { }
  virtual void exitReturnBlock(CobraParser::ReturnBlockContext * /*ctx*/) override { }

  virtual void enterConditional(CobraParser::ConditionalContext * /*ctx*/) override { }
  virtual void exitConditional(CobraParser::ConditionalContext * /*ctx*/) override { }

  virtual void enterComparisonOperator(CobraParser::ComparisonOperatorContext * /*ctx*/) override { }
  virtual void exitComparisonOperator(CobraParser::ComparisonOperatorContext * /*ctx*/) override { }

  virtual void enterLoopStruct(CobraParser::LoopStructContext * /*ctx*/) override { }
  virtual void exitLoopStruct(CobraParser::LoopStructContext * /*ctx*/) override { }

  virtual void enterRepeatStruct(CobraParser::RepeatStructContext * /*ctx*/) override { }
  virtual void exitRepeatStruct(CobraParser::RepeatStructContext * /*ctx*/) override { }

  virtual void enterWaitLoop(CobraParser::WaitLoopContext * /*ctx*/) override { }
  virtual void exitWaitLoop(CobraParser::WaitLoopContext * /*ctx*/) override { }

  virtual void enterObjectDecl(CobraParser::ObjectDeclContext * /*ctx*/) override { }
  virtual void exitObjectDecl(CobraParser::ObjectDeclContext * /*ctx*/) override { }

  virtual void enterArrayDecl(CobraParser::ArrayDeclContext * /*ctx*/) override { }
  virtual void exitArrayDecl(CobraParser::ArrayDeclContext * /*ctx*/) override { }

  virtual void enterMatrixDecl(CobraParser::MatrixDeclContext * /*ctx*/) override { }
  virtual void exitMatrixDecl(CobraParser::MatrixDeclContext * /*ctx*/) override { }

  virtual void enterParameterList(CobraParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(CobraParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterDataType(CobraParser::DataTypeContext * /*ctx*/) override { }
  virtual void exitDataType(CobraParser::DataTypeContext * /*ctx*/) override { }

  virtual void enterParen(CobraParser::ParenContext * /*ctx*/) override { }
  virtual void exitParen(CobraParser::ParenContext * /*ctx*/) override { }

  virtual void enterSubsum(CobraParser::SubsumContext * /*ctx*/) override { }
  virtual void exitSubsum(CobraParser::SubsumContext * /*ctx*/) override { }

  virtual void enterArrayAccess(CobraParser::ArrayAccessContext * /*ctx*/) override { }
  virtual void exitArrayAccess(CobraParser::ArrayAccessContext * /*ctx*/) override { }

  virtual void enterPower(CobraParser::PowerContext * /*ctx*/) override { }
  virtual void exitPower(CobraParser::PowerContext * /*ctx*/) override { }

  virtual void enterLitExp(CobraParser::LitExpContext * /*ctx*/) override { }
  virtual void exitLitExp(CobraParser::LitExpContext * /*ctx*/) override { }

  virtual void enterMuldiv(CobraParser::MuldivContext * /*ctx*/) override { }
  virtual void exitMuldiv(CobraParser::MuldivContext * /*ctx*/) override { }

  virtual void enterIntLiteral(CobraParser::IntLiteralContext * /*ctx*/) override { }
  virtual void exitIntLiteral(CobraParser::IntLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(CobraParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(CobraParser::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterCharLiteral(CobraParser::CharLiteralContext * /*ctx*/) override { }
  virtual void exitCharLiteral(CobraParser::CharLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(CobraParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(CobraParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterBoolLiteral(CobraParser::BoolLiteralContext * /*ctx*/) override { }
  virtual void exitBoolLiteral(CobraParser::BoolLiteralContext * /*ctx*/) override { }

  virtual void enterIdentifierLiteral(CobraParser::IdentifierLiteralContext * /*ctx*/) override { }
  virtual void exitIdentifierLiteral(CobraParser::IdentifierLiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

