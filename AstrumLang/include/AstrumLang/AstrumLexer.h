
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
    Inline = 73, Interface = 74, Internal = 75, Is = 76, Let = 77, Lock = 78, 
    Move = 79, Mutable = 80, Nameof = 81, New = 82, Noexcept = 83, Null = 84, 
    Object = 85, Offsetof = 86, Operator_ = 87, Out = 88, Override = 89, 
    Package = 90, Private = 91, Protected = 92, Public = 93, Ref = 94, Return = 95, 
    Rune = 96, Self = 97, Set = 98, Sizeof = 99, Stackalloc = 100, Static = 101, 
    Str = 102, Struct = 103, Super = 104, Switch = 105, Test = 106, This = 107, 
    Thread_local = 108, Throw = 109, True_ = 110, Try = 111, Type = 112, 
    Union = 113, Unowned = 114, Using = 115, U8 = 116, U16 = 117, U32 = 118, 
    U64 = 119, U128 = 120, Unsafe = 121, Usize = 122, Version = 123, Virtual = 124, 
    Void = 125, Volatile = 126, Weak = 127, Where = 128, While = 129, Yield = 130, 
    Not = 131, And = 132, Or = 133, Identifier = 134, LeftParen = 135, RightParen = 136, 
    LeftBracket = 137, RightBracket = 138, LeftBrace = 139, RightBrace = 140, 
    Plus = 141, Minus = 142, Star = 143, DoubleStar = 144, Div = 145, Mod = 146, 
    LifetimeAnnotation = 147, Caret = 148, DoubleCaret = 149, Amp = 150, 
    VertLine = 151, Tilde = 152, Colon = 153, Assign = 154, Less = 155, 
    Greater = 156, PlusAssign = 157, MinusAssign = 158, TildeAssign = 159, 
    StarAssign = 160, DoubleStarAssign = 161, DivAssign = 162, ModAssign = 163, 
    XorAssign = 164, AndAssign = 165, OrAssign = 166, LeftShiftAssign = 167, 
    RightShiftAssign = 168, SignedRightShiftAssign = 169, Equal = 170, NotEqual = 171, 
    IdentityEqual = 172, NotIdentityEqual = 173, Spaceship = 174, LessEqual = 175, 
    GreaterEqual = 176, PlusPlus = 177, MinusMinus = 178, Comma = 179, Arrow = 180, 
    AssignArrow = 181, EqualArrow = 182, Exclamation = 183, Question = 184, 
    DoubleQuestion = 185, DoubleQuestionAssign = 186, Doublecolon = 187, 
    Semi = 188, Dot = 189, DoubleDot = 190, DoubleDotEqual = 191, Dollar = 192, 
    Ellipsis = 193, Apostroph = 194, AtSign = 195, Op1 = 196, Op2 = 197, 
    Op10 = 198, Op3 = 199, Op4 = 200, Op5 = 201, Op7 = 202, Op6 = 203, Op8 = 204, 
    Op9 = 205, DOUBLE_CURLY_INSIDE = 206, OPEN_BRACE_INSIDE = 207, REGULAR_CHAR_INSIDE = 208, 
    VERBATIUM_DOUBLE_GRAVE_INSIDE = 209, MULTILINE_QUOTES_INSIDE = 210, 
    DOUBLE_QUOTE_INSIDE = 211, GRAVE_INSIDE = 212, TRIPLE_QUOTE_INSIDE = 213, 
    REGULAR_STRING_INSIDE = 214, GRAVE_STRING_INSIDE = 215, MULTILINE_STRING_INSIDE = 216, 
    CLOSE_BRACE_INSIDE = 217, FORMAT_STRING = 218, DOUBLE_CURLY_CLOSE_INSIDE = 219
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
