
// Generated from FutureC.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "FutureCParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by FutureCParser.
 */
class  FutureCListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(FutureCParser::ProgContext *ctx) = 0;
  virtual void exitProg(FutureCParser::ProgContext *ctx) = 0;

  virtual void enterStatement(FutureCParser::StatementContext *ctx) = 0;
  virtual void exitStatement(FutureCParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(FutureCParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(FutureCParser::AssignmentContext *ctx) = 0;

  virtual void enterExpression(FutureCParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(FutureCParser::ExpressionContext *ctx) = 0;

  virtual void enterLiteral(FutureCParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(FutureCParser::LiteralContext *ctx) = 0;

  virtual void enterI128Literal(FutureCParser::I128LiteralContext *ctx) = 0;
  virtual void exitI128Literal(FutureCParser::I128LiteralContext *ctx) = 0;

  virtual void enterU128Literal(FutureCParser::U128LiteralContext *ctx) = 0;
  virtual void exitU128Literal(FutureCParser::U128LiteralContext *ctx) = 0;

  virtual void enterUlongLiteral(FutureCParser::UlongLiteralContext *ctx) = 0;
  virtual void exitUlongLiteral(FutureCParser::UlongLiteralContext *ctx) = 0;

  virtual void enterLongLiteral(FutureCParser::LongLiteralContext *ctx) = 0;
  virtual void exitLongLiteral(FutureCParser::LongLiteralContext *ctx) = 0;

  virtual void enterUintLiteral(FutureCParser::UintLiteralContext *ctx) = 0;
  virtual void exitUintLiteral(FutureCParser::UintLiteralContext *ctx) = 0;

  virtual void enterByteLiteral(FutureCParser::ByteLiteralContext *ctx) = 0;
  virtual void exitByteLiteral(FutureCParser::ByteLiteralContext *ctx) = 0;

  virtual void enterUbyteLiteral(FutureCParser::UbyteLiteralContext *ctx) = 0;
  virtual void exitUbyteLiteral(FutureCParser::UbyteLiteralContext *ctx) = 0;

  virtual void enterShortLiteral(FutureCParser::ShortLiteralContext *ctx) = 0;
  virtual void exitShortLiteral(FutureCParser::ShortLiteralContext *ctx) = 0;

  virtual void enterUshortLiteral(FutureCParser::UshortLiteralContext *ctx) = 0;
  virtual void exitUshortLiteral(FutureCParser::UshortLiteralContext *ctx) = 0;

  virtual void enterIntLiteral(FutureCParser::IntLiteralContext *ctx) = 0;
  virtual void exitIntLiteral(FutureCParser::IntLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(FutureCParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(FutureCParser::FloatLiteralContext *ctx) = 0;

  virtual void enterDoubleLiteral(FutureCParser::DoubleLiteralContext *ctx) = 0;
  virtual void exitDoubleLiteral(FutureCParser::DoubleLiteralContext *ctx) = 0;

  virtual void enterCharLiteral(FutureCParser::CharLiteralContext *ctx) = 0;
  virtual void exitCharLiteral(FutureCParser::CharLiteralContext *ctx) = 0;

  virtual void enterU8CharLiteral(FutureCParser::U8CharLiteralContext *ctx) = 0;
  virtual void exitU8CharLiteral(FutureCParser::U8CharLiteralContext *ctx) = 0;

  virtual void enterU32CharLiteral(FutureCParser::U32CharLiteralContext *ctx) = 0;
  virtual void exitU32CharLiteral(FutureCParser::U32CharLiteralContext *ctx) = 0;

  virtual void enterStringLiteral(FutureCParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(FutureCParser::StringLiteralContext *ctx) = 0;

  virtual void enterU8StringLiteral(FutureCParser::U8StringLiteralContext *ctx) = 0;
  virtual void exitU8StringLiteral(FutureCParser::U8StringLiteralContext *ctx) = 0;

  virtual void enterU32StringLiteral(FutureCParser::U32StringLiteralContext *ctx) = 0;
  virtual void exitU32StringLiteral(FutureCParser::U32StringLiteralContext *ctx) = 0;

  virtual void enterVariableDeclaration(FutureCParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(FutureCParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterVariableDefinition(FutureCParser::VariableDefinitionContext *ctx) = 0;
  virtual void exitVariableDefinition(FutureCParser::VariableDefinitionContext *ctx) = 0;


};

