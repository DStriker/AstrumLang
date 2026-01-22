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
	| functionDefinition
	| Unsafe? compoundStatement
	| inlineCppStatement
    ;

declarationSeq: declaration+;

declaration:
	  attributeSpecifierSeq? accessSpecifier? Unsafe? blockDeclaration
	| attributeSpecifierSeq? accessSpecifier? structDefinition
	| attributeSpecifierSeq? accessSpecifier? classDefinition
	| attributeSpecifierSeq? accessSpecifier? interfaceDefinition
	| accessSpecifier? extensionDefinition
	| attributeSpecifierSeq? accessSpecifier? enumDefinition
	| attributeSpecifierSeq? accessSpecifier? enumClassDefinition
	| attributeSpecifierSeq? accessSpecifier? unionDefinition
	| symbolSpecifierSeq declarationCompoundStatement
	| attributeSpecifierSeq? externVariableDeclaration 
	| versionDefinition
	| versionConditionalDeclaration
	| attributeSpecifierSeq? accessSpecifier? functionDefinition
	| accessSpecifier? functionTemplateDeclaration
	| attributeSpecifierSeq? externFunctionDeclaration
	| templateDeductionGuide
	| unitTestDeclaration
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
	| assertDeclaration
	;

memberBlockDeclaration:
	  simpleDeclaration
	| simpleMultiDeclaration
	| memberRefDeclaration
	| constantDeclaration
	| aliasDeclaration
	| assertDeclaration
	;

assertDeclaration: 
	  Assert LeftParen conditionalExpression Comma conditionalExpression RightParen Semi
	| Assert conditionalExpression Semi
	| Static? Assert LeftParen constantExpression Comma StringLiteral RightParen Semi
	;

unitTestDeclaration: Test StringLiteral? compoundStatement;

labeledStatement: Identifier Colon (iterationStatement | selectionStatement | compoundStatement);

declarationStatement: blockDeclaration | structDefinition | externVariableDeclaration | externFunctionDeclaration;

expressionStatement: expr? Semi;

declarationCompoundStatement: LeftBrace declaration+ RightBrace;

versionConditionalDeclaration: If (Version LeftParen condition RightParen | not? Debug (LeftParen Identifier RightParen)?) versionIfDeclaration (Else versionElseDeclaration)?;

versionIfDeclaration: declaration | declarationCompoundStatement;

versionElseDeclaration: declaration | declarationCompoundStatement;

compoundStatement: LeftBrace (stat+)? RightBrace;

structDefinition: structHead LeftBrace structMemberSpecification? RightBrace;

structHead: Unsafe? (Ref | Union)? Struct templateParams? className baseClause? constraintClause?;

structMemberSpecification: structMemberDeclaration+;

memberDeclarationCompoundStatement: LeftBrace structMemberDeclaration+ RightBrace;

memberVersionConditionalDeclaration: If (Version LeftParen condition RightParen | not? Debug (LeftParen Identifier RightParen)?) memberVersionIfDeclaration (Else memberVersionElseDeclaration)?;

memberVersionIfDeclaration: structMemberDeclaration | memberDeclarationCompoundStatement;

memberVersionElseDeclaration: structMemberDeclaration | memberDeclarationCompoundStatement;

structMemberDeclaration: 
	  attributeSpecifierSeq? (accessSpecifier | protectedInternal)? memberBlockDeclaration
	| attributeSpecifierSeq? accessSpecifier? structDefinition
	| attributeSpecifierSeq? accessSpecifier? classDefinition
	| attributeSpecifierSeq? accessSpecifier? enumDefinition
	| attributeSpecifierSeq? accessSpecifier? enumClassDefinition
	| attributeSpecifierSeq? accessSpecifier? unionDefinition
	| symbolSpecifierSeq memberDeclarationCompoundStatement
	| memberVersionConditionalDeclaration
	| attributeSpecifierSeq? (accessSpecifier | protectedInternal)? functionDefinition
	| attributeSpecifierSeq? (accessSpecifier | protectedInternal)? constructor
	| attributeSpecifierSeq? (accessSpecifier | protectedInternal)? conversionFunction
	| attributeSpecifierSeq? (accessSpecifier | protectedInternal)? indexer
	| property
	| accessSpecifier? functionTemplateDeclaration
	| abstractMethodDeclaration
	| abstractProperty
	| friendDeclaration
	| externMethodDeclaration
	| destructor
	;

classDefinition: classHead LeftBrace structMemberSpecification? RightBrace;

classHead: Unsafe? (Abstract | Final | Static)? Class templateParams? className baseClause? constraintClause?;

interfaceDefinition: interfaceHead LeftBrace interfaceMemberSpecification? RightBrace;

interfaceHead: Unsafe? Interface Identifier templateParams? baseClause?  constraintClause?;

interfaceMemberSpecification: interfaceMemberDeclaration+;

interfaceMemberDeclaration: 
	  attributeSpecifierSeq? functionDefinition 
	| interfaceMethodDeclaration
	| interfaceIndexer
	| interfaceProperty
	| constantDeclaration
	| aliasDeclaration
	| associatedTypeDeclaration
	;

enumDefinition: enumHead LeftBrace enumList enumMemberSpecification? RightBrace;

enumHead: Enum Identifier enumBase?;

enumBase: Colon simpleTypeSpecifier;

enumList: enumeratorDefinition (Comma enumeratorDefinition)*;

enumeratorDefinition: attributeSpecifierSeq? Identifier (Assign constantExpression)?;

enumMemberSpecification: Semi enumMemberDeclaration+;

enumMemberDeclaration: 
	  attributeSpecifierSeq? accessSpecifier? functionDefinition
	| property
	| friendDeclaration
	;

enumClassDefinition: enumClassHead LeftBrace enumClassList enumClassMemberSpecification? RightBrace;

enumClassHead: Unsafe? Enum Class Identifier baseClause?;

enumClassList: classEnumeratorDefinition (Comma classEnumeratorDefinition)*;

classEnumeratorDefinition: attributeSpecifierSeq? Identifier (LeftParen expressionList RightParen)?;

enumClassMemberSpecification: Semi structMemberDeclaration+;

unionDefinition: unionHead LeftBrace unionList unionMemberSpecification? RightBrace;

unionHead: Unsafe? Union templateParams? Identifier baseClause? constraintClause?;

unionList: unionEnumerator (Comma unionEnumerator)*;

unionEnumerator: attributeSpecifierSeq? Identifier (LeftParen unionEnumeratorClause RightParen)?;

unionEnumeratorClause: theTypeId (Comma theTypeId)* | Identifier Colon theTypeId (Comma Identifier Colon theTypeId)*;

unionMemberSpecification: Semi enumMemberDeclaration+;

extensionDefinition: extensionHead LeftBrace extensionMemberSpecification? RightBrace;

extensionHead: Unsafe? Extension (templateParams (theTypeId baseClause?)? constraintClause?
	| templateParams? theTypeId baseClause? constraintClause?);

extensionMemberSpecification: extensionMemberDeclaration+;

extensionMemberDeclaration:
	  attributeSpecifierSeq? functionDefinition
	| attributeSpecifierSeq? constructor
	| attributeSpecifierSeq? indexer
	| property
	;

baseClause: Colon baseSpecifierList;

baseSpecifierList: baseSpecifier (Comma baseSpecifier)*;

baseSpecifier: nestedNameSpecifier? className;

property: attributeSpecifierSeq? accessSpecifier? Unsafe? (Static | Virtual | Override | Final)? Identifier Colon Const? Ref? theTypeId (functionBody | shortFunctionBody | (Assign initializerClause)? propertyBody);

propertyBody: LeftBrace (propertyGetter | propertySetter | propertyGetter propertySetter) RightBrace;

abstractProperty: attributeSpecifierSeq? accessSpecifier? Abstract Identifier Colon Const? Ref? theTypeId propertyBody;

interfaceProperty: attributeSpecifierSeq? Identifier Colon Const? Ref? theTypeId propertyBody;

propertyGetter: (accessSpecifier | protectedInternal)? Get (functionBody | shortFunctionBody | Semi);

propertySetter: (accessSpecifier | protectedInternal)? Set (functionBody | shortFunctionBody | Semi);

abstractPropertyGetter: (accessSpecifier | protectedInternal)? Get Semi;

abstractPropertySetter: (accessSpecifier | protectedInternal)? Set Semi;

externFunctionDeclaration: Extern Unsafe? Identifier Colon functionParams returnType LifetimeAnnotation? exceptionSpecification? Semi;

functionTemplateDeclaration: functionSpecifier* Identifier Colon templateParams functionParams returnType? LifetimeAnnotation? exceptionSpecification? Semi;

functionDefinition: functionSpecifier* (Identifier | simpleTemplateId | operatorFunctionId) Colon templateParams? functionParams returnType? LifetimeAnnotation? exceptionSpecification? constraintClause? (functionBody | shortFunctionBody);

abstractMethodDeclaration: attributeSpecifierSeq? (accessSpecifier | protectedInternal)? Abstract Mutable? (Identifier | operatorFunctionId) Colon functionParams returnType? LifetimeAnnotation? exceptionSpecification? Semi;

interfaceMethodDeclaration: attributeSpecifierSeq? (Identifier | operatorFunctionId) Colon functionParams returnType? LifetimeAnnotation? exceptionSpecification? Semi;

constructor: Inline? Unsafe? implicitSpecification? This templateParams? functionParams exceptionSpecification? constraintClause? (constructorBody | delegatingConstructorBody | ((Assign | Equal) Default Semi));

constructorBody: (Assign | Equal)? LeftBrace delegatingConstructorStatement? memberInitializationList? stat* RightBrace;

memberInitializationList: memberInitializationStatement+;

delegatingConstructorBody: (AssignArrow | EqualArrow) (delegatingConstructorStatement | memberInitializationStatement);

delegatingConstructorStatement: (This | Super) LeftParen expressionList? RightParen Semi;

memberInitializationStatement: (This Dot)? Identifier Assign initializerClause Semi;

destructor: Inline? Tilde This exceptionSpecification? (functionBody | shortFunctionBody);

conversionFunction: functionSpecifier* implicitSpecification? templateParams? conversionFunctionId exceptionSpecification? constraintClause? (functionBody | shortFunctionBody);

indexer: functionSpecifier* templateParams? This LeftBracket paramDeclClause RightBracket returnType exceptionSpecification? (functionBody | shortFunctionBody | indexerProperty);

indexerProperty: LeftBrace indexerGetter indexerSetter RightBrace;

indexerGetter: (accessSpecifier | protectedInternal)? Get (functionBody | shortFunctionBody);

indexerSetter: (accessSpecifier | protectedInternal)? Set (functionBody | shortFunctionBody);

interfaceIndexer: attributeSpecifierSeq? This LeftBracket paramDeclClause RightBracket returnType exceptionSpecification? LeftBrace Get Semi (Set Semi)? RightBrace;

associatedTypeDeclaration: Type Identifier Semi;

functionSpecifier: Inline | Unsafe | Consteval | Mutable | Static | Virtual | Override | Final;

implicitSpecification: Implicit (LeftParen constantExpression RightParen)?;

templateParams: Less templateParamDeclaration (Comma templateParamDeclaration)* Greater;

templateParamDeclaration: (In | Out)? Identifier templateParams? (Ellipsis | Colon (templateTypename Ellipsis? | templateTypename? Assign (theTypeId | conditionalExpression)))?;

templateTypename: Type | theTypeId;

functionParams: LeftParen paramDeclClause? RightParen;

paramDeclClause: paramDeclList Ellipsis?;

paramDeclList: paramDeclaration (Comma paramDeclaration)*;

paramDeclaration: attributeSpecifierSeq? paramSpecification? Identifier (Colon (theTypeId LifetimeAnnotation?)? (Assign initializerClause)?)?;

paramSpecification: Move | Forward | In | Inout | Out | Ref | In Ref;

returnType: Arrow (Const? Ref? theTypeId | Identifier Colon theTypeId | Const? Ref | Forward);

functionBody: (Assign | Equal)? compoundStatement;

shortFunctionBody: (AssignArrow | EqualArrow) expressionStatement;

exceptionSpecification: Noexcept (LeftParen constantExpression RightParen)?;

declSpecifier: Static | Thread_local | Mutable | Const | Volatile | Let | Unowned | Weak;

declSpecifierSeq: declSpecifier+?;

identifierSeq: Identifier (Comma Identifier)*?;

friendDeclaration: 
	  Friend Identifier templateParams? Semi
	| Friend Identifier Colon functionParams returnType LifetimeAnnotation? exceptionSpecification? Semi
	| Friend functionDefinition
	;

externMethodDeclaration: accessSpecifier? Extern Identifier Colon functionParams returnType LifetimeAnnotation? exceptionSpecification? Semi;

attributeSpecifierSeq: attributeSpecifier+;

attributeSpecifier: AtSign nestedNameSpecifier? Identifier attributeArgumentClause?;

attributeArgumentClause: LeftParen expressionList RightParen;

selectionStatement: 
	  attributeSpecifierSeq? Static? If LeftParen condition RightParen stat (Else elseBranch)?
	| attributeSpecifierSeq? Static? If (not? Consteval | condition) compoundStatement (Else elseBranch)?
	| Switch threeWayComparisonExpression LeftBrace switchStatementBranch+ RightBrace
	;

condition: simpleDeclaration? logicalOrExpression | declarator ;

elseBranch: stat;

switchStatementBranch: attributeSpecifierSeq? patternList AssignArrow stat;

declarator: (Const | Let)? identifierSeq Colon theTypeId? Assign initializerClause;

inlineCppStatement: Unsafe? Cpp StringLiteral Semi;

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

rangeExpression: 
	  unaryExpression
	| rangeExpressionStart? (DoubleDot | DoubleDotEqual) rangeExpressionEnd?
	;

rangeExpressionStart: unaryExpression;

rangeExpressionEnd: unaryExpression;

switchExpression:
	  rangeExpression
	| Switch threeWayComparisonExpression (Arrow theTypeId)? LeftBrace switchExpressionBranch (Comma switchExpressionBranch)+ Comma? RightBrace
	;

switchExpressionBranch: patternList AssignArrow expr;

powerExpression: 
	  switchExpression
	| powerExpression (DoubleStar | DoubleCaret | Op10) powerExpression
	;

multiplicativeExpression: 
	  powerExpression
	| multiplicativeExpression (Star | Div | Mod | Op9) multiplicativeExpression
	;

additiveExpression: 
	  multiplicativeExpression
	| additiveExpression (Plus | Minus | Tilde | Op8) additiveExpression
	;

shiftExpression: 
	  additiveExpression
	| shiftExpression shiftOperator shiftExpression
	;

threeWayComparisonExpression: shiftExpression (Spaceship shiftExpression)?;

relationalExpression: 
	  threeWayComparisonExpression (As Question? theTypeId | Is patternList)?
	| Type theTypeId Is typeTrait
	| relationalExpression (Less | Greater | LessEqual | GreaterEqual | Op6) relationalExpression
	;

equalityExpression: 
	  relationalExpression
	| Type theTypeId (Equal | NotEqual) theTypeId
	| equalityExpression (IdentityEqual | NotIdentityEqual | Equal | NotEqual | Op5) equalityExpression
	;

andExpression: 
	  equalityExpression
	| andExpression (Amp | Op4) andExpression
	;

exclusiveOrExpression: 
	  andExpression
	| exclusiveOrExpression (Caret | Op3) exclusiveOrExpression
	;

inclusiveOrExpression: 
	  exclusiveOrExpression
	| inclusiveOrExpression (VertLine | Op2) inclusiveOrExpression
	;

logicalAndExpression: inclusiveOrExpression (And inclusiveOrExpression)*;

logicalOrExpression: logicalAndExpression (Or logicalAndExpression)*;

nullCoalescingExpression: logicalOrExpression (DoubleQuestion nullCoalescingBranch)*;

nullCoalescingBranch: logicalOrExpression | throwExpression;

conditionalExpression: nullCoalescingExpression (Question expr? Colon assignmentExpression)?;

constantExpression: conditionalExpression;

assignmentExpression: logicalOrExpression assignmentOperator initializerClause | conditionalExpression | throwExpression;

initializerClause: assignmentExpression Ellipsis? | bracedInitList;

bracedInitList: LeftBrace (initializerList Comma?)? RightBrace;

initializerList: initializerPart (Comma initializerPart)*;

initializerPart: initializerClause Ellipsis?;

expressionList: expressionListPart (Comma expressionListPart)*;

expressionListPart: (Identifier Assign)? (conditionalExpression | bracedInitList) Ellipsis? | Out Identifier Colon theTypeId;

constraintClause: Where constantExpression;

patternList: pattern (patternCombinationOperator pattern)*;

patternCombinationOperator: And | Or;

pattern: 
	  not? theTypeId Identifier? (LeftBrace propertyPattern (Comma propertyPattern)* RightBrace)?
	| not? shiftExpression (LeftParen Let Identifier (Comma Identifier)* RightParen)?
	| not? LeftBrace patternList (Comma patternList)* RightBrace
	| not? LeftBracket patternList (Comma patternList)* RightBracket
	| Let Identifier (Comma Identifier)*
	| (Greater | GreaterEqual | Less | LessEqual) shiftExpression
	;

typeTrait: 
	not? (
	  Void
	| Null
	| (Ref | Union)? Struct
	| Enum Class?
	| Class
	| Unowned
	| Weak
	| Interface
	| Union
	| LeftParen RightParen Arrow
	| Star
	| Amp Amp?
	| Question
	| Ref
	| Const
	| Volatile
	| Abstract
	| Final
	| (Default | Noexcept | Implicit)? New LeftParen (Move? theTypeId)? RightParen
	| (Default | Noexcept)? Tilde LeftParen RightParen
	| Operator_ theTypeId
	| Less Identifier Greater
	| theTypeId (Or theTypeId)*
	);

propertyPattern: Identifier Colon patternList;

assignmentOperator:
	  Assign
	| PlusAssign
	| MinusAssign
	| TildeAssign
	| StarAssign
	| DoubleStarAssign
	| DivAssign
	| ModAssign
	| RightShiftAssign
	| LeftShiftAssign
	| SignedRightShiftAssign
	| AndAssign
	| XorAssign
	| OrAssign
	| DoubleQuestionAssign
	| Op1
	;

shiftOperator:
	  Greater Greater Greater?
	| Less Less
	| Op7
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
	| decaySpecifier
	| functionTypeId
	| LeftParen theTypeId (Comma theTypeId)+ Ellipsis? RightParen
	| LeftParen theTypeId Ellipsis RightParen
	| LeftParen namedTupleField (Comma namedTupleField)+ RightParen
	;

functionTypeId: LeftParen (typeIdWithSpecification (Comma typeIdWithSpecification)*)? Ellipsis? RightParen Arrow (Const? Ref? theTypeId | Void);

typeIdWithSpecification: paramSpecification? theTypeId;

namedTupleField: Identifier Colon theTypeId;

nestedNameSpecifier: 
	  (typename | namespaceName | decltypeSpecifier) Dot 
	| nestedNameSpecifier (Identifier | simpleTemplateId) Dot;

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

theTypeId: 
	  singleTypeId (VertLine singleTypeId)*  
	| constantExpression Question theTypeId Colon theTypeId
	;

singleTypeId: 
	  typeSpecifierSeq Question? typePostfix?
	| LeftParen theTypeId RightParen (Question typePostfix? | typePostfix)
	;

typePostfix: arrayDeclarator+;

arrayDeclarator: LeftBracket constantExpression? RightBracket Question?;

pointerOperator
    : Star | DoubleStar
    ;
    
pointerOperatorSeq: pointerOperator+;

typeSpecifierSeq: 
	  (pointerOperator+ cvQualifier?)? simpleTypeSpecifier 
	| pointerOperator+ cvQualifier? Void
	| pointerOperator LeftParen functionTypeId RightParen
	;

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

decaySpecifier: Decay LeftParen theTypeId RightParen;

enumName: Identifier;

accessSpecifier: Private | Protected | Public | Internal;

protectedInternal: Protected Internal;

operatorFunctionId: Operator_ operator;

conversionFunctionId: Operator_ (Ref | Const Ref)? theTypeId;

unaryExpression:
	(unaryPrefixOperator | refCaptureOperator | Out | PlusPlus | MinusMinus | unaryCustomOperator | Sizeof)? unaryExpressionTail
	;

unaryExpressionTail:
	  fullPostfixExpression
	| Sizeof (LeftParen theTypeId RightParen | Ellipsis LeftParen Identifier RightParen)
	| Alignof LeftParen theTypeId RightParen
	;

newExpression: New memorySpaceSetter? theTypeId newInitializer?;

stackallocExpression: Stackalloc memorySpaceSetter? theTypeId newInitializer?;

memorySpaceSetter: Less constantExpression Greater;

newInitializer: LeftParen expressionList? RightParen | bracedInitList;

fullPostfixExpression:
	  postfixExpression (PlusPlus | MinusMinus | unaryCustomOperator)?
	;

postfixExpression:
	  primaryExpression
	| newExpression
	| stackallocExpression
	| postfixExpression Question? LeftBracket attributeSpecifierSeq? expressionList RightBracket
	| postfixExpression LeftParen expressionList? RightParen
	| (simpleTypeSpecifier) LeftParen expressionList? RightParen
	| Move postfixExpression
	| Forward postfixExpression
	| postfixExpression Dot IntegerLiteral
	| simpleTypeSpecifier Dot Type
	| postfixExpression Question? Dot Greater? idExpression
	| postfixExpression unaryPostfixOperator
	;

tupleExpression:
	LeftParen conditionalExpression (Comma conditionalExpression)+ RightParen
	;

methodBindingExpression: Amp LeftBrace (Weak | Unowned)? (methodOwnerExpression Dot)? methodName RightBrace;

methodOwnerExpression: unaryExpression;

methodName: Identifier;

lambdaExpression: lambdaCaptureList? templateParams? lambdaDeclarator constraintClause? lambdaBody;

lambdaCaptureList: LeftBracket lambdaCaptureClause RightBracket Mutable?;

lambdaCaptureClause: capture+ | Assign (Comma capture)*;

capture: (Weak | Unowned)? This | (Weak | Unowned)? Identifier | Identifier Assign initializerClause;

lambdaDeclarator: (functionParams | Identifier) returnType?;

lambdaBody: functionBody | AssignArrow expr;

primaryExpression:
	  literal
	| This
	| Super
	| Field
	| LeftParen expr RightParen
	| foldExpression 
	| LeftParen theTypeId RightParen Dot (Type | Identifier)
	| tupleExpression
	| Doublecolon? idExpression
	| lambdaExpression
	| methodBindingExpression
	| declvalExpression
	;

foldExpression:
	LeftParen(
	  (foldLeftExpression (operator | And | Or) Ellipsis ((operator | And | Or) foldRightExpression)?)
	| (Ellipsis (operator | And | Or) foldRightExpression)
	)RightParen
	;

foldLeftExpression: unaryExpression;

foldRightExpression: unaryExpression;

templateDeductionGuide: (templateParams constraintClause?)? implicitSpecification? templateName LeftParen theTypeId (Comma theTypeId)* RightParen Arrow simpleTemplateId Semi;

unaryPrefixOperator:
	  Plus
	| Minus
	| Tilde
	| not
	| Dollar
	| Caret
	| DoubleCaret
	;

unaryCustomOperator:
	  Op2
	| Op3
	| Op4
	| Op7
	| Op8
	| Op9
	| Op10
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
	| In
	| Plus
	| Minus
	| Star
	| DoubleStar
	| Div
	| Mod
	| Caret
	| DoubleCaret
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
	| TildeAssign
	| StarAssign
	| DoubleStarAssign
	| ModAssign
	| XorAssign
	| AndAssign
	| OrAssign
	| Less Less
	| Greater Greater Greater?
	| RightShiftAssign
	| LeftShiftAssign
	| SignedRightShiftAssign
	| Equal
	| NotEqual
	| LessEqual
	| Spaceship
	| PlusPlus
	| MinusMinus
	| LeftParen RightParen
	| Op1
	| Op2
	| Op3
	| Op4
	| Op5
	| Op6
	| Op7
	| Op8
	| Op9
	| Op10
	;

literal:
	  IntegerLiteral
	| FloatingLiteral
	| DecimalTypeLiteral
	| BooleanLiteral
	| CharacterLiteral
	| StringLiteral
	| MultilineStringLiteral 
	| interpolatedStringLiteral
	| Null
	;

interpolatedStringLiteral: interpolatedRegularStringLiteral | interpolatedVerbatiumStringLiteral | interpolatedMultilineStringLiteral;

interpolatedRegularStringLiteral: InterpolatedRegularStringStart interpolatedRegularStringPart* DOUBLE_QUOTE_INSIDE;

interpolatedRegularStringPart: 
	  interpolatedExpression
	| DOUBLE_CURLY_INSIDE
	| REGULAR_CHAR_INSIDE
	| REGULAR_STRING_INSIDE
	;

interpolatedVerbatiumStringLiteral: InterpolatedGraveStringStart interpolatedVerbatiumStringPart* GRAVE_INSIDE;

interpolatedVerbatiumStringPart:
	  interpolatedExpression
	| DOUBLE_CURLY_INSIDE
	| VERBATIUM_DOUBLE_GRAVE_INSIDE
	| GRAVE_STRING_INSIDE
	;

interpolatedMultilineStringLiteral: InterpolatedMultilineStringStart interpolatedMultilineStringPart* TRIPLE_QUOTE_INSIDE;

interpolatedMultilineStringPart:
	  interpolatedExpression
	| DOUBLE_CURLY_INSIDE
	| MULTILINE_QUOTES_INSIDE
	| MULTILINE_STRING_INSIDE
	;

interpolatedExpression: nullCoalescingExpression (Colon FORMAT_STRING+)?;

declvalExpression: Declval LeftParen theTypeId RightParen;