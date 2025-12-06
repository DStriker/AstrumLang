
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
    Set = 92, Sizeof = 93, Static = 94, Str = 95, Struct = 96, Super = 97, 
    Switch = 98, That = 99, This = 100, Thread_local = 101, Throw = 102, 
    True_ = 103, Try = 104, Type = 105, Typeof = 106, Union = 107, Unowned = 108, 
    Using = 109, U8 = 110, U16 = 111, U32 = 112, U64 = 113, U128 = 114, 
    Unsafe = 115, Usize = 116, Version = 117, Virtual = 118, Void = 119, 
    Volatile = 120, Weak = 121, While = 122, Yield = 123, Not = 124, And = 125, 
    Or = 126, Identifier = 127, LeftParen = 128, RightParen = 129, LeftBracket = 130, 
    RightBracket = 131, LeftBrace = 132, RightBrace = 133, Plus = 134, Minus = 135, 
    Star = 136, DoubleStar = 137, Div = 138, Mod = 139, LifetimeAnnotation = 140, 
    Caret = 141, Amp = 142, VertLine = 143, Tilde = 144, Colon = 145, Assign = 146, 
    Less = 147, Greater = 148, PlusAssign = 149, MinusAssign = 150, StarAssign = 151, 
    DivAssign = 152, ModAssign = 153, XorAssign = 154, AndAssign = 155, 
    OrAssign = 156, LeftShiftAssign = 157, RightShiftAssign = 158, SignedLeftShiftAssign = 159, 
    SignedRightShiftAssign = 160, Equal = 161, NotEqual = 162, Spaceship = 163, 
    LessEqual = 164, GreaterEqual = 165, PlusPlus = 166, MinusMinus = 167, 
    Comma = 168, Arrow = 169, Exclamation = 170, Question = 171, DoubleQuestion = 172, 
    DoubleQuestionAssign = 173, Doublecolon = 174, Semi = 175, Dot = 176, 
    DoubleDot = 177, DoubleDotLess = 178, Dollar = 179, Ellipsis = 180, 
    Apostroph = 181, AtSign = 182, DOUBLE_CURLY_INSIDE = 183, FORMAT_STRING = 184, 
    DecimalLiteral = 185, OctalLiteral = 186, HexadecimalLiteral = 187, 
    BinaryLiteral = 188, Integersuffix = 189, DOUBLE_CURLY_CLOSE_INSIDE = 190
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

