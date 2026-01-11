
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
    Struct = 91, Super = 92, Switch = 93, Test = 94, This = 95, Thread_local = 96, 
    Throw = 97, True_ = 98, Try = 99, Type = 100, Union = 101, Unowned = 102, 
    Using = 103, U8 = 104, U16 = 105, U32 = 106, U64 = 107, U128 = 108, 
    Unsafe = 109, Usize = 110, Version = 111, Virtual = 112, Void = 113, 
    Volatile = 114, Weak = 115, While = 116, Yield = 117, Not = 118, And = 119, 
    Or = 120, Identifier = 121, LeftParen = 122, RightParen = 123, LeftBracket = 124, 
    RightBracket = 125, LeftBrace = 126, RightBrace = 127, Plus = 128, Minus = 129, 
    Star = 130, DoubleStar = 131, Div = 132, Mod = 133, LifetimeAnnotation = 134, 
    Caret = 135, DoubleCaret = 136, Amp = 137, VertLine = 138, Tilde = 139, 
    Colon = 140, Assign = 141, Less = 142, Greater = 143, PlusAssign = 144, 
    MinusAssign = 145, TildeAssign = 146, StarAssign = 147, DoubleStarAssign = 148, 
    DivAssign = 149, ModAssign = 150, XorAssign = 151, AndAssign = 152, 
    OrAssign = 153, LeftShiftAssign = 154, RightShiftAssign = 155, SignedRightShiftAssign = 156, 
    Equal = 157, NotEqual = 158, IdentityEqual = 159, NotIdentityEqual = 160, 
    Spaceship = 161, LessEqual = 162, GreaterEqual = 163, PlusPlus = 164, 
    MinusMinus = 165, Comma = 166, Arrow = 167, AssignArrow = 168, EqualArrow = 169, 
    Exclamation = 170, Question = 171, DoubleQuestion = 172, DoubleQuestionAssign = 173, 
    Doublecolon = 174, Semi = 175, Dot = 176, DoubleDot = 177, DoubleDotEqual = 178, 
    Dollar = 179, Ellipsis = 180, Apostroph = 181, AtSign = 182, Op1 = 183, 
    Op2 = 184, Op10 = 185, Op3 = 186, Op4 = 187, Op5 = 188, Op7 = 189, Op6 = 190, 
    Op8 = 191, Op9 = 192, DOUBLE_CURLY_INSIDE = 193, FORMAT_STRING = 194, 
    DecimalLiteral = 195, OctalLiteral = 196, HexadecimalLiteral = 197, 
    BinaryLiteral = 198, Integersuffix = 199, DOUBLE_CURLY_CLOSE_INSIDE = 200
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

