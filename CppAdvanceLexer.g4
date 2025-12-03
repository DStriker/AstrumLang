lexer grammar CppAdvanceLexer;

Whitespace: [ \t]+ -> skip;

Newline: ('\r' '\n'? | '\n') -> skip;

BlockComment: '/*' .*? '*/' -> skip;

LineComment: '//' ~ [\r\n]* -> skip;

IntegerLiteral:
    DecimalLiteral Integersuffix?
    | OctalLiteral Integersuffix?
    | HexadecimalLiteral Integersuffix?
    | BinaryLiteral Integersuffix?
;

CharacterLiteral: ('b' | 'u' | 'U')? '\'' Cchar+ '\'';

FloatingLiteral:
      Fractionalconstant Exponentpart? Floatingsuffix
    | StrictFractionalconstant Exponentpart? Floatingsuffix?
    | Digitsequence Exponentpart Floatingsuffix?
    | '0x' '_'? HexFractionalconstant HexExponentpart? Floatingsuffix
    | '0x' '_'? StrictHexFractionalconstant HexExponentpart? Floatingsuffix?
    | '0x' '_'? HexDigitsequence HexExponentpart Floatingsuffix?
;

DecimalTypeLiteral: Digitsequence? '.' Digitsequence 'm';

StringLiteral: Encodingprefix? (Rawstring | RegularString | GraveString);

RegularString: '"' Schar* '"';

HexStringLiteral: 'x"' (HEXADECIMALDIGIT | [ \t])* '"';

GraveString: '`' Gchar* '`';

//InterpolatedRegularStringStart:
//    Encodingprefix? '$"' { this.OnInterpolatedRegularStringStart(); } -> pushMode(INTERPOLATION_STRING)
//;
//InterpolatedGraveStringStart:
//    Encodingprefix? '$`' { this.OnInterpolatedVerbatiumStringStart(); } -> pushMode(INTERPOLATION_STRING)
//;
//InterpolatedMultilineStringStart:
//    Encodingprefix? '$\'\'\'' { this.OnInterpolatedMultilineStringStart(); } -> pushMode(INTERPOLATION_STRING)
//;

MultilineStringLiteral: '\'\'\'' MultilineStringItem*? '\'\'\'';

BooleanLiteral: False_ | True_;

Directive: '#' ~ [\n]* -> channel (HIDDEN);

Abstract: 'abstract';

Alignas: 'alignas';

Alignof: 'alignof';

As: 'as';

Asm: 'asm';

Assert: 'assert';

Auto: '_';

Await: 'await';

Bool: 'bool';

Break: 'break';

Case: 'case';

Catch: 'catch';

Char: 'char';

Byte: 'byte';

Class: 'class';

Concept: 'concept';

Const: 'const';

Consteval: 'consteval';

Continue: 'continue';

Copy: 'copy';

Debug: 'debug';

Decimal: 'decimal';

Decltype: 'decltype';

Default: 'default';

Delete: 'delete';

Do: 'do';

Else: 'else';

Enum: 'enum';

Extern: 'extern';

False_: 'false';

Final: 'final';

F32: 'f32';

F64: 'f64';

Fext: 'fext';

Field: 'field';

For: 'for';

Forward: 'forward';

Friend: 'friend';

Get: 'get';

Goto: 'goto';

If: 'if';

Import: 'import';

Implicit: 'implicit';

In: 'in';

Inout: 'inout';

I8: 'i8';

I16: 'i16';

I32: 'i32';

I64: 'i64';

I128: 'i128';

Isize: 'isize';

Inline: 'inline';

Interface: 'interface';

Internal: 'internal';

Is: 'is';

Let: 'let';

Lock: 'lock';

Module: 'module';

Move: 'move';

Mutable: 'mut';

Namespace: 'namespace';

New: 'new';

Noexcept: 'noexcept';

Null: 'null';

Operator_: 'operator';

Out: 'out';

Override: 'override';

Private: 'private';

Protected: 'protected';

Public: 'public';

Ref: 'ref';

Requires: 'requires';

Return: 'return';

Rune: 'rune';

Self: 'self';

Set: 'set';

Sizeof: 'sizeof';

Static: 'static';

Str: 'str';

Struct: 'struct';

Super: 'super';

Switch: 'switch';

That: 'that';

This: 'this';

Thread_local: 'tls';

Throw: 'throw';

True_: 'true';

Try: 'try';

Type: 'type';

Typeof: 'typeof';

Union: 'union';

Unowned: 'unowned';

Using: 'using';

U8: 'u8';

U16: 'u16';

U32: 'u32';

U64: 'u64';

U128: 'u128';

Unsafe: 'unsafe';

Usize: 'usize';

Version: 'version';

Virtual: 'virtual';

Void: 'void';

Volatile: 'volatile';

Weak: 'weak';

While: 'while';

Yield: 'yield';

Not: 'not';

And: '&&' | 'and';

Or: '||' | 'or';

Identifier:
    Identifiernondigit (Identifiernondigit | DIGIT)*
;

LeftParen: '(';

RightParen: ')';

LeftBracket: '[';

RightBracket: ']';

LeftBrace: '{';

RightBrace: '}';

Plus: '+';

Minus: '-';

Star: '*';

DoubleStar: '**';

Div: '/';

Mod: '%';

LifetimeAnnotation: '\\^' ALPHANUMERIC;

Caret: '^';

Amp: '&';

VertLine: '|';

Tilde: '~';

Colon: ':';

Assign: '=';

Less: '<';

Greater: '>';

PlusAssign: '+=';

MinusAssign: '-=';

StarAssign: '*=';

DivAssign: '/=';

ModAssign: '%=';

XorAssign: '^=';

AndAssign: '&=';

OrAssign: '|=';

LeftShiftAssign: '<<=';

RightShiftAssign: '>>=';

SignedLeftShiftAssign: '<<<=';

SignedRightShiftAssign: '>>>=';

Equal: '==';

NotEqual: '!=';

Spaceship: '<=>';

LessEqual: '<=';

GreaterEqual: '>=';

PlusPlus: '++';

MinusMinus: '--';

Comma: ',';

Arrow: '->';

Exclamation: '!';

Question: '?';

DoubleQuestion: '??';

DoubleQuestionEqual: '??=';

Doublecolon: '::';

Semi: ';';

Dot: '.';

DoubleDot: '..';

DoubleDotLess: '..<';

Dollar: '$';

Ellipsis: '...';

Apostroph: '`';

AtSign: '@';

mode INTERPOLATION_STRING;

DOUBLE_CURLY_INSIDE           : '{{';
//OPEN_BRACE_INSIDE             : '{' { this.OpenBraceInside(); } -> skip, pushMode(DEFAULT_MODE);
//REGULAR_CHAR_INSIDE           :     { this.IsRegularCharInside() }? Simpleescapesequence;
//VERBATIUM_DOUBLE_GRAVE_INSIDE :     { this.IsVerbatiumDoubleGraveInside() }? '``';
//DOUBLE_QUOTE_INSIDE           : '"' { this.OnDoubleQuoteInside(); } -> popMode;
//GRAVE_INSIDE           		  : '`' { this.OnGraveInside(); } -> popMode;
//REGULAR_STRING_INSIDE         :     { this.IsRegularCharInside() }? ~('{' | '\\' | '"')+;
//GRAVE_STRING_INSIDE           :     { this.IsVerbatiumGraveInside() }? ~('{' | '`')+;
//MULTILINE_STRING_INSIDE       :     { this.IsMultilineStringInside() }? ~('{' | '\'')+;

mode INTERPOLATION_FORMAT;

DOUBLE_CURLY_CLOSE_INSIDE : '}}' -> type(FORMAT_STRING);
//CLOSE_BRACE_INSIDE        : '}'  { this.OnCloseBraceInside(); } -> skip, popMode;
FORMAT_STRING             : ~'}'+;

fragment MultilineStringItem: MultilineStringChar | StringEscape;

fragment MultilineStringChar: ~'\\';

fragment StringEscape: '\\' . | '\\\n' | '\\\r\n';

fragment Hexquad: HEXADECIMALDIGIT HEXADECIMALDIGIT HEXADECIMALDIGIT HEXADECIMALDIGIT;

fragment Universalcharactername: '\\u' Hexquad | '\\U' Hexquad Hexquad;

fragment Identifiernondigit: NONDIGIT | Universalcharactername;

fragment NONDIGIT: [a-zA-Z_];

fragment DIGIT: [0-9];

fragment NONZERODIGIT: [1-9];

fragment OCTALDIGIT: [0-7];

fragment HEXADECIMALDIGIT: [0-9a-fA-F];

fragment BINARYDIGIT: [01];

fragment ALPHANUMERIC: [0-9a-zA-Z];

DecimalLiteral: '0' | (NONZERODIGIT ('_'? DIGIT)*);

OctalLiteral: '0o' ('_'? OCTALDIGIT)*;

HexadecimalLiteral: '0x' ( '_'? HEXADECIMALDIGIT)*;

BinaryLiteral: '0b' ('_'? BINARYDIGIT)*;

Integersuffix: '_'? (Unsignedsuffix | 'i8' | 'i16' | 'i32' | 'i64' | 'u8' | 'u16' | 'u32' | 'u64' | 'iz' | 'uz' | 'i128' | 'u128' | 'big');

fragment Unsignedsuffix: 'u';

fragment Cchar: ~ ['\\\r\n] | Escapesequence | Universalcharactername;

fragment Escapesequence: Simpleescapesequence | Octalescapesequence | Hexadecimalescapesequence;

fragment Simpleescapesequence:
    '\\\''
    | '\\"'
    | '\\?'
    | '\\\\'
    | '\\a'
    | '\\b'
    | '\\f'
    | '\\n'
    | '\\r'
    | '\\' ('\r' '\n'? | '\n')
    | '\\t'
    | '\\v'
;

fragment Octalescapesequence:
    '\\' OCTALDIGIT
    | '\\' OCTALDIGIT OCTALDIGIT
    | '\\' OCTALDIGIT OCTALDIGIT OCTALDIGIT
;

fragment Hexadecimalescapesequence: '\\x' HEXADECIMALDIGIT+;

fragment Fractionalconstant: Digitsequence? '.' Digitsequence | Digitsequence '.';

fragment HexFractionalconstant: HexDigitsequence? '.' HexDigitsequence | HexDigitsequence '.';

fragment StrictFractionalconstant: Digitsequence '.' Digitsequence;

fragment StrictHexFractionalconstant: HexDigitsequence '.' HexDigitsequence;

fragment Exponentpart: '_'? 'e' SIGN? Digitsequence;

fragment HexExponentpart: '_'? 'p' SIGN? Digitsequence;

fragment SIGN: [+-];

fragment Digitsequence: DIGIT ('_'? DIGIT)*;

fragment HexDigitsequence: HEXADECIMALDIGIT ('_'? HEXADECIMALDIGIT)*;

fragment Floatingsuffix: '_'? ('f' | 'f32' | 'f64' | 'fext');

fragment Stringsuffix: [s];

fragment Encodingprefix: 'u8' | 'U';

fragment Gchar: ~ [`\r\n] | '``';

fragment Schar: ~ ["\\\r\n] | Escapesequence | Universalcharactername;

fragment Rawstring: 'R"' ( '\\' ["()] | ~[\r\n (])*? '(' ~[)]*? ')' ( '\\' ["()] | ~[\r\n "])*? '"';