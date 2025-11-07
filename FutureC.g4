grammar FutureC;
prog : statement+ ;
statement : variableDefinition | variableDeclaration | assignment | ';' ;
assignment : expression '=' expression ';';
expression : expression '+' expression | literal | AssignmentId;
literal : i128Literal | u128Literal | ulongLiteral | longLiteral | uintLiteral | byteLiteral | 
	ubyteLiteral | shortLiteral | ushortLiteral | intLiteral | floatLiteral | doubleLiteral | charLiteral | stringLiteral;
i128Literal : intLiteral 'i128' ;
u128Literal : intLiteral 'u128' ;
ulongLiteral : (intLiteral 'UL') | (intLiteral 'u64') ;
longLiteral : (intLiteral 'L') | (intLiteral 'i64') ;
uintLiteral : (intLiteral 'U') | (intLiteral 'u32') ;
byteLiteral : intLiteral 'i8' ;
ubyteLiteral : intLiteral 'u8' ;
shortLiteral : intLiteral 'i16' ;
ushortLiteral : intLiteral 'u16' ;
intLiteral : DecNumber | OctNumber | BinNumber | HexNumber ;
floatLiteral : doubleLiteral 'f' ;
doubleLiteral : FloatNumber0 | FloatNumber1 ;
charLiteral : Character | u8CharLiteral | u32CharLiteral;
u8CharLiteral : 'u8' Character ;
u32CharLiteral : 'u32' Character ;
stringLiteral : String | u8StringLiteral | u32StringLiteral;
u8StringLiteral : 'u8' String ;
u32StringLiteral : 'u32' String ;
variableDeclaration : Declarator ';';
variableDefinition : (Declarator '=' expression ';') |
	(Declarator '{' expression '};');
AssignmentId : Identifier;
Declarator : Type ' ' Identifier;
Type : IdStart DeclPart* ;
Identifier : [a-zA-Z_$][a-zA-Z0-9_$]* ;
fragment IdStart : [a-zA-Z_$] ;
fragment IdPart : [a-zA-Z0-9_$] ;
fragment DeclPart : [a-zA-Z0-9_:] ;
DecNumber : [-]*[1-9][0-9_]* | '0' ;
OctNumber : '0'[0-7_]* ;
BinNumber : '0b'[0-1_]* ;
HexNumber : '0x'[a-fA-F0-9_]+ ;
FloatNumber0 : [-]*'0.'[0-9]+ ;
FloatNumber1 : [-]*[1-9]+'.'[0-9]+ | [-]*[1-9]+'.'[0-9]+[e][-]*[1-9][0-9]* ;
Character : '\'' (.|'\\'.?) '\'' ;
String : '"' (ESC_SEQ|~["\\])* '"'[s]* ;
ESC_SEQ
    : '\\' ( '"' | '\\' | 'n' | 't' | 'r' | 'b' | 'f' )
    ;
WS : [ \t\r\n]+ -> skip ;
Auto : 'auto ' | 'var ' ;