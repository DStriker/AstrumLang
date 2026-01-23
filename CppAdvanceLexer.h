
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
    Out = 85, Override = 86, Package = 87, Private = 88, Protected = 89, 
    Public = 90, Ref = 91, Return = 92, Rune = 93, Self = 94, Set = 95, 
    Sizeof = 96, Stackalloc = 97, Static = 98, Str = 99, Struct = 100, Super = 101, 
    Switch = 102, Test = 103, This = 104, Thread_local = 105, Throw = 106, 
    True_ = 107, Try = 108, Type = 109, Union = 110, Unowned = 111, Using = 112, 
    U8 = 113, U16 = 114, U32 = 115, U64 = 116, U128 = 117, Unsafe = 118, 
    Usize = 119, Version = 120, Virtual = 121, Void = 122, Volatile = 123, 
    Weak = 124, Where = 125, While = 126, Yield = 127, Not = 128, And = 129, 
    Or = 130, Identifier = 131, LeftParen = 132, RightParen = 133, LeftBracket = 134, 
    RightBracket = 135, LeftBrace = 136, RightBrace = 137, Plus = 138, Minus = 139, 
    Star = 140, DoubleStar = 141, Div = 142, Mod = 143, LifetimeAnnotation = 144, 
    Caret = 145, DoubleCaret = 146, Amp = 147, VertLine = 148, Tilde = 149, 
    Colon = 150, Assign = 151, Less = 152, Greater = 153, PlusAssign = 154, 
    MinusAssign = 155, TildeAssign = 156, StarAssign = 157, DoubleStarAssign = 158, 
    DivAssign = 159, ModAssign = 160, XorAssign = 161, AndAssign = 162, 
    OrAssign = 163, LeftShiftAssign = 164, RightShiftAssign = 165, SignedRightShiftAssign = 166, 
    Equal = 167, NotEqual = 168, IdentityEqual = 169, NotIdentityEqual = 170, 
    Spaceship = 171, LessEqual = 172, GreaterEqual = 173, PlusPlus = 174, 
    MinusMinus = 175, Comma = 176, Arrow = 177, AssignArrow = 178, EqualArrow = 179, 
    Exclamation = 180, Question = 181, DoubleQuestion = 182, DoubleQuestionAssign = 183, 
    Doublecolon = 184, Semi = 185, Dot = 186, DoubleDot = 187, DoubleDotEqual = 188, 
    Dollar = 189, Ellipsis = 190, Apostroph = 191, AtSign = 192, Op1 = 193, 
    Op2 = 194, Op10 = 195, Op3 = 196, Op4 = 197, Op5 = 198, Op7 = 199, Op6 = 200, 
    Op8 = 201, Op9 = 202, DOUBLE_CURLY_INSIDE = 203, OPEN_BRACE_INSIDE = 204, 
    REGULAR_CHAR_INSIDE = 205, VERBATIUM_DOUBLE_GRAVE_INSIDE = 206, MULTILINE_QUOTES_INSIDE = 207, 
    DOUBLE_QUOTE_INSIDE = 208, GRAVE_INSIDE = 209, TRIPLE_QUOTE_INSIDE = 210, 
    REGULAR_STRING_INSIDE = 211, GRAVE_STRING_INSIDE = 212, MULTILINE_STRING_INSIDE = 213, 
    CLOSE_BRACE_INSIDE = 214, FORMAT_STRING = 215, DOUBLE_CURLY_CLOSE_INSIDE = 216
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

