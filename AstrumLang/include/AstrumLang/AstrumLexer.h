
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
    MultilineStringLiteral = 20, BooleanLiteral = 21, Directive = 22, Abstract = 23, 
    Alignof = 24, As = 25, Assert = 26, Assume = 27, Await = 28, Bool = 29, 
    Break = 30, Catch = 31, Char = 32, Byte = 33, Class = 34, Const = 35, 
    Consteval = 36, Continue = 37, Cpp = 38, Debug = 39, Decay = 40, Decimal = 41, 
    Decltype = 42, Declval = 43, Default = 44, Defer = 45, Delete = 46, 
    Do = 47, Else = 48, Enum = 49, Extension = 50, Extern = 51, False_ = 52, 
    Final = 53, F32 = 54, F64 = 55, Fext = 56, Field = 57, For = 58, Forward = 59, 
    Friend = 60, Get = 61, If = 62, Import = 63, Implicit = 64, In = 65, 
    Inout = 66, I8 = 67, I16 = 68, I32 = 69, I64 = 70, I128 = 71, Isize = 72, 
    Inline = 73, Interface = 74, Internal = 75, Is = 76, Lazy = 77, Let = 78, 
    Lock = 79, Move = 80, Mutable = 81, Nameof = 82, New = 83, Noexcept = 84, 
    Null = 85, Object = 86, Offsetof = 87, Operator_ = 88, Out = 89, Override = 90, 
    Package = 91, Private = 92, Protected = 93, Public = 94, Ref = 95, Return = 96, 
    Rune = 97, Self = 98, Set = 99, Sizeof = 100, Stackalloc = 101, Static = 102, 
    Str = 103, Struct = 104, Super = 105, Switch = 106, Test = 107, This = 108, 
    Thread_local = 109, Throw = 110, True_ = 111, Try = 112, Type = 113, 
    Union = 114, Unowned = 115, Using = 116, U8 = 117, U16 = 118, U32 = 119, 
    U64 = 120, U128 = 121, Unsafe = 122, Usize = 123, Version = 124, Virtual = 125, 
    Void = 126, Volatile = 127, Weak = 128, Where = 129, While = 130, Yield = 131, 
    Not = 132, And = 133, Or = 134, Identifier = 135, LeftParen = 136, RightParen = 137, 
    LeftBracket = 138, RightBracket = 139, LeftBrace = 140, RightBrace = 141, 
    Plus = 142, Minus = 143, Star = 144, DoubleStar = 145, Div = 146, Mod = 147, 
    LifetimeAnnotation = 148, Caret = 149, DoubleCaret = 150, Amp = 151, 
    VertLine = 152, Tilde = 153, Colon = 154, Assign = 155, Less = 156, 
    Greater = 157, PlusAssign = 158, MinusAssign = 159, TildeAssign = 160, 
    StarAssign = 161, DoubleStarAssign = 162, DivAssign = 163, ModAssign = 164, 
    XorAssign = 165, AndAssign = 166, OrAssign = 167, LeftShiftAssign = 168, 
    RightShiftAssign = 169, SignedRightShiftAssign = 170, Equal = 171, NotEqual = 172, 
    IdentityEqual = 173, NotIdentityEqual = 174, Spaceship = 175, LessEqual = 176, 
    GreaterEqual = 177, PlusPlus = 178, MinusMinus = 179, Comma = 180, Arrow = 181, 
    AssignArrow = 182, EqualArrow = 183, Exclamation = 184, Question = 185, 
    DoubleQuestion = 186, DoubleQuestionAssign = 187, Doublecolon = 188, 
    Semi = 189, Dot = 190, DoubleDot = 191, DoubleDotEqual = 192, Dollar = 193, 
    Ellipsis = 194, Apostroph = 195, AtSign = 196, Op1 = 197, Op2 = 198, 
    Op10 = 199, Op3 = 200, Op4 = 201, Op5 = 202, Op7 = 203, Op6 = 204, Op8 = 205, 
    Op9 = 206, DOUBLE_CURLY_INSIDE = 207, OPEN_BRACE_INSIDE = 208, REGULAR_CHAR_INSIDE = 209, 
    VERBATIUM_DOUBLE_GRAVE_INSIDE = 210, MULTILINE_QUOTES_INSIDE = 211, 
    DOUBLE_QUOTE_INSIDE = 212, GRAVE_INSIDE = 213, TRIPLE_QUOTE_INSIDE = 214, 
    REGULAR_STRING_INSIDE = 215, GRAVE_STRING_INSIDE = 216, MULTILINE_STRING_INSIDE = 217, 
    CLOSE_BRACE_INSIDE = 218, FORMAT_STRING = 219, DOUBLE_CURLY_CLOSE_INSIDE = 220
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
