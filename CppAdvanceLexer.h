
// Generated from CppAdvanceLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CppAdvanceLexer : public antlr4::Lexer {
public:
  enum {
    Whitespace = 1, Newline = 2, BlockComment = 3, LineComment = 4, IntegerLiteral = 5, 
    CharacterLiteral = 6, FloatingLiteral = 7, DecimalTypeLiteral = 8, StringLiteral = 9, 
    RegularString = 10, HexStringLiteral = 11, GraveString = 12, MultilineStringLiteral = 13, 
    BooleanLiteral = 14, Directive = 15, Abstract = 16, Alignas = 17, Alignof = 18, 
    As = 19, Asm = 20, Assert = 21, Auto = 22, Await = 23, Bool = 24, Break = 25, 
    Case = 26, Catch = 27, Char = 28, Byte = 29, Class = 30, Concept = 31, 
    Const = 32, Consteval = 33, Continue = 34, Copy = 35, Debug = 36, Decimal = 37, 
    Decltype = 38, Default = 39, Delete = 40, Do = 41, Else = 42, Enum = 43, 
    Extern = 44, False_ = 45, Final = 46, F32 = 47, F64 = 48, Fext = 49, 
    Field = 50, For = 51, Forward = 52, Friend = 53, Get = 54, Goto = 55, 
    If = 56, Import = 57, Implicit = 58, In = 59, Inout = 60, I8 = 61, I16 = 62, 
    I32 = 63, I64 = 64, I128 = 65, Isize = 66, Inline = 67, Interface = 68, 
    Internal = 69, Is = 70, Let = 71, Lock = 72, Module = 73, Move = 74, 
    Mutable = 75, Namespace = 76, New = 77, Noexcept = 78, Null = 79, Object = 80, 
    Operator_ = 81, Out = 82, Override = 83, Private = 84, Protected = 85, 
    Public = 86, Ref = 87, Requires = 88, Return = 89, Rune = 90, Self = 91, 
    Set = 92, Sizeof = 93, Stackalloc = 94, Static = 95, Str = 96, Struct = 97, 
    Super = 98, Switch = 99, That = 100, This = 101, Thread_local = 102, 
    Throw = 103, True_ = 104, Try = 105, Type = 106, Typeof = 107, Union = 108, 
    Unowned = 109, Using = 110, U8 = 111, U16 = 112, U32 = 113, U64 = 114, 
    U128 = 115, Unsafe = 116, Usize = 117, Version = 118, Virtual = 119, 
    Void = 120, Volatile = 121, Weak = 122, While = 123, Yield = 124, Not = 125, 
    And = 126, Or = 127, Identifier = 128, LeftParen = 129, RightParen = 130, 
    LeftBracket = 131, RightBracket = 132, LeftBrace = 133, RightBrace = 134, 
    Plus = 135, Minus = 136, Star = 137, DoubleStar = 138, Div = 139, Mod = 140, 
    LifetimeAnnotation = 141, Caret = 142, Amp = 143, VertLine = 144, Tilde = 145, 
    Colon = 146, Assign = 147, Less = 148, Greater = 149, PlusAssign = 150, 
    MinusAssign = 151, StarAssign = 152, DivAssign = 153, ModAssign = 154, 
    XorAssign = 155, AndAssign = 156, OrAssign = 157, LeftShiftAssign = 158, 
    RightShiftAssign = 159, SignedLeftShiftAssign = 160, SignedRightShiftAssign = 161, 
    Equal = 162, NotEqual = 163, Spaceship = 164, LessEqual = 165, GreaterEqual = 166, 
    PlusPlus = 167, MinusMinus = 168, Comma = 169, Arrow = 170, Exclamation = 171, 
    Question = 172, DoubleQuestion = 173, DoubleQuestionAssign = 174, Doublecolon = 175, 
    Semi = 176, Dot = 177, DoubleDot = 178, DoubleDotLess = 179, Dollar = 180, 
    Ellipsis = 181, Apostroph = 182, AtSign = 183, DOUBLE_CURLY_INSIDE = 184, 
    FORMAT_STRING = 185, DecimalLiteral = 186, OctalLiteral = 187, HexadecimalLiteral = 188, 
    BinaryLiteral = 189, Integersuffix = 190, DOUBLE_CURLY_CLOSE_INSIDE = 191
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

