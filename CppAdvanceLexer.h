
// Generated from CppAdvanceLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CppAdvanceLexer : public antlr4::Lexer {
public:
  enum {
    Whitespace = 1, Newline = 2, BlockComment = 3, LineComment = 4, IntegerLiteral = 5, 
    CharacterLiteral = 6, FloatingLiteral = 7, DecimalTypeLiteral = 8, StringLiteral = 9, 
    RegularString = 10, HexStringLiteral = 11, GraveString = 12, MultilineStringLiteral = 13, 
    BooleanLiteral = 14, Directive = 15, Abstract = 16, Alignof = 17, As = 18, 
    Asm = 19, Assert = 20, Await = 21, Bool = 22, Break = 23, Case = 24, 
    Catch = 25, Char = 26, Byte = 27, Class = 28, Const = 29, Consteval = 30, 
    Continue = 31, Debug = 32, Decimal = 33, Decltype = 34, Default = 35, 
    Delete = 36, Do = 37, Else = 38, Enum = 39, Extension = 40, Extern = 41, 
    False_ = 42, Final = 43, F32 = 44, F64 = 45, Fext = 46, Field = 47, 
    For = 48, Forward = 49, Friend = 50, Get = 51, If = 52, Import = 53, 
    Implicit = 54, In = 55, Inout = 56, I8 = 57, I16 = 58, I32 = 59, I64 = 60, 
    I128 = 61, Isize = 62, Inline = 63, Interface = 64, Internal = 65, Is = 66, 
    Let = 67, Lock = 68, Move = 69, Mutable = 70, New = 71, Noexcept = 72, 
    Null = 73, Object = 74, Operator_ = 75, Out = 76, Override = 77, Private = 78, 
    Protected = 79, Public = 80, Ref = 81, Requires = 82, Return = 83, Rune = 84, 
    Self = 85, Set = 86, Sizeof = 87, Stackalloc = 88, Static = 89, Str = 90, 
    Struct = 91, Super = 92, Switch = 93, This = 94, Thread_local = 95, 
    Throw = 96, True_ = 97, Try = 98, Type = 99, Union = 100, Unowned = 101, 
    Using = 102, U8 = 103, U16 = 104, U32 = 105, U64 = 106, U128 = 107, 
    Unsafe = 108, Usize = 109, Version = 110, Virtual = 111, Void = 112, 
    Volatile = 113, Weak = 114, While = 115, Yield = 116, Not = 117, And = 118, 
    Or = 119, Identifier = 120, LeftParen = 121, RightParen = 122, LeftBracket = 123, 
    RightBracket = 124, LeftBrace = 125, RightBrace = 126, Plus = 127, Minus = 128, 
    Star = 129, DoubleStar = 130, Div = 131, Mod = 132, LifetimeAnnotation = 133, 
    Caret = 134, DoubleCaret = 135, Amp = 136, VertLine = 137, Tilde = 138, 
    Colon = 139, Assign = 140, Less = 141, Greater = 142, PlusAssign = 143, 
    MinusAssign = 144, TildeAssign = 145, StarAssign = 146, DoubleStarAssign = 147, 
    DivAssign = 148, ModAssign = 149, XorAssign = 150, AndAssign = 151, 
    OrAssign = 152, LeftShiftAssign = 153, RightShiftAssign = 154, SignedRightShiftAssign = 155, 
    Equal = 156, NotEqual = 157, IdentityEqual = 158, NotIdentityEqual = 159, 
    Spaceship = 160, LessEqual = 161, GreaterEqual = 162, PlusPlus = 163, 
    MinusMinus = 164, Comma = 165, Arrow = 166, AssignArrow = 167, EqualArrow = 168, 
    Exclamation = 169, Question = 170, DoubleQuestion = 171, DoubleQuestionAssign = 172, 
    Doublecolon = 173, Semi = 174, Dot = 175, DoubleDot = 176, DoubleDotEqual = 177, 
    Dollar = 178, Ellipsis = 179, Apostroph = 180, AtSign = 181, Op1 = 182, 
    Op2 = 183, Op10 = 184, Op3 = 185, Op4 = 186, Op5 = 187, Op7 = 188, Op6 = 189, 
    Op8 = 190, Op9 = 191, DOUBLE_CURLY_INSIDE = 192, FORMAT_STRING = 193, 
    DecimalLiteral = 194, OctalLiteral = 195, HexadecimalLiteral = 196, 
    BinaryLiteral = 197, Integersuffix = 198, DOUBLE_CURLY_CLOSE_INSIDE = 199
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

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

