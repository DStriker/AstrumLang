
#include "AstrumLexerBase.h"
#include "export.h"


// Generated from AstrumLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace AstrumLang {


class ASTRUMLANG_API AstrumLexer : public AstrumLexerBase {
public:
  enum {
    Whitespace = 1, Newline = 2, BlockComment = 3, LineComment = 4, IntegerLiteral = 5, 
    CharacterLiteral = 6, FloatingLiteral = 7, DecimalTypeLiteral = 8, DecimalLiteral = 9, 
    OctalLiteral = 10, HexadecimalLiteral = 11, BinaryLiteral = 12, StringLiteral = 13, 
    RegularString = 14, HexStringLiteral = 15, GraveString = 16, InterpolatedRegularStringStart = 17, 
    InterpolatedGraveStringStart = 18, InterpolatedMultilineStringStart = 19, 
    MultilineStringLiteral = 20, BooleanLiteral = 21, Abstract = 22, Alignof = 23, 
    As = 24, Assert = 25, Assume = 26, Await = 27, Bool = 28, Break = 29, 
    Catch = 30, Char = 31, Byte = 32, Class = 33, Const = 34, Consteval = 35, 
    Continue = 36, Cpp = 37, Debug = 38, Decay = 39, Decimal = 40, Decltype = 41, 
    Declval = 42, Default = 43, Defer = 44, Delete = 45, Do = 46, Else = 47, 
    Enum = 48, Extension = 49, Extern = 50, False_ = 51, Final = 52, F16 = 53, 
    F32 = 54, F64 = 55, F128 = 56, Fext = 57, Field = 58, For = 59, Forward = 60, 
    Friend = 61, Get = 62, If = 63, Import = 64, Implicit = 65, In = 66, 
    Inout = 67, I8 = 68, I16 = 69, I32 = 70, I64 = 71, I128 = 72, Isize = 73, 
    Inline = 74, Interface = 75, Internal = 76, Is = 77, Lazy = 78, Let = 79, 
    Lock = 80, Move = 81, Mutable = 82, Nameof = 83, New = 84, Noexcept = 85, 
    Null = 86, Object = 87, Offsetof = 88, Operator_ = 89, Out = 90, Override = 91, 
    Package = 92, Private = 93, Protected = 94, Public = 95, Ref = 96, Return = 97, 
    Rune = 98, Self = 99, Set = 100, Sizeof = 101, Stackalloc = 102, Static = 103, 
    Str = 104, Struct = 105, Super = 106, Switch = 107, Test = 108, This = 109, 
    Thread_local = 110, Throw = 111, True_ = 112, Try = 113, Type = 114, 
    Union = 115, Unowned = 116, Using = 117, U8 = 118, U16 = 119, U32 = 120, 
    U64 = 121, U128 = 122, Unsafe = 123, Usize = 124, Version = 125, Virtual = 126, 
    Void = 127, Volatile = 128, Weak = 129, Where = 130, While = 131, Yield = 132, 
    Not = 133, And = 134, Or = 135, Identifier = 136, LeftParen = 137, RightParen = 138, 
    LeftBracket = 139, RightBracket = 140, LeftBrace = 141, RightBrace = 142, 
    Plus = 143, Minus = 144, Star = 145, DoubleStar = 146, Div = 147, Mod = 148, 
    LifetimeAnnotation = 149, Caret = 150, DoubleCaret = 151, Amp = 152, 
    VertLine = 153, Tilde = 154, Colon = 155, Assign = 156, Less = 157, 
    Greater = 158, PlusAssign = 159, MinusAssign = 160, TildeAssign = 161, 
    StarAssign = 162, DoubleStarAssign = 163, DivAssign = 164, ModAssign = 165, 
    XorAssign = 166, AndAssign = 167, OrAssign = 168, LeftShiftAssign = 169, 
    RightShiftAssign = 170, SignedRightShiftAssign = 171, Equal = 172, NotEqual = 173, 
    IdentityEqual = 174, NotIdentityEqual = 175, Spaceship = 176, LessEqual = 177, 
    GreaterEqual = 178, PlusPlus = 179, MinusMinus = 180, Comma = 181, Arrow = 182, 
    AssignArrow = 183, EqualArrow = 184, Exclamation = 185, Question = 186, 
    DoubleQuestion = 187, DoubleQuestionAssign = 188, Doublecolon = 189, 
    Semi = 190, Dot = 191, DoubleDot = 192, DoubleDotEqual = 193, Dollar = 194, 
    Hash = 195, Ellipsis = 196, Apostroph = 197, AtSign = 198, Op1 = 199, 
    Op2 = 200, Op10 = 201, Op3 = 202, Op4 = 203, Op5 = 204, Op7 = 205, Op6 = 206, 
    Op8 = 207, Op9 = 208, DOUBLE_CURLY_INSIDE = 209, OPEN_BRACE_INSIDE = 210, 
    REGULAR_CHAR_INSIDE = 211, VERBATIUM_DOUBLE_GRAVE_INSIDE = 212, MULTILINE_QUOTES_INSIDE = 213, 
    DOUBLE_QUOTE_INSIDE = 214, GRAVE_INSIDE = 215, TRIPLE_QUOTE_INSIDE = 216, 
    REGULAR_STRING_INSIDE = 217, GRAVE_STRING_INSIDE = 218, MULTILINE_STRING_INSIDE = 219, 
    CLOSE_BRACE_INSIDE = 220, FORMAT_STRING = 221, DOUBLE_CURLY_CLOSE_INSIDE = 222
  };

  enum {
    INTERPOLATION_STRING = 1, INTERPOLATION_FORMAT = 2
  };

  explicit AstrumLexer(antlr4::CharStream *input);

  ~AstrumLexer() override;


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

}  // namespace AstrumLang
