
#include "CppAdvanceLexerBase.h"


// Generated from CppAdvanceLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CppAdvanceLexer : public CppAdvanceLexerBase {
public:
  enum {
    Whitespace = 1, Newline = 2, BlockComment = 3, LineComment = 4, IntegerLiteral = 5, 
    CharacterLiteral = 6, FloatingLiteral = 7, DecimalTypeLiteral = 8, DecimalLiteral = 9, 
    OctalLiteral = 10, HexadecimalLiteral = 11, BinaryLiteral = 12, StringLiteral = 13, 
    RegularString = 14, HexStringLiteral = 15, GraveString = 16, InterpolatedRegularStringStart = 17, 
    InterpolatedGraveStringStart = 18, InterpolatedMultilineStringStart = 19, 
    MultilineStringLiteral = 20, BooleanLiteral = 21, Directive = 22, Abstract = 23, 
    Alignof = 24, As = 25, Assert = 26, Assume = 27, Await = 28, Bool = 29, 
    Break = 30, Catch = 31, Char = 32, Byte = 33, Class = 34, Const = 35, 
    Consteval = 36, Continue = 37, Cpp = 38, Debug = 39, Decay = 40, Decimal = 41, 
    Decltype = 42, Declval = 43, Default = 44, Delete = 45, Do = 46, Else = 47, 
    Enum = 48, Extension = 49, Extern = 50, False_ = 51, Final = 52, F32 = 53, 
    F64 = 54, Fext = 55, Field = 56, For = 57, Forward = 58, Friend = 59, 
    Get = 60, If = 61, Import = 62, Implicit = 63, In = 64, Inout = 65, 
    I8 = 66, I16 = 67, I32 = 68, I64 = 69, I128 = 70, Isize = 71, Inline = 72, 
    Interface = 73, Internal = 74, Is = 75, Let = 76, Lock = 77, Move = 78, 
    Mutable = 79, New = 80, Noexcept = 81, Null = 82, Object = 83, Operator_ = 84, 
    Out = 85, Override = 86, Private = 87, Protected = 88, Public = 89, 
    Ref = 90, Return = 91, Rune = 92, Self = 93, Set = 94, Sizeof = 95, 
    Stackalloc = 96, Static = 97, Str = 98, Struct = 99, Super = 100, Switch = 101, 
    Test = 102, This = 103, Thread_local = 104, Throw = 105, True_ = 106, 
    Try = 107, Type = 108, Union = 109, Unowned = 110, Using = 111, U8 = 112, 
    U16 = 113, U32 = 114, U64 = 115, U128 = 116, Unsafe = 117, Usize = 118, 
    Version = 119, Virtual = 120, Void = 121, Volatile = 122, Weak = 123, 
    Where = 124, While = 125, Yield = 126, Not = 127, And = 128, Or = 129, 
    Identifier = 130, LeftParen = 131, RightParen = 132, LeftBracket = 133, 
    RightBracket = 134, LeftBrace = 135, RightBrace = 136, Plus = 137, Minus = 138, 
    Star = 139, DoubleStar = 140, Div = 141, Mod = 142, LifetimeAnnotation = 143, 
    Caret = 144, DoubleCaret = 145, Amp = 146, VertLine = 147, Tilde = 148, 
    Colon = 149, Assign = 150, Less = 151, Greater = 152, PlusAssign = 153, 
    MinusAssign = 154, TildeAssign = 155, StarAssign = 156, DoubleStarAssign = 157, 
    DivAssign = 158, ModAssign = 159, XorAssign = 160, AndAssign = 161, 
    OrAssign = 162, LeftShiftAssign = 163, RightShiftAssign = 164, SignedRightShiftAssign = 165, 
    Equal = 166, NotEqual = 167, IdentityEqual = 168, NotIdentityEqual = 169, 
    Spaceship = 170, LessEqual = 171, GreaterEqual = 172, PlusPlus = 173, 
    MinusMinus = 174, Comma = 175, Arrow = 176, AssignArrow = 177, EqualArrow = 178, 
    Exclamation = 179, Question = 180, DoubleQuestion = 181, DoubleQuestionAssign = 182, 
    Doublecolon = 183, Semi = 184, Dot = 185, DoubleDot = 186, DoubleDotEqual = 187, 
    Dollar = 188, Ellipsis = 189, Apostroph = 190, AtSign = 191, Op1 = 192, 
    Op2 = 193, Op10 = 194, Op3 = 195, Op4 = 196, Op5 = 197, Op7 = 198, Op6 = 199, 
    Op8 = 200, Op9 = 201, DOUBLE_CURLY_INSIDE = 202, OPEN_BRACE_INSIDE = 203, 
    REGULAR_CHAR_INSIDE = 204, VERBATIUM_DOUBLE_GRAVE_INSIDE = 205, MULTILINE_QUOTES_INSIDE = 206, 
    DOUBLE_QUOTE_INSIDE = 207, GRAVE_INSIDE = 208, TRIPLE_QUOTE_INSIDE = 209, 
    REGULAR_STRING_INSIDE = 210, GRAVE_STRING_INSIDE = 211, MULTILINE_STRING_INSIDE = 212, 
    CLOSE_BRACE_INSIDE = 213, FORMAT_STRING = 214, DOUBLE_CURLY_CLOSE_INSIDE = 215
  };

  enum {
    INTERPOLATION_STRING = 1, INTERPOLATION_FORMAT = 2
  };

  explicit CppAdvanceLexer(antlr4::CharStream *input);

  ~CppAdvanceLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.
  void InterpolatedRegularStringStartAction(antlr4::RuleContext *context, size_t actionIndex);
  void InterpolatedGraveStringStartAction(antlr4::RuleContext *context, size_t actionIndex);
  void InterpolatedMultilineStringStartAction(antlr4::RuleContext *context, size_t actionIndex);
  void LeftBraceAction(antlr4::RuleContext *context, size_t actionIndex);
  void RightBraceAction(antlr4::RuleContext *context, size_t actionIndex);
  void ColonAction(antlr4::RuleContext *context, size_t actionIndex);
  void OPEN_BRACE_INSIDEAction(antlr4::RuleContext *context, size_t actionIndex);
  void DOUBLE_QUOTE_INSIDEAction(antlr4::RuleContext *context, size_t actionIndex);
  void GRAVE_INSIDEAction(antlr4::RuleContext *context, size_t actionIndex);
  void TRIPLE_QUOTE_INSIDEAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_BRACE_INSIDEAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool REGULAR_CHAR_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VERBATIUM_DOUBLE_GRAVE_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MULTILINE_QUOTES_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REGULAR_STRING_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GRAVE_STRING_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MULTILINE_STRING_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

};

