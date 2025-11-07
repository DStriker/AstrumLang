
// Generated from FutureC.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  FutureCParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, AssignmentId = 19, Declarator = 20, 
    Type = 21, Identifier = 22, DecNumber = 23, OctNumber = 24, BinNumber = 25, 
    HexNumber = 26, FloatNumber0 = 27, FloatNumber1 = 28, Character = 29, 
    String = 30, ESC_SEQ = 31, WS = 32, Auto = 33
  };

  enum {
    RuleProg = 0, RuleStatement = 1, RuleAssignment = 2, RuleExpression = 3, 
    RuleLiteral = 4, RuleI128Literal = 5, RuleU128Literal = 6, RuleUlongLiteral = 7, 
    RuleLongLiteral = 8, RuleUintLiteral = 9, RuleByteLiteral = 10, RuleUbyteLiteral = 11, 
    RuleShortLiteral = 12, RuleUshortLiteral = 13, RuleIntLiteral = 14, 
    RuleFloatLiteral = 15, RuleDoubleLiteral = 16, RuleCharLiteral = 17, 
    RuleU8CharLiteral = 18, RuleU32CharLiteral = 19, RuleStringLiteral = 20, 
    RuleU8StringLiteral = 21, RuleU32StringLiteral = 22, RuleVariableDeclaration = 23, 
    RuleVariableDefinition = 24
  };

  explicit FutureCParser(antlr4::TokenStream *input);

  FutureCParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~FutureCParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class StatementContext;
  class AssignmentContext;
  class ExpressionContext;
  class LiteralContext;
  class I128LiteralContext;
  class U128LiteralContext;
  class UlongLiteralContext;
  class LongLiteralContext;
  class UintLiteralContext;
  class ByteLiteralContext;
  class UbyteLiteralContext;
  class ShortLiteralContext;
  class UshortLiteralContext;
  class IntLiteralContext;
  class FloatLiteralContext;
  class DoubleLiteralContext;
  class CharLiteralContext;
  class U8CharLiteralContext;
  class U32CharLiteralContext;
  class StringLiteralContext;
  class U8StringLiteralContext;
  class U32StringLiteralContext;
  class VariableDeclarationContext;
  class VariableDefinitionContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgContext* prog();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDefinitionContext *variableDefinition();
    VariableDeclarationContext *variableDeclaration();
    AssignmentContext *assignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentContext* assignment();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AssignmentId();
    LiteralContext *literal();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    I128LiteralContext *i128Literal();
    U128LiteralContext *u128Literal();
    UlongLiteralContext *ulongLiteral();
    LongLiteralContext *longLiteral();
    UintLiteralContext *uintLiteral();
    ByteLiteralContext *byteLiteral();
    UbyteLiteralContext *ubyteLiteral();
    ShortLiteralContext *shortLiteral();
    UshortLiteralContext *ushortLiteral();
    IntLiteralContext *intLiteral();
    FloatLiteralContext *floatLiteral();
    DoubleLiteralContext *doubleLiteral();
    CharLiteralContext *charLiteral();
    StringLiteralContext *stringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  I128LiteralContext : public antlr4::ParserRuleContext {
  public:
    I128LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntLiteralContext *intLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  I128LiteralContext* i128Literal();

  class  U128LiteralContext : public antlr4::ParserRuleContext {
  public:
    U128LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntLiteralContext *intLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  U128LiteralContext* u128Literal();

  class  UlongLiteralContext : public antlr4::ParserRuleContext {
  public:
    UlongLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntLiteralContext *intLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UlongLiteralContext* ulongLiteral();

  class  LongLiteralContext : public antlr4::ParserRuleContext {
  public:
    LongLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntLiteralContext *intLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LongLiteralContext* longLiteral();

  class  UintLiteralContext : public antlr4::ParserRuleContext {
  public:
    UintLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntLiteralContext *intLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UintLiteralContext* uintLiteral();

  class  ByteLiteralContext : public antlr4::ParserRuleContext {
  public:
    ByteLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntLiteralContext *intLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ByteLiteralContext* byteLiteral();

  class  UbyteLiteralContext : public antlr4::ParserRuleContext {
  public:
    UbyteLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntLiteralContext *intLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UbyteLiteralContext* ubyteLiteral();

  class  ShortLiteralContext : public antlr4::ParserRuleContext {
  public:
    ShortLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntLiteralContext *intLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShortLiteralContext* shortLiteral();

  class  UshortLiteralContext : public antlr4::ParserRuleContext {
  public:
    UshortLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntLiteralContext *intLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UshortLiteralContext* ushortLiteral();

  class  IntLiteralContext : public antlr4::ParserRuleContext {
  public:
    IntLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DecNumber();
    antlr4::tree::TerminalNode *OctNumber();
    antlr4::tree::TerminalNode *BinNumber();
    antlr4::tree::TerminalNode *HexNumber();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntLiteralContext* intLiteral();

  class  FloatLiteralContext : public antlr4::ParserRuleContext {
  public:
    FloatLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DoubleLiteralContext *doubleLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FloatLiteralContext* floatLiteral();

  class  DoubleLiteralContext : public antlr4::ParserRuleContext {
  public:
    DoubleLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FloatNumber0();
    antlr4::tree::TerminalNode *FloatNumber1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoubleLiteralContext* doubleLiteral();

  class  CharLiteralContext : public antlr4::ParserRuleContext {
  public:
    CharLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Character();
    U8CharLiteralContext *u8CharLiteral();
    U32CharLiteralContext *u32CharLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharLiteralContext* charLiteral();

  class  U8CharLiteralContext : public antlr4::ParserRuleContext {
  public:
    U8CharLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Character();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  U8CharLiteralContext* u8CharLiteral();

  class  U32CharLiteralContext : public antlr4::ParserRuleContext {
  public:
    U32CharLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Character();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  U32CharLiteralContext* u32CharLiteral();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *String();
    U8StringLiteralContext *u8StringLiteral();
    U32StringLiteralContext *u32StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  U8StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    U8StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *String();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  U8StringLiteralContext* u8StringLiteral();

  class  U32StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    U32StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *String();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  U32StringLiteralContext* u32StringLiteral();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Declarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  VariableDefinitionContext : public antlr4::ParserRuleContext {
  public:
    VariableDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Declarator();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDefinitionContext* variableDefinition();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

