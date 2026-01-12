
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
    Alignof = 24, As = 25, Asm = 26, Assert = 27, Await = 28, Bool = 29, 
    Break = 30, Case = 31, Catch = 32, Char = 33, Byte = 34, Class = 35, 
    Const = 36, Consteval = 37, Continue = 38, Debug = 39, Decimal = 40, 
    Decltype = 41, Default = 42, Delete = 43, Do = 44, Else = 45, Enum = 46, 
    Extension = 47, Extern = 48, False_ = 49, Final = 50, F32 = 51, F64 = 52, 
    Fext = 53, Field = 54, For = 55, Forward = 56, Friend = 57, Get = 58, 
    If = 59, Import = 60, Implicit = 61, In = 62, Inout = 63, I8 = 64, I16 = 65, 
    I32 = 66, I64 = 67, I128 = 68, Isize = 69, Inline = 70, Interface = 71, 
    Internal = 72, Is = 73, Let = 74, Lock = 75, Move = 76, Mutable = 77, 
    New = 78, Noexcept = 79, Null = 80, Object = 81, Operator_ = 82, Out = 83, 
    Override = 84, Private = 85, Protected = 86, Public = 87, Ref = 88, 
    Requires = 89, Return = 90, Rune = 91, Self = 92, Set = 93, Sizeof = 94, 
    Stackalloc = 95, Static = 96, Str = 97, Struct = 98, Super = 99, Switch = 100, 
    Test = 101, This = 102, Thread_local = 103, Throw = 104, True_ = 105, 
    Try = 106, Type = 107, Union = 108, Unowned = 109, Using = 110, U8 = 111, 
    U16 = 112, U32 = 113, U64 = 114, U128 = 115, Unsafe = 116, Usize = 117, 
    Version = 118, Virtual = 119, Void = 120, Volatile = 121, Weak = 122, 
    While = 123, Yield = 124, Not = 125, And = 126, Or = 127, Identifier = 128, 
    LeftParen = 129, RightParen = 130, LeftBracket = 131, RightBracket = 132, 
    LeftBrace = 133, RightBrace = 134, Plus = 135, Minus = 136, Star = 137, 
    DoubleStar = 138, Div = 139, Mod = 140, LifetimeAnnotation = 141, Caret = 142, 
    DoubleCaret = 143, Amp = 144, VertLine = 145, Tilde = 146, Colon = 147, 
    Assign = 148, Less = 149, Greater = 150, PlusAssign = 151, MinusAssign = 152, 
    TildeAssign = 153, StarAssign = 154, DoubleStarAssign = 155, DivAssign = 156, 
    ModAssign = 157, XorAssign = 158, AndAssign = 159, OrAssign = 160, LeftShiftAssign = 161, 
    RightShiftAssign = 162, SignedRightShiftAssign = 163, Equal = 164, NotEqual = 165, 
    IdentityEqual = 166, NotIdentityEqual = 167, Spaceship = 168, LessEqual = 169, 
    GreaterEqual = 170, PlusPlus = 171, MinusMinus = 172, Comma = 173, Arrow = 174, 
    AssignArrow = 175, EqualArrow = 176, Exclamation = 177, Question = 178, 
    DoubleQuestion = 179, DoubleQuestionAssign = 180, Doublecolon = 181, 
    Semi = 182, Dot = 183, DoubleDot = 184, DoubleDotEqual = 185, Dollar = 186, 
    Ellipsis = 187, Apostroph = 188, AtSign = 189, Op1 = 190, Op2 = 191, 
    Op10 = 192, Op3 = 193, Op4 = 194, Op5 = 195, Op7 = 196, Op6 = 197, Op8 = 198, 
    Op9 = 199, DOUBLE_CURLY_INSIDE = 200, OPEN_BRACE_INSIDE = 201, REGULAR_CHAR_INSIDE = 202, 
    VERBATIUM_DOUBLE_GRAVE_INSIDE = 203, MULTILINE_QUOTES_INSIDE = 204, 
    DOUBLE_QUOTE_INSIDE = 205, GRAVE_INSIDE = 206, TRIPLE_QUOTE_INSIDE = 207, 
    REGULAR_STRING_INSIDE = 208, GRAVE_STRING_INSIDE = 209, MULTILINE_STRING_INSIDE = 210, 
    CLOSE_BRACE_INSIDE = 211, FORMAT_STRING = 212, DOUBLE_CURLY_CLOSE_INSIDE = 213
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

