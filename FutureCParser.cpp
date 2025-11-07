
// Generated from FutureC.g4 by ANTLR 4.13.1


#include "FutureCListener.h"

#include "FutureCParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct FutureCParserStaticData final {
  FutureCParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  FutureCParserStaticData(const FutureCParserStaticData&) = delete;
  FutureCParserStaticData(FutureCParserStaticData&&) = delete;
  FutureCParserStaticData& operator=(const FutureCParserStaticData&) = delete;
  FutureCParserStaticData& operator=(FutureCParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag futurecParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
FutureCParserStaticData *futurecParserStaticData = nullptr;

void futurecParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (futurecParserStaticData != nullptr) {
    return;
  }
#else
  assert(futurecParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<FutureCParserStaticData>(
    std::vector<std::string>{
      "prog", "statement", "assignment", "expression", "literal", "i128Literal", 
      "u128Literal", "ulongLiteral", "longLiteral", "uintLiteral", "byteLiteral", 
      "ubyteLiteral", "shortLiteral", "ushortLiteral", "intLiteral", "floatLiteral", 
      "doubleLiteral", "charLiteral", "u8CharLiteral", "u32CharLiteral", 
      "stringLiteral", "u8StringLiteral", "u32StringLiteral", "variableDeclaration", 
      "variableDefinition"
    },
    std::vector<std::string>{
      "", "';'", "'='", "'+'", "'i128'", "'u128'", "'UL'", "'u64'", "'L'", 
      "'i64'", "'U'", "'u32'", "'i8'", "'u8'", "'i16'", "'u16'", "'f'", 
      "'{'", "'};'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "AssignmentId", "Declarator", "Type", "Identifier", "DecNumber", 
      "OctNumber", "BinNumber", "HexNumber", "FloatNumber0", "FloatNumber1", 
      "Character", "String", "ESC_SEQ", "WS", "Auto"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,33,182,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,4,0,52,8,0,11,0,12,0,53,1,1,1,1,
  	1,1,1,1,3,1,60,8,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,3,3,70,8,3,1,3,1,3,
  	1,3,5,3,75,8,3,10,3,12,3,78,9,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,3,4,94,8,4,1,5,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,7,
  	1,7,1,7,3,7,108,8,7,1,8,1,8,1,8,1,8,1,8,1,8,3,8,116,8,8,1,9,1,9,1,9,1,
  	9,1,9,1,9,3,9,124,8,9,1,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,1,
  	13,1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,17,1,17,1,17,3,17,148,
  	8,17,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,3,20,159,8,20,1,21,
  	1,21,1,21,1,22,1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,3,24,180,8,24,1,24,0,1,6,25,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,0,2,1,0,23,26,1,0,27,
  	28,183,0,51,1,0,0,0,2,59,1,0,0,0,4,61,1,0,0,0,6,69,1,0,0,0,8,93,1,0,0,
  	0,10,95,1,0,0,0,12,98,1,0,0,0,14,107,1,0,0,0,16,115,1,0,0,0,18,123,1,
  	0,0,0,20,125,1,0,0,0,22,128,1,0,0,0,24,131,1,0,0,0,26,134,1,0,0,0,28,
  	137,1,0,0,0,30,139,1,0,0,0,32,142,1,0,0,0,34,147,1,0,0,0,36,149,1,0,0,
  	0,38,152,1,0,0,0,40,158,1,0,0,0,42,160,1,0,0,0,44,163,1,0,0,0,46,166,
  	1,0,0,0,48,179,1,0,0,0,50,52,3,2,1,0,51,50,1,0,0,0,52,53,1,0,0,0,53,51,
  	1,0,0,0,53,54,1,0,0,0,54,1,1,0,0,0,55,60,3,48,24,0,56,60,3,46,23,0,57,
  	60,3,4,2,0,58,60,5,1,0,0,59,55,1,0,0,0,59,56,1,0,0,0,59,57,1,0,0,0,59,
  	58,1,0,0,0,60,3,1,0,0,0,61,62,3,6,3,0,62,63,5,2,0,0,63,64,3,6,3,0,64,
  	65,5,1,0,0,65,5,1,0,0,0,66,67,6,3,-1,0,67,70,5,19,0,0,68,70,3,8,4,0,69,
  	66,1,0,0,0,69,68,1,0,0,0,70,76,1,0,0,0,71,72,10,3,0,0,72,73,5,3,0,0,73,
  	75,3,6,3,4,74,71,1,0,0,0,75,78,1,0,0,0,76,74,1,0,0,0,76,77,1,0,0,0,77,
  	7,1,0,0,0,78,76,1,0,0,0,79,94,3,10,5,0,80,94,3,12,6,0,81,94,3,14,7,0,
  	82,94,3,16,8,0,83,94,3,18,9,0,84,94,3,20,10,0,85,94,3,22,11,0,86,94,3,
  	24,12,0,87,94,3,26,13,0,88,94,3,28,14,0,89,94,3,30,15,0,90,94,3,32,16,
  	0,91,94,3,34,17,0,92,94,3,40,20,0,93,79,1,0,0,0,93,80,1,0,0,0,93,81,1,
  	0,0,0,93,82,1,0,0,0,93,83,1,0,0,0,93,84,1,0,0,0,93,85,1,0,0,0,93,86,1,
  	0,0,0,93,87,1,0,0,0,93,88,1,0,0,0,93,89,1,0,0,0,93,90,1,0,0,0,93,91,1,
  	0,0,0,93,92,1,0,0,0,94,9,1,0,0,0,95,96,3,28,14,0,96,97,5,4,0,0,97,11,
  	1,0,0,0,98,99,3,28,14,0,99,100,5,5,0,0,100,13,1,0,0,0,101,102,3,28,14,
  	0,102,103,5,6,0,0,103,108,1,0,0,0,104,105,3,28,14,0,105,106,5,7,0,0,106,
  	108,1,0,0,0,107,101,1,0,0,0,107,104,1,0,0,0,108,15,1,0,0,0,109,110,3,
  	28,14,0,110,111,5,8,0,0,111,116,1,0,0,0,112,113,3,28,14,0,113,114,5,9,
  	0,0,114,116,1,0,0,0,115,109,1,0,0,0,115,112,1,0,0,0,116,17,1,0,0,0,117,
  	118,3,28,14,0,118,119,5,10,0,0,119,124,1,0,0,0,120,121,3,28,14,0,121,
  	122,5,11,0,0,122,124,1,0,0,0,123,117,1,0,0,0,123,120,1,0,0,0,124,19,1,
  	0,0,0,125,126,3,28,14,0,126,127,5,12,0,0,127,21,1,0,0,0,128,129,3,28,
  	14,0,129,130,5,13,0,0,130,23,1,0,0,0,131,132,3,28,14,0,132,133,5,14,0,
  	0,133,25,1,0,0,0,134,135,3,28,14,0,135,136,5,15,0,0,136,27,1,0,0,0,137,
  	138,7,0,0,0,138,29,1,0,0,0,139,140,3,32,16,0,140,141,5,16,0,0,141,31,
  	1,0,0,0,142,143,7,1,0,0,143,33,1,0,0,0,144,148,5,29,0,0,145,148,3,36,
  	18,0,146,148,3,38,19,0,147,144,1,0,0,0,147,145,1,0,0,0,147,146,1,0,0,
  	0,148,35,1,0,0,0,149,150,5,13,0,0,150,151,5,29,0,0,151,37,1,0,0,0,152,
  	153,5,11,0,0,153,154,5,29,0,0,154,39,1,0,0,0,155,159,5,30,0,0,156,159,
  	3,42,21,0,157,159,3,44,22,0,158,155,1,0,0,0,158,156,1,0,0,0,158,157,1,
  	0,0,0,159,41,1,0,0,0,160,161,5,13,0,0,161,162,5,30,0,0,162,43,1,0,0,0,
  	163,164,5,11,0,0,164,165,5,30,0,0,165,45,1,0,0,0,166,167,5,20,0,0,167,
  	168,5,1,0,0,168,47,1,0,0,0,169,170,5,20,0,0,170,171,5,2,0,0,171,172,3,
  	6,3,0,172,173,5,1,0,0,173,180,1,0,0,0,174,175,5,20,0,0,175,176,5,17,0,
  	0,176,177,3,6,3,0,177,178,5,18,0,0,178,180,1,0,0,0,179,169,1,0,0,0,179,
  	174,1,0,0,0,180,49,1,0,0,0,11,53,59,69,76,93,107,115,123,147,158,179
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  futurecParserStaticData = staticData.release();
}

}

FutureCParser::FutureCParser(TokenStream *input) : FutureCParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

FutureCParser::FutureCParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  FutureCParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *futurecParserStaticData->atn, futurecParserStaticData->decisionToDFA, futurecParserStaticData->sharedContextCache, options);
}

FutureCParser::~FutureCParser() {
  delete _interpreter;
}

const atn::ATN& FutureCParser::getATN() const {
  return *futurecParserStaticData->atn;
}

std::string FutureCParser::getGrammarFileName() const {
  return "FutureC.g4";
}

const std::vector<std::string>& FutureCParser::getRuleNames() const {
  return futurecParserStaticData->ruleNames;
}

const dfa::Vocabulary& FutureCParser::getVocabulary() const {
  return futurecParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView FutureCParser::getSerializedATN() const {
  return futurecParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

FutureCParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FutureCParser::StatementContext *> FutureCParser::ProgContext::statement() {
  return getRuleContexts<FutureCParser::StatementContext>();
}

FutureCParser::StatementContext* FutureCParser::ProgContext::statement(size_t i) {
  return getRuleContext<FutureCParser::StatementContext>(i);
}


size_t FutureCParser::ProgContext::getRuleIndex() const {
  return FutureCParser::RuleProg;
}

void FutureCParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void FutureCParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

FutureCParser::ProgContext* FutureCParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, FutureCParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(50);
      statement();
      setState(53); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2140678146) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

FutureCParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FutureCParser::VariableDefinitionContext* FutureCParser::StatementContext::variableDefinition() {
  return getRuleContext<FutureCParser::VariableDefinitionContext>(0);
}

FutureCParser::VariableDeclarationContext* FutureCParser::StatementContext::variableDeclaration() {
  return getRuleContext<FutureCParser::VariableDeclarationContext>(0);
}

FutureCParser::AssignmentContext* FutureCParser::StatementContext::assignment() {
  return getRuleContext<FutureCParser::AssignmentContext>(0);
}


size_t FutureCParser::StatementContext::getRuleIndex() const {
  return FutureCParser::RuleStatement;
}

void FutureCParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void FutureCParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

FutureCParser::StatementContext* FutureCParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, FutureCParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(59);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(55);
      variableDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(56);
      variableDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(57);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(58);
      match(FutureCParser::T__0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

FutureCParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FutureCParser::ExpressionContext *> FutureCParser::AssignmentContext::expression() {
  return getRuleContexts<FutureCParser::ExpressionContext>();
}

FutureCParser::ExpressionContext* FutureCParser::AssignmentContext::expression(size_t i) {
  return getRuleContext<FutureCParser::ExpressionContext>(i);
}


size_t FutureCParser::AssignmentContext::getRuleIndex() const {
  return FutureCParser::RuleAssignment;
}

void FutureCParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void FutureCParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

FutureCParser::AssignmentContext* FutureCParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 4, FutureCParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    expression(0);
    setState(62);
    match(FutureCParser::T__1);
    setState(63);
    expression(0);
    setState(64);
    match(FutureCParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

FutureCParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FutureCParser::ExpressionContext::AssignmentId() {
  return getToken(FutureCParser::AssignmentId, 0);
}

FutureCParser::LiteralContext* FutureCParser::ExpressionContext::literal() {
  return getRuleContext<FutureCParser::LiteralContext>(0);
}

std::vector<FutureCParser::ExpressionContext *> FutureCParser::ExpressionContext::expression() {
  return getRuleContexts<FutureCParser::ExpressionContext>();
}

FutureCParser::ExpressionContext* FutureCParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<FutureCParser::ExpressionContext>(i);
}


size_t FutureCParser::ExpressionContext::getRuleIndex() const {
  return FutureCParser::RuleExpression;
}

void FutureCParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void FutureCParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


FutureCParser::ExpressionContext* FutureCParser::expression() {
   return expression(0);
}

FutureCParser::ExpressionContext* FutureCParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  FutureCParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  FutureCParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, FutureCParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(69);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FutureCParser::AssignmentId: {
        setState(67);
        match(FutureCParser::AssignmentId);
        break;
      }

      case FutureCParser::T__10:
      case FutureCParser::T__12:
      case FutureCParser::DecNumber:
      case FutureCParser::OctNumber:
      case FutureCParser::BinNumber:
      case FutureCParser::HexNumber:
      case FutureCParser::FloatNumber0:
      case FutureCParser::FloatNumber1:
      case FutureCParser::Character:
      case FutureCParser::String: {
        setState(68);
        literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(76);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(71);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(72);
        match(FutureCParser::T__2);
        setState(73);
        expression(4); 
      }
      setState(78);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

FutureCParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FutureCParser::I128LiteralContext* FutureCParser::LiteralContext::i128Literal() {
  return getRuleContext<FutureCParser::I128LiteralContext>(0);
}

FutureCParser::U128LiteralContext* FutureCParser::LiteralContext::u128Literal() {
  return getRuleContext<FutureCParser::U128LiteralContext>(0);
}

FutureCParser::UlongLiteralContext* FutureCParser::LiteralContext::ulongLiteral() {
  return getRuleContext<FutureCParser::UlongLiteralContext>(0);
}

FutureCParser::LongLiteralContext* FutureCParser::LiteralContext::longLiteral() {
  return getRuleContext<FutureCParser::LongLiteralContext>(0);
}

FutureCParser::UintLiteralContext* FutureCParser::LiteralContext::uintLiteral() {
  return getRuleContext<FutureCParser::UintLiteralContext>(0);
}

FutureCParser::ByteLiteralContext* FutureCParser::LiteralContext::byteLiteral() {
  return getRuleContext<FutureCParser::ByteLiteralContext>(0);
}

FutureCParser::UbyteLiteralContext* FutureCParser::LiteralContext::ubyteLiteral() {
  return getRuleContext<FutureCParser::UbyteLiteralContext>(0);
}

FutureCParser::ShortLiteralContext* FutureCParser::LiteralContext::shortLiteral() {
  return getRuleContext<FutureCParser::ShortLiteralContext>(0);
}

FutureCParser::UshortLiteralContext* FutureCParser::LiteralContext::ushortLiteral() {
  return getRuleContext<FutureCParser::UshortLiteralContext>(0);
}

FutureCParser::IntLiteralContext* FutureCParser::LiteralContext::intLiteral() {
  return getRuleContext<FutureCParser::IntLiteralContext>(0);
}

FutureCParser::FloatLiteralContext* FutureCParser::LiteralContext::floatLiteral() {
  return getRuleContext<FutureCParser::FloatLiteralContext>(0);
}

FutureCParser::DoubleLiteralContext* FutureCParser::LiteralContext::doubleLiteral() {
  return getRuleContext<FutureCParser::DoubleLiteralContext>(0);
}

FutureCParser::CharLiteralContext* FutureCParser::LiteralContext::charLiteral() {
  return getRuleContext<FutureCParser::CharLiteralContext>(0);
}

FutureCParser::StringLiteralContext* FutureCParser::LiteralContext::stringLiteral() {
  return getRuleContext<FutureCParser::StringLiteralContext>(0);
}


size_t FutureCParser::LiteralContext::getRuleIndex() const {
  return FutureCParser::RuleLiteral;
}

void FutureCParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void FutureCParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

FutureCParser::LiteralContext* FutureCParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 8, FutureCParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(93);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(79);
      i128Literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(80);
      u128Literal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(81);
      ulongLiteral();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(82);
      longLiteral();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(83);
      uintLiteral();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(84);
      byteLiteral();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(85);
      ubyteLiteral();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(86);
      shortLiteral();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(87);
      ushortLiteral();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(88);
      intLiteral();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(89);
      floatLiteral();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(90);
      doubleLiteral();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(91);
      charLiteral();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(92);
      stringLiteral();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- I128LiteralContext ------------------------------------------------------------------

FutureCParser::I128LiteralContext::I128LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FutureCParser::IntLiteralContext* FutureCParser::I128LiteralContext::intLiteral() {
  return getRuleContext<FutureCParser::IntLiteralContext>(0);
}


size_t FutureCParser::I128LiteralContext::getRuleIndex() const {
  return FutureCParser::RuleI128Literal;
}

void FutureCParser::I128LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterI128Literal(this);
}

void FutureCParser::I128LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitI128Literal(this);
}

FutureCParser::I128LiteralContext* FutureCParser::i128Literal() {
  I128LiteralContext *_localctx = _tracker.createInstance<I128LiteralContext>(_ctx, getState());
  enterRule(_localctx, 10, FutureCParser::RuleI128Literal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    intLiteral();
    setState(96);
    match(FutureCParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- U128LiteralContext ------------------------------------------------------------------

FutureCParser::U128LiteralContext::U128LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FutureCParser::IntLiteralContext* FutureCParser::U128LiteralContext::intLiteral() {
  return getRuleContext<FutureCParser::IntLiteralContext>(0);
}


size_t FutureCParser::U128LiteralContext::getRuleIndex() const {
  return FutureCParser::RuleU128Literal;
}

void FutureCParser::U128LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterU128Literal(this);
}

void FutureCParser::U128LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitU128Literal(this);
}

FutureCParser::U128LiteralContext* FutureCParser::u128Literal() {
  U128LiteralContext *_localctx = _tracker.createInstance<U128LiteralContext>(_ctx, getState());
  enterRule(_localctx, 12, FutureCParser::RuleU128Literal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    intLiteral();
    setState(99);
    match(FutureCParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UlongLiteralContext ------------------------------------------------------------------

FutureCParser::UlongLiteralContext::UlongLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FutureCParser::IntLiteralContext* FutureCParser::UlongLiteralContext::intLiteral() {
  return getRuleContext<FutureCParser::IntLiteralContext>(0);
}


size_t FutureCParser::UlongLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleUlongLiteral;
}

void FutureCParser::UlongLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUlongLiteral(this);
}

void FutureCParser::UlongLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUlongLiteral(this);
}

FutureCParser::UlongLiteralContext* FutureCParser::ulongLiteral() {
  UlongLiteralContext *_localctx = _tracker.createInstance<UlongLiteralContext>(_ctx, getState());
  enterRule(_localctx, 14, FutureCParser::RuleUlongLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(101);
      intLiteral();
      setState(102);
      match(FutureCParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(104);
      intLiteral();
      setState(105);
      match(FutureCParser::T__6);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LongLiteralContext ------------------------------------------------------------------

FutureCParser::LongLiteralContext::LongLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FutureCParser::IntLiteralContext* FutureCParser::LongLiteralContext::intLiteral() {
  return getRuleContext<FutureCParser::IntLiteralContext>(0);
}


size_t FutureCParser::LongLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleLongLiteral;
}

void FutureCParser::LongLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLongLiteral(this);
}

void FutureCParser::LongLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLongLiteral(this);
}

FutureCParser::LongLiteralContext* FutureCParser::longLiteral() {
  LongLiteralContext *_localctx = _tracker.createInstance<LongLiteralContext>(_ctx, getState());
  enterRule(_localctx, 16, FutureCParser::RuleLongLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(109);
      intLiteral();
      setState(110);
      match(FutureCParser::T__7);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(112);
      intLiteral();
      setState(113);
      match(FutureCParser::T__8);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UintLiteralContext ------------------------------------------------------------------

FutureCParser::UintLiteralContext::UintLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FutureCParser::IntLiteralContext* FutureCParser::UintLiteralContext::intLiteral() {
  return getRuleContext<FutureCParser::IntLiteralContext>(0);
}


size_t FutureCParser::UintLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleUintLiteral;
}

void FutureCParser::UintLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUintLiteral(this);
}

void FutureCParser::UintLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUintLiteral(this);
}

FutureCParser::UintLiteralContext* FutureCParser::uintLiteral() {
  UintLiteralContext *_localctx = _tracker.createInstance<UintLiteralContext>(_ctx, getState());
  enterRule(_localctx, 18, FutureCParser::RuleUintLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(117);
      intLiteral();
      setState(118);
      match(FutureCParser::T__9);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(120);
      intLiteral();
      setState(121);
      match(FutureCParser::T__10);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ByteLiteralContext ------------------------------------------------------------------

FutureCParser::ByteLiteralContext::ByteLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FutureCParser::IntLiteralContext* FutureCParser::ByteLiteralContext::intLiteral() {
  return getRuleContext<FutureCParser::IntLiteralContext>(0);
}


size_t FutureCParser::ByteLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleByteLiteral;
}

void FutureCParser::ByteLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterByteLiteral(this);
}

void FutureCParser::ByteLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitByteLiteral(this);
}

FutureCParser::ByteLiteralContext* FutureCParser::byteLiteral() {
  ByteLiteralContext *_localctx = _tracker.createInstance<ByteLiteralContext>(_ctx, getState());
  enterRule(_localctx, 20, FutureCParser::RuleByteLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    intLiteral();
    setState(126);
    match(FutureCParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UbyteLiteralContext ------------------------------------------------------------------

FutureCParser::UbyteLiteralContext::UbyteLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FutureCParser::IntLiteralContext* FutureCParser::UbyteLiteralContext::intLiteral() {
  return getRuleContext<FutureCParser::IntLiteralContext>(0);
}


size_t FutureCParser::UbyteLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleUbyteLiteral;
}

void FutureCParser::UbyteLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUbyteLiteral(this);
}

void FutureCParser::UbyteLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUbyteLiteral(this);
}

FutureCParser::UbyteLiteralContext* FutureCParser::ubyteLiteral() {
  UbyteLiteralContext *_localctx = _tracker.createInstance<UbyteLiteralContext>(_ctx, getState());
  enterRule(_localctx, 22, FutureCParser::RuleUbyteLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    intLiteral();
    setState(129);
    match(FutureCParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShortLiteralContext ------------------------------------------------------------------

FutureCParser::ShortLiteralContext::ShortLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FutureCParser::IntLiteralContext* FutureCParser::ShortLiteralContext::intLiteral() {
  return getRuleContext<FutureCParser::IntLiteralContext>(0);
}


size_t FutureCParser::ShortLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleShortLiteral;
}

void FutureCParser::ShortLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShortLiteral(this);
}

void FutureCParser::ShortLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShortLiteral(this);
}

FutureCParser::ShortLiteralContext* FutureCParser::shortLiteral() {
  ShortLiteralContext *_localctx = _tracker.createInstance<ShortLiteralContext>(_ctx, getState());
  enterRule(_localctx, 24, FutureCParser::RuleShortLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    intLiteral();
    setState(132);
    match(FutureCParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UshortLiteralContext ------------------------------------------------------------------

FutureCParser::UshortLiteralContext::UshortLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FutureCParser::IntLiteralContext* FutureCParser::UshortLiteralContext::intLiteral() {
  return getRuleContext<FutureCParser::IntLiteralContext>(0);
}


size_t FutureCParser::UshortLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleUshortLiteral;
}

void FutureCParser::UshortLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUshortLiteral(this);
}

void FutureCParser::UshortLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUshortLiteral(this);
}

FutureCParser::UshortLiteralContext* FutureCParser::ushortLiteral() {
  UshortLiteralContext *_localctx = _tracker.createInstance<UshortLiteralContext>(_ctx, getState());
  enterRule(_localctx, 26, FutureCParser::RuleUshortLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    intLiteral();
    setState(135);
    match(FutureCParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntLiteralContext ------------------------------------------------------------------

FutureCParser::IntLiteralContext::IntLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FutureCParser::IntLiteralContext::DecNumber() {
  return getToken(FutureCParser::DecNumber, 0);
}

tree::TerminalNode* FutureCParser::IntLiteralContext::OctNumber() {
  return getToken(FutureCParser::OctNumber, 0);
}

tree::TerminalNode* FutureCParser::IntLiteralContext::BinNumber() {
  return getToken(FutureCParser::BinNumber, 0);
}

tree::TerminalNode* FutureCParser::IntLiteralContext::HexNumber() {
  return getToken(FutureCParser::HexNumber, 0);
}


size_t FutureCParser::IntLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleIntLiteral;
}

void FutureCParser::IntLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntLiteral(this);
}

void FutureCParser::IntLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntLiteral(this);
}

FutureCParser::IntLiteralContext* FutureCParser::intLiteral() {
  IntLiteralContext *_localctx = _tracker.createInstance<IntLiteralContext>(_ctx, getState());
  enterRule(_localctx, 28, FutureCParser::RuleIntLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 125829120) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

FutureCParser::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FutureCParser::DoubleLiteralContext* FutureCParser::FloatLiteralContext::doubleLiteral() {
  return getRuleContext<FutureCParser::DoubleLiteralContext>(0);
}


size_t FutureCParser::FloatLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleFloatLiteral;
}

void FutureCParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}

void FutureCParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}

FutureCParser::FloatLiteralContext* FutureCParser::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 30, FutureCParser::RuleFloatLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    doubleLiteral();
    setState(140);
    match(FutureCParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoubleLiteralContext ------------------------------------------------------------------

FutureCParser::DoubleLiteralContext::DoubleLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FutureCParser::DoubleLiteralContext::FloatNumber0() {
  return getToken(FutureCParser::FloatNumber0, 0);
}

tree::TerminalNode* FutureCParser::DoubleLiteralContext::FloatNumber1() {
  return getToken(FutureCParser::FloatNumber1, 0);
}


size_t FutureCParser::DoubleLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleDoubleLiteral;
}

void FutureCParser::DoubleLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoubleLiteral(this);
}

void FutureCParser::DoubleLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoubleLiteral(this);
}

FutureCParser::DoubleLiteralContext* FutureCParser::doubleLiteral() {
  DoubleLiteralContext *_localctx = _tracker.createInstance<DoubleLiteralContext>(_ctx, getState());
  enterRule(_localctx, 32, FutureCParser::RuleDoubleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    _la = _input->LA(1);
    if (!(_la == FutureCParser::FloatNumber0

    || _la == FutureCParser::FloatNumber1)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharLiteralContext ------------------------------------------------------------------

FutureCParser::CharLiteralContext::CharLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FutureCParser::CharLiteralContext::Character() {
  return getToken(FutureCParser::Character, 0);
}

FutureCParser::U8CharLiteralContext* FutureCParser::CharLiteralContext::u8CharLiteral() {
  return getRuleContext<FutureCParser::U8CharLiteralContext>(0);
}

FutureCParser::U32CharLiteralContext* FutureCParser::CharLiteralContext::u32CharLiteral() {
  return getRuleContext<FutureCParser::U32CharLiteralContext>(0);
}


size_t FutureCParser::CharLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleCharLiteral;
}

void FutureCParser::CharLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharLiteral(this);
}

void FutureCParser::CharLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharLiteral(this);
}

FutureCParser::CharLiteralContext* FutureCParser::charLiteral() {
  CharLiteralContext *_localctx = _tracker.createInstance<CharLiteralContext>(_ctx, getState());
  enterRule(_localctx, 34, FutureCParser::RuleCharLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FutureCParser::Character: {
        enterOuterAlt(_localctx, 1);
        setState(144);
        match(FutureCParser::Character);
        break;
      }

      case FutureCParser::T__12: {
        enterOuterAlt(_localctx, 2);
        setState(145);
        u8CharLiteral();
        break;
      }

      case FutureCParser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(146);
        u32CharLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- U8CharLiteralContext ------------------------------------------------------------------

FutureCParser::U8CharLiteralContext::U8CharLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FutureCParser::U8CharLiteralContext::Character() {
  return getToken(FutureCParser::Character, 0);
}


size_t FutureCParser::U8CharLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleU8CharLiteral;
}

void FutureCParser::U8CharLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterU8CharLiteral(this);
}

void FutureCParser::U8CharLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitU8CharLiteral(this);
}

FutureCParser::U8CharLiteralContext* FutureCParser::u8CharLiteral() {
  U8CharLiteralContext *_localctx = _tracker.createInstance<U8CharLiteralContext>(_ctx, getState());
  enterRule(_localctx, 36, FutureCParser::RuleU8CharLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(FutureCParser::T__12);
    setState(150);
    match(FutureCParser::Character);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- U32CharLiteralContext ------------------------------------------------------------------

FutureCParser::U32CharLiteralContext::U32CharLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FutureCParser::U32CharLiteralContext::Character() {
  return getToken(FutureCParser::Character, 0);
}


size_t FutureCParser::U32CharLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleU32CharLiteral;
}

void FutureCParser::U32CharLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterU32CharLiteral(this);
}

void FutureCParser::U32CharLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitU32CharLiteral(this);
}

FutureCParser::U32CharLiteralContext* FutureCParser::u32CharLiteral() {
  U32CharLiteralContext *_localctx = _tracker.createInstance<U32CharLiteralContext>(_ctx, getState());
  enterRule(_localctx, 38, FutureCParser::RuleU32CharLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(FutureCParser::T__10);
    setState(153);
    match(FutureCParser::Character);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralContext ------------------------------------------------------------------

FutureCParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FutureCParser::StringLiteralContext::String() {
  return getToken(FutureCParser::String, 0);
}

FutureCParser::U8StringLiteralContext* FutureCParser::StringLiteralContext::u8StringLiteral() {
  return getRuleContext<FutureCParser::U8StringLiteralContext>(0);
}

FutureCParser::U32StringLiteralContext* FutureCParser::StringLiteralContext::u32StringLiteral() {
  return getRuleContext<FutureCParser::U32StringLiteralContext>(0);
}


size_t FutureCParser::StringLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleStringLiteral;
}

void FutureCParser::StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteral(this);
}

void FutureCParser::StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteral(this);
}

FutureCParser::StringLiteralContext* FutureCParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 40, FutureCParser::RuleStringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(158);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FutureCParser::String: {
        enterOuterAlt(_localctx, 1);
        setState(155);
        match(FutureCParser::String);
        break;
      }

      case FutureCParser::T__12: {
        enterOuterAlt(_localctx, 2);
        setState(156);
        u8StringLiteral();
        break;
      }

      case FutureCParser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(157);
        u32StringLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- U8StringLiteralContext ------------------------------------------------------------------

FutureCParser::U8StringLiteralContext::U8StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FutureCParser::U8StringLiteralContext::String() {
  return getToken(FutureCParser::String, 0);
}


size_t FutureCParser::U8StringLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleU8StringLiteral;
}

void FutureCParser::U8StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterU8StringLiteral(this);
}

void FutureCParser::U8StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitU8StringLiteral(this);
}

FutureCParser::U8StringLiteralContext* FutureCParser::u8StringLiteral() {
  U8StringLiteralContext *_localctx = _tracker.createInstance<U8StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 42, FutureCParser::RuleU8StringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(FutureCParser::T__12);
    setState(161);
    match(FutureCParser::String);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- U32StringLiteralContext ------------------------------------------------------------------

FutureCParser::U32StringLiteralContext::U32StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FutureCParser::U32StringLiteralContext::String() {
  return getToken(FutureCParser::String, 0);
}


size_t FutureCParser::U32StringLiteralContext::getRuleIndex() const {
  return FutureCParser::RuleU32StringLiteral;
}

void FutureCParser::U32StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterU32StringLiteral(this);
}

void FutureCParser::U32StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitU32StringLiteral(this);
}

FutureCParser::U32StringLiteralContext* FutureCParser::u32StringLiteral() {
  U32StringLiteralContext *_localctx = _tracker.createInstance<U32StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 44, FutureCParser::RuleU32StringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(FutureCParser::T__10);
    setState(164);
    match(FutureCParser::String);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

FutureCParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FutureCParser::VariableDeclarationContext::Declarator() {
  return getToken(FutureCParser::Declarator, 0);
}


size_t FutureCParser::VariableDeclarationContext::getRuleIndex() const {
  return FutureCParser::RuleVariableDeclaration;
}

void FutureCParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void FutureCParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}

FutureCParser::VariableDeclarationContext* FutureCParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 46, FutureCParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    match(FutureCParser::Declarator);
    setState(167);
    match(FutureCParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDefinitionContext ------------------------------------------------------------------

FutureCParser::VariableDefinitionContext::VariableDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FutureCParser::VariableDefinitionContext::Declarator() {
  return getToken(FutureCParser::Declarator, 0);
}

FutureCParser::ExpressionContext* FutureCParser::VariableDefinitionContext::expression() {
  return getRuleContext<FutureCParser::ExpressionContext>(0);
}


size_t FutureCParser::VariableDefinitionContext::getRuleIndex() const {
  return FutureCParser::RuleVariableDefinition;
}

void FutureCParser::VariableDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDefinition(this);
}

void FutureCParser::VariableDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FutureCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDefinition(this);
}

FutureCParser::VariableDefinitionContext* FutureCParser::variableDefinition() {
  VariableDefinitionContext *_localctx = _tracker.createInstance<VariableDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 48, FutureCParser::RuleVariableDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(179);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(169);
      match(FutureCParser::Declarator);
      setState(170);
      match(FutureCParser::T__1);
      setState(171);
      expression(0);
      setState(172);
      match(FutureCParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(174);
      match(FutureCParser::Declarator);
      setState(175);
      match(FutureCParser::T__16);
      setState(176);
      expression(0);
      setState(177);
      match(FutureCParser::T__17);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool FutureCParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool FutureCParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void FutureCParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  futurecParserInitialize();
#else
  ::antlr4::internal::call_once(futurecParserOnceFlag, futurecParserInitialize);
#endif
}
