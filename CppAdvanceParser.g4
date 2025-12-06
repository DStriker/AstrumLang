parser grammar CppAdvanceParser;
options { tokenVocab=CppAdvanceLexer; }

program
    : declarationSeq EOF
    ;

stat: 
	  declarationStatement
	| expressionStatement
	| labeledStatement
	| versionSelectionStatement
	| selectionStatement
	| iterationStatement
	| jumpStatement
	| tryBlock
	| Unsafe? compoundStatement
    ;

declarationSeq: declaration+;

declaration:
	  accessSpecifier? Unsafe? blockDeclaration
	| accessSpecifier? structDefinition
	| accessSpecifier? classDefinition
	| symbolSpecifierSeq declarationCompoundStatement
	| externVariableDeclaration 
	| versionDefinition
	| versionConditionalDeclaration
	| accessSpecifier? functionDefinition
	| accessSpecifier? functionTemplateDeclaration
	| externFunctionDeclaration
	;

symbolSpecifierSeq: accessSpecifier | Unsafe | accessSpecifier Unsafe;

versionDefinition: accessSpecifier? Version Identifier (Assign Default? (IntegerLiteral | BooleanLiteral))? Semi;

externVariableDeclaration: Extern Identifier Colon theTypeId Semi;

blockDeclaration:
	  simpleDeclaration
	| simpleMultiDeclaration
	| deconstructionDeclaration
	| refDeclaration
	| multiDeclaration
	| constantDeclaration
	| forwardVarDeclaration
	| aliasDeclaration
	;

memberBlockDeclaration:
	  simpleDeclaration
	| simpleMultiDeclaration
	| memberRefDeclaration
	| constantDeclaration
	| aliasDeclaration
	;

labeledStatement: Identifier Colon (iterationStatement | selectionStatement | compoundStatement);

declarationStatement: blockDeclaration | structDefinition | classDefinition | externVariableDeclaration | externFunctionDeclaration;

expressionStatement: expr? Semi;

declarationCompoundStatement: LeftBrace declaration+ RightBrace;

versionConditionalDeclaration: If (Version LeftParen condition RightParen | not? Debug (LeftParen Identifier RightParen)?) versionIfDeclaration (Else versionElseDeclaration)?;

versionIfDeclaration: declaration | declarationCompoundStatement;

versionElseDeclaration: declaration | declarationCompoundStatement;

compoundStatement: LeftBrace (stat+)? RightBrace;

structDefinition: structHead LeftBrace structMemberSpecification? RightBrace;

structHead: Unsafe? Ref? Struct templateParams? className baseClause?;

structMemberSpecification: structMemberDeclaration+;

memberDeclarationCompoundStatement: LeftBrace structMemberDeclaration+ RightBrace;

memberVersionConditionalDeclaration: If (Version LeftParen condition RightParen | not? Debug (LeftParen Identifier RightParen)?) memberVersionIfDeclaration (Else memberVersionElseDeclaration)?;

memberVersionIfDeclaration: structMemberDeclaration | memberDeclarationCompoundStatement;

memberVersionElseDeclaration: structMemberDeclaration | memberDeclarationCompoundStatement;

structMemberDeclaration: 
	  (accessSpecifier | protectedInternal)? memberBlockDeclaration
	| accessSpecifier? structDefinition
	| accessSpecifier? classDefinition
	| symbolSpecifierSeq memberDeclarationCompoundStatement
	| memberVersionConditionalDeclaration
	| (accessSpecifier | protectedInternal)? functionDefinition
	| (accessSpecifier | protectedInternal)? constructor
	| (accessSpecifier | protectedInternal)? conversionFunction
	| (accessSpecifier | protectedInternal)? indexer
	| property
	| accessSpecifier? functionTemplateDeclaration
	| abstractMethodDeclaration
	| abstractProperty
	| friendDeclaration
	| destructor
	;

classDefinition: classHead LeftBrace structMemberSpecification? RightBrace;

classHead: Unsafe? (Abstract | Final | Static)? Class templateParams? className baseClause?;

baseClause: Colon baseSpecifierList;

baseSpecifierList: baseSpecifier (Comma baseSpecifier)*;

baseSpecifier: nestedNameSpecifier? className;

property: accessSpecifier? Unsafe? (Static | Virtual | Override | Final)? Identifier Colon Const? Ref? theTypeId (functionBody | shortFunctionBody | (Assign initializerClause)? propertyBody);

propertyBody: LeftBrace (propertyGetter | propertySetter | propertyGetter propertySetter) RightBrace;

abstractProperty: accessSpecifier? Abstract Identifier Colon Const? Ref? theTypeId propertyBody;

abstractPropertyBody: LeftBrace (abstractPropertyGetter | abstractPropertySetter | abstractPropertyGetter abstractPropertySetter) RightBrace;

propertyGetter: (accessSpecifier | protectedInternal)? Get (functionBody | shortFunctionBody | Semi);

propertySetter: (accessSpecifier | protectedInternal)? Set (functionBody | shortFunctionBody | Semi);

abstractPropertyGetter: (accessSpecifier | protectedInternal)? Get Semi;

abstractPropertySetter: (accessSpecifier | protectedInternal)? Set Semi;

externFunctionDeclaration: Extern Unsafe? Identifier Colon functionParams returnType LifetimeAnnotation? exceptionSpecification? Semi;

functionTemplateDeclaration: functionSpecifier* Identifier Colon templateParams functionParams returnType? LifetimeAnnotation? exceptionSpecification? Semi;

functionDefinition: functionSpecifier* (Identifier | simpleTemplateId | operatorFunctionId) Colon templateParams? functionParams returnType? LifetimeAnnotation? exceptionSpecification? (functionBody | shortFunctionBody);

abstractMethodDeclaration: (accessSpecifier | protectedInternal)? Abstract Mutable? (Identifier | operatorFunctionId) Colon functionParams returnType? LifetimeAnnotation? exceptionSpecification? Semi;

constructor: Inline? Unsafe? implicitSpecification? This templateParams? functionParams exceptionSpecification? (constructorBody | delegatingConstructorBody | ((Assign | Equal) Default Semi));

constructorBody: (Assign | Equal)? LeftBrace delegatingConstructorStatement? memberInitializationList? stat* RightBrace;

memberInitializationList: memberInitializationStatement+;

delegatingConstructorBody: (Assign | Equal) Greater (delegatingConstructorStatement | memberInitializationStatement);

delegatingConstructorStatement: (This | Super) LeftParen expressionList? RightParen Semi;

memberInitializationStatement: (This Dot)? Identifier Assign initializerClause Semi;

destructor: Inline? Tilde This exceptionSpecification? (functionBody | shortFunctionBody);

conversionFunction: functionSpecifier* implicitSpecification? templateParams? conversionFunctionId exceptionSpecification? (functionBody | shortFunctionBody);

indexer: functionSpecifier* templateParams? This LeftBracket paramDeclClause RightBracket returnType exceptionSpecification? (functionBody | shortFunctionBody | indexerProperty);

indexerProperty: LeftBrace indexerGetter indexerSetter RightBrace;

indexerGetter: (accessSpecifier | protectedInternal)? Get (functionBody | shortFunctionBody);

indexerSetter: (accessSpecifier | protectedInternal)? Set (functionBody | shortFunctionBody);

functionSpecifier: Inline | Unsafe | Consteval | Mutable | Static | Virtual | Override | Final;

implicitSpecification: Implicit (LeftParen constantExpression RightParen)?;

templateParams: Less templateParamDeclaration (Comma templateParamDeclaration)* Greater;

templateParamDeclaration: Identifier templateParams? (Ellipsis | Colon (templateTypename Ellipsis? | templateTypename? Assign (theTypeId | conditionalExpression)))?;

templateTypename: Type | theTypeId;

functionParams: LeftParen paramDeclClause? RightParen;

paramDeclClause: paramDeclList Ellipsis?;

paramDeclList: paramDeclaration (Comma paramDeclaration)*;

paramDeclaration: paramSpecification? Identifier (Colon (theTypeId LifetimeAnnotation?)? (Assign initializerClause)?)?;

paramSpecification: Move | Forward | In | Inout | Out | Ref | In Ref;

returnType: Arrow (Const? Ref? theTypeId | Identifier Colon theTypeId | Const? Ref | Forward);

functionBody: (Assign | Equal)? compoundStatement;

shortFunctionBody: (Assign | Equal) Greater expressionStatement;

exceptionSpecification: Noexcept (LeftParen constantExpression RightParen)?;

declSpecifier: Static | Thread_local | Mutable | Const | Volatile | Let | Unowned | Weak;

declSpecifierSeq: declSpecifier+?;

identifierSeq: Identifier (Comma Identifier)*?;

friendDeclaration: 
	  Friend Identifier templateParams? Semi
	| Friend Identifier Colon functionParams returnType LifetimeAnnotation? exceptionSpecification? Semi
	| Friend functionDefinition
	;

selectionStatement: 
	  Static? If LeftParen condition RightParen stat (Else elseBranch)?
	| Static? If (not? Consteval | condition) compoundStatement (Else elseBranch)?;

condition: simpleDeclaration? logicalOrExpression | declarator ;

elseBranch: stat;

declarator: (Const | Let)? identifierSeq Colon theTypeId? Assign initializerClause;

iterationStatement:
	  While LeftParen whileCondition RightParen stat
	| While whileCondition compoundStatement
	| Do stat While doWhileCondition Semi
	| For LeftParen forInitStatement whileCondition? Semi expressionSeq? RightParen stat
	| For forInitStatement whileCondition? Semi expressionSeq? compoundStatement
	| For LeftParen forInitStatement? forRangeDeclaration In forRangeInitializer RightParen stat
	| For forInitStatement? forRangeDeclaration In forRangeInitializer compoundStatement
	| For compoundStatement;

whileCondition: logicalOrExpression | declarator;

doWhileCondition: logicalOrExpression;

forInitStatement: (logicalOrExpression Semi) | blockDeclaration | Semi;

forRangeDeclaration: (Const | Let)? Amp? identifierSeq;

forRangeInitializer: logicalOrExpression | bracedInitList;

expressionSeq: expr (Comma expr)?;

jumpStatement: (Break Identifier? | Continue Identifier? | Return (expr | bracedInitList)?) Semi;

simpleDeclaration: declSpecifierSeq? Identifier Colon 
	(theTypeId (Assign initializerClause)? 
	| theTypeId Assign Void 
	| theTypeId LeftParen initializerList? RightParen
	| (Star Const?)? Assign initializerClause)
	Semi;

deconstructionDeclaration: (Const | Let)? identifierSeq Colon Assign initializerClause Semi;

refDeclaration: (Const | Let)? Amp identifierSeq Colon (typeSpecifierSeq | Assign initializerClause) Semi;

memberRefDeclaration: (Const | Let)? Amp Identifier Colon theTypeId Semi;

simpleMultiDeclaration: declSpecifierSeq? Identifier (Comma Identifier)+ Colon theTypeId Semi;

multiDeclaration: declSpecifierSeq? (Identifier Colon Assign)+ initializerClause Semi;

constantDeclaration: Const? Identifier Colon (templateParams? theTypeId)? Equal initializerClause Semi;

forwardVarDeclaration: Forward Identifier Colon Assign initializerClause Semi;

aliasDeclaration: Type Identifier templateParams? Assign theTypeId Semi;

versionSelectionStatement: If Version LeftParen condition RightParen versionSelectionStatementBlock (Else versionSelectionStatementBlock)?
	| If not? Debug (LeftParen Identifier RightParen)? scopeSafeCompoundStatement (Else versionSelectionStatementBlock)?;

versionSelectionStatementBlock: scopeSafeCompoundStatement | stat;

scopeSafeCompoundStatement: LeftBrace stat+? RightBrace;

expr: assignmentExpression;

multiplicativeExpression: unaryExpression multiplicativeBranch*;

multiplicativeBranch: (Star | Div | Mod) unaryExpression;

additiveExpression: multiplicativeExpression additiveBranch*;

additiveBranch: (Plus | Minus) multiplicativeExpression;

shiftExpression: additiveExpression shiftBranch*;

shiftBranch: shiftOperator additiveExpression;

threeWayComparisonExpression: shiftExpression (Spaceship shiftExpression)?;

relationalExpression: threeWayComparisonExpression relationalBranch?;

relationalBranch: (Less | Greater | LessEqual | GreaterEqual) threeWayComparisonExpression;

equalityExpression: relationalExpression equalityBranch*;

equalityBranch: (Equal | NotEqual) relationalExpression;

andExpression: equalityExpression (Amp equalityExpression)*;

exclusiveOrExpression: andExpression (Caret andExpression)*;

inclusiveOrExpression: exclusiveOrExpression (VertLine exclusiveOrExpression)*;

logicalAndExpression: inclusiveOrExpression (And inclusiveOrExpression)*;

logicalOrExpression: logicalAndExpression (Or logicalAndExpression)*;

nullCoalescingExpression: logicalOrExpression (DoubleQuestion nullCoalescingBranch)*;

nullCoalescingBranch: logicalOrExpression | throwExpression;

conditionalExpression: nullCoalescingExpression (Question expr? Colon assignmentExpression)?;

constantExpression: conditionalExpression;

assignmentExpression: logicalOrExpression assignmentOperator initializerClause | conditionalExpression | throwExpression;

initializerClause: assignmentExpression | bracedInitList;

bracedInitList: LeftBrace (initializerList Comma?)? RightBrace;

initializerList: initializerPart (Comma initializerPart)*;

initializerPart: initializerClause Ellipsis?;

expressionList: expressionListPart (Comma expressionListPart)*;

expressionListPart: (Identifier Assign)? (conditionalExpression | bracedInitList) Ellipsis? | Out Identifier Colon theTypeId;

assignmentOperator:
	  Assign
	| PlusAssign
	| MinusAssign
	| StarAssign
	| DivAssign
	| ModAssign
	| RightShiftAssign
	| LeftShiftAssign
	| AndAssign
	| XorAssign
	| OrAssign
	| DoubleQuestionAssign
	;

shiftOperator:
	  Greater Greater
	| Less Less
	;

tryBlock: Try compoundStatement exceptionHandler+;

exceptionHandler: Catch exceptionDeclaration compoundStatement;

exceptionDeclaration: Identifier (Colon simpleTypeSpecifier (Or simpleTypeSpecifier)*)? | Ellipsis;

throwExpression: Throw assignmentExpression?;

simpleTypeSpecifier:
	  nestedNameSpecifier? typename
	| I8
	| U8
	| I16
	| U16
	| I32
	| U32
	| I64
	| U64
	| I128
	| U128
	| Isize
	| Usize
	| F32
	| F64
	| Fext
	| Char
	| Byte
	| Rune
	| Bool
	| Str
	| Self
	| Object
	| decltypeSpecifier
	| LeftParen theTypeId (Comma theTypeId)+ RightParen
	| LeftParen namedTupleField (Comma namedTupleField)+ RightParen
	;

namedTupleField: Identifier Colon theTypeId;

nestedNameSpecifier: (typename | namespaceName | decltypeSpecifier)? Dot | nestedNameSpecifier (Identifier | simpleTemplateId) Dot;

namespaceName: Identifier;

templateName: Identifier;

simpleTemplateId: templateName Less templateArgumentList? Greater;

operatorTemplateId: operatorFunctionId Less templateArgumentList? Greater;

templateId: simpleTemplateId | operatorTemplateId;

templateArgumentList: templateArgument (Comma templateArgument)*;

templateArgument: (theTypeId | conditionalExpression | idExpression) Ellipsis?;

idExpression: unqualifiedId;

qualifiedId: nestedNameSpecifier unqualifiedId;

unqualifiedId: 
	  Identifier
	| operatorFunctionId
	| conversionFunctionId
	| Tilde (className | decltypeSpecifier)
	| templateId;

theTypeId: typeSpecifierSeq Question? typePostfix?;

typePostfix: arrayDeclarator+;

arrayDeclarator: LeftBracket constantExpression? RightBracket Question?;

pointerOperator
    : Star | DoubleStar
    ;
    
pointerOperatorSeq: pointerOperator+;

typeSpecifierSeq: (pointerOperator+ cvQualifier?)? simpleTypeSpecifier | pointerOperator+ cvQualifier? Void;

typeSpecifier: trailingTypeSpecifier ;

trailingTypeSpecifier: simpleTypeSpecifier | cvQualifier;

typeNameSpecifier: Type nestedNameSpecifier (Identifier | simpleTemplateId);

cvQualifierSeq: cvQualifier+;

cvQualifier: Const | Volatile;

typename: 
	  className
	| enumName
	| simpleTemplateId
	;

className: Identifier | simpleTemplateId;

decltypeSpecifier: Decltype LeftParen expr RightParen;

enumName: Identifier;

accessSpecifier: Private | Protected | Public | Internal;

protectedInternal: Protected Internal;

operatorFunctionId: Operator_ operator;

conversionFunctionId: Operator_ (Ref | Const Ref)? theTypeId;

unaryExpression:
	  postfixExpression
	| (unaryPrefixOperator | refCaptureOperator | Out | PlusPlus | MinusMinus | Sizeof) unaryExpression
	| Sizeof (LeftParen theTypeId RightParen | Ellipsis LeftParen Identifier RightParen)
	| Alignof LeftParen theTypeId RightParen
	;

newExpression: New theTypeId newInitializer?;

newInitializer: LeftParen expressionList? RightParen | bracedInitList;

postfixExpression:
	  primaryExpression
	| newExpression
	| postfixExpression LeftBracket expressionList RightBracket
	| postfixExpression LeftParen expressionList? RightParen
	| (simpleTypeSpecifier) LeftParen expressionList? RightParen
	| Move postfixExpression
	| Forward postfixExpression
	| postfixExpression Dot IntegerLiteral
	| postfixExpression Question? Dot Greater? idExpression
	| postfixExpression (PlusPlus | MinusMinus | unaryPostfixOperator)
	;

tupleExpression:
	LeftParen conditionalExpression (Comma conditionalExpression)+ RightParen
	;

primaryExpression:
	  literal
	| This
	| Super
	| Field
	| LeftParen expr RightParen
	| LeftParen theTypeId RightParen Dot Identifier
	| tupleExpression
	| idExpression
	;

unaryPrefixOperator:
	  Plus
	| Minus
	| Tilde
	| not
	;

refCaptureOperator: Amp | Ref;

unaryPostfixOperator:
	  (Star | DoubleStar)+
	| Amp
	| Exclamation
	;

not: Exclamation | Not;

operator:
	  New
	| Delete
	| Plus
	| Minus
	| Star
	| Div
	| Mod
	| Caret
	| Amp
	| Exclamation
	| VertLine
	| Tilde
	| Greater
	| Less
	| GreaterEqual
	| Assign
	| PlusAssign
	| MinusAssign
	| StarAssign
	| ModAssign
	| XorAssign
	| AndAssign
	| OrAssign
	| Less Less
	| Greater Greater
	| RightShiftAssign
	| LeftShiftAssign
	| Equal
	| NotEqual
	| LessEqual
	| Spaceship
	| PlusPlus
	| MinusMinus
	| LeftParen RightParen
	;

literal:
	  IntegerLiteral
	| FloatingLiteral
	| DecimalTypeLiteral
	| BooleanLiteral
	| CharacterLiteral
	| StringLiteral
	| MultilineStringLiteral 
	| Null
	;