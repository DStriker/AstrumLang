
// Generated from FutureC.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "FutureCListener.h"


/**
 * This class provides an empty implementation of FutureCListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  FutureCBaseListener : public FutureCListener {
public:

  virtual void enterProg(FutureCParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(FutureCParser::ProgContext * /*ctx*/) override { }

  virtual void enterStatement(FutureCParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(FutureCParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment(FutureCParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(FutureCParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExpression(FutureCParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(FutureCParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterLiteral(FutureCParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(FutureCParser::LiteralContext * /*ctx*/) override { }

  virtual void enterI128Literal(FutureCParser::I128LiteralContext * /*ctx*/) override { }
  virtual void exitI128Literal(FutureCParser::I128LiteralContext * /*ctx*/) override { }

  virtual void enterU128Literal(FutureCParser::U128LiteralContext * /*ctx*/) override { }
  virtual void exitU128Literal(FutureCParser::U128LiteralContext * /*ctx*/) override { }

  virtual void enterUlongLiteral(FutureCParser::UlongLiteralContext * /*ctx*/) override { }
  virtual void exitUlongLiteral(FutureCParser::UlongLiteralContext * /*ctx*/) override { }

  virtual void enterLongLiteral(FutureCParser::LongLiteralContext * /*ctx*/) override { }
  virtual void exitLongLiteral(FutureCParser::LongLiteralContext * /*ctx*/) override { }

  virtual void enterUintLiteral(FutureCParser::UintLiteralContext * /*ctx*/) override { }
  virtual void exitUintLiteral(FutureCParser::UintLiteralContext * /*ctx*/) override { }

  virtual void enterByteLiteral(FutureCParser::ByteLiteralContext * /*ctx*/) override { }
  virtual void exitByteLiteral(FutureCParser::ByteLiteralContext * /*ctx*/) override { }

  virtual void enterUbyteLiteral(FutureCParser::UbyteLiteralContext * /*ctx*/) override { }
  virtual void exitUbyteLiteral(FutureCParser::UbyteLiteralContext * /*ctx*/) override { }

  virtual void enterShortLiteral(FutureCParser::ShortLiteralContext * /*ctx*/) override { }
  virtual void exitShortLiteral(FutureCParser::ShortLiteralContext * /*ctx*/) override { }

  virtual void enterUshortLiteral(FutureCParser::UshortLiteralContext * /*ctx*/) override { }
  virtual void exitUshortLiteral(FutureCParser::UshortLiteralContext * /*ctx*/) override { }

  virtual void enterIntLiteral(FutureCParser::IntLiteralContext * /*ctx*/) override { }
  virtual void exitIntLiteral(FutureCParser::IntLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(FutureCParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(FutureCParser::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterDoubleLiteral(FutureCParser::DoubleLiteralContext * /*ctx*/) override { }
  virtual void exitDoubleLiteral(FutureCParser::DoubleLiteralContext * /*ctx*/) override { }

  virtual void enterCharLiteral(FutureCParser::CharLiteralContext * /*ctx*/) override { }
  virtual void exitCharLiteral(FutureCParser::CharLiteralContext * /*ctx*/) override { }

  virtual void enterU8CharLiteral(FutureCParser::U8CharLiteralContext * /*ctx*/) override { }
  virtual void exitU8CharLiteral(FutureCParser::U8CharLiteralContext * /*ctx*/) override { }

  virtual void enterU32CharLiteral(FutureCParser::U32CharLiteralContext * /*ctx*/) override { }
  virtual void exitU32CharLiteral(FutureCParser::U32CharLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(FutureCParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(FutureCParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterU8StringLiteral(FutureCParser::U8StringLiteralContext * /*ctx*/) override { }
  virtual void exitU8StringLiteral(FutureCParser::U8StringLiteralContext * /*ctx*/) override { }

  virtual void enterU32StringLiteral(FutureCParser::U32StringLiteralContext * /*ctx*/) override { }
  virtual void exitU32StringLiteral(FutureCParser::U32StringLiteralContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(FutureCParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(FutureCParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterVariableDefinition(FutureCParser::VariableDefinitionContext * /*ctx*/) override { }
  virtual void exitVariableDefinition(FutureCParser::VariableDefinitionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

