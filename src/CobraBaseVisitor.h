
// Generated from ../src/Cobra.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CobraVisitor.h"


/**
 * This class provides an empty implementation of CobraVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CobraBaseVisitor : public CobraVisitor {
public:

  virtual std::any visitProgram(CobraParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(CobraParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDeclaration(CobraParser::VarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInferredVarDeclaration(CobraParser::InferredVarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRangeDeclaration(CobraParser::RangeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitListCollection(CobraParser::ListCollectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDictCollection(CobraParser::DictCollectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(CobraParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDisplay(CobraParser::DisplayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetInput(CobraParser::GetInputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDef(CobraParser::FunctionDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(CobraParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnBlock(CobraParser::ReturnBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditional(CobraParser::ConditionalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparisonOperator(CobraParser::ComparisonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopStruct(CobraParser::LoopStructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepeatStruct(CobraParser::RepeatStructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWaitLoop(CobraParser::WaitLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectDecl(CobraParser::ObjectDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayDecl(CobraParser::ArrayDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatrixDecl(CobraParser::MatrixDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(CobraParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataType(CobraParser::DataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParen(CobraParser::ParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubsum(CobraParser::SubsumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayAccess(CobraParser::ArrayAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPower(CobraParser::PowerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLitExp(CobraParser::LitExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMuldiv(CobraParser::MuldivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntLiteral(CobraParser::IntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatLiteral(CobraParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharLiteral(CobraParser::CharLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringLiteral(CobraParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolLiteral(CobraParser::BoolLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierLiteral(CobraParser::IdentifierLiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

