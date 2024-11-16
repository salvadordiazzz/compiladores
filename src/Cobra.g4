grammar Cobra; 

program: (functionDef)* EOF; //done

statement: varDeclaration          //done      
         | inferredVarDeclaration       
         | assignment                 //done   
         | display             //done          
         | getInput
         | conditional   //done more or less
        |     loopStruct
        | repeatStruct
        |objectDecl
        |arrayDecl
        |matrixDecl
        |waitLoop
        |rangeDeclaration
         ;               

// Declaración de variable con tipo explícito
varDeclaration: dataType IDENTIFIER ('=' expression)? ';' ;

// Declaración de variable con inferencia de tipo
inferredVarDeclaration: 'auto' IDENTIFIER ('=' expression)? ';' ;

// Declaración de rango automático
rangeDeclaration: 'auto' IDENTIFIER '=' 'scale' '(' expression ',' expression ')' ';';

// Declaración de listas y diccionarios simplificada
collection: '[' expression (',' expression)* ']'                   # listCollection
          | '{' TEXT ':' expression (',' TEXT ':' expression)* '}'  # dictCollection;

assignment: IDENTIFIER '=' expression ';' ;
display: 'show' '(' (TEXT | IDENTIFIER | expression) (',' (TEXT | IDENTIFIER | expression))* ')'  ';' ;
getInput: IDENTIFIER '=' 'ask' '(' TEXT ')' ';' ;

functionDef: 'function' IDENTIFIER '(' (IDENTIFIER(','IDENTIFIER)*)? ')' (block | returnBlock);

block: '{' statement* '}'   ;
returnBlock:'{'statement* 'return' expression ';''}';
conditional: WHEN '(' expression comparisonOperator expression ')' block (OTHERWISEWHEN '(' expression comparisonOperator expression  ')' block)* (OTHERWISE block)? ';';
WHEN: 'when';
OTHERWISEWHEN: 'otherwiseWhen';
OTHERWISE: 'otherwise';
comparisonOperator: '<' | '<=' | '>' |'>=' | '==' | '!=' ;

loopStruct: 'repeatUntil' '(' expression ')' block ';';
repeatStruct: 'countFrom' '(' expression ',' expression ',' expression ')' block ';';

// Ciclo con duración temporal
waitLoop: 'pause' '(' TIME ')' block ';';
TIME: [0-9]+ ' seconds';

objectDecl: 'entity' IDENTIFIER '(' parameterList ')' block ';';
arrayDecl: 'array' '<' dataType '>' IDENTIFIER '=' '[' expression (',' expression)* ']' ';';
matrixDecl: 'matrix' '<' dataType '>' IDENTIFIER '=' '[' '[' expression (',' expression)* ']' (',' '[' expression (',' expression)* ']' )* ']' ';';

parameterList: dataType IDENTIFIER (',' dataType IDENTIFIER)*;

dataType: 'number'
        | 'decimal'
        | 'letter'
        | 'string'
        | 'flag';

expression: '(' expression ')'                         # paren
          | expression '^' expression                  # power
          | expression operator=('*'|'/') expression   # muldiv
          | expression operator=('+'|'-') expression   # subsum
          | literal                                   # litExp
          ;
literal
    : INTEGER         # intLiteral
    | DECIMAL       # floatLiteral
    | CHARACTER        # charLiteral
    | TEXT      # stringLiteral
    | BOOLEAN        # boolLiteral
    | IDENTIFIER  # identifierLiteral
    ;

BOOLEAN: 'true' | 'false';
INTEGER: [0-9]+;
DECIMAL: [0-9]+'.'[0-9]+;
CHARACTER: '\'' . '\'';
TEXT: '"' .*? '"';
IDENTIFIER: [a-zA-Z_][a-zA-Z_0-9]*;

WS: [ \t\r\n]+ -> skip;

// Comentarios interactivos
COMMENT: '//' ~[\r\n]* -> skip;
ASSIGN: '=' ;
LPAR  : '(' ;
RPAR  : ')' ;
ADD   : '+' ;
SUB   : '-' ;
MUL   : '*' ;
DIV   : '/' ;
POW   : '^' ; 