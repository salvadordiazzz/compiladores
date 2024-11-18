# Universidad Peruana de Ciencias Aplicadas

## Informe del Trabajo Parcial

**Curso:** Teoría de Compiladores  
**Carrera:** Ciencias de la Computación  
**Sección:** SC61

---

### Integrantes:

| Código      | Nombres y Apellidos               |
|-------------|-----------------------------------|
| **U202210161**  | Diego Antonio Salinas Casaico     |
| **U202216148**  | Salvador Diaz Aguirre             |
| **U202215375**  | Ricardo Rafael Rivas Carrillo     |
| **U202216562**  | Rody Vilchez Marin                |

---

**Año académico:** 2024

**Docente:** Luis Martin Canaval Sanchez

---

### Resumen del Proyecto (introduccion)

> Este informe describe el desarrollo de **Cobra**, un lenguaje de programación multiplataforma y orientado a objetos, diseñado para ser intuitivo y facilitar el aprendizaje de algoritmia en estudiantes de habla hispana. Al simplificar la sintaxis y utilizar terminología familiar en español, Cobra permite que los estudiantes se centren en el desarrollo de habilidades de pensamiento lógico y en los fundamentos de la programación. Su diseño busca facilitar la comprensión de conceptos algorítmicos sin complicaciones, promoviendo un aprendizaje efectivo y eficiente.

---

## Índice

1. [Problemática y Motivación](#problemática-y-motivación)  
2. [Objetivos](#objetivos)  
3. [Gramática en ANTLR4](#gramática-en-antlr4)  
4. [Esquema del Lenguaje](#esquema-del-lenguaje)  
5. [Anexos](#anexos)  

---

## Problemática y Motivación

El aprendizaje de lenguajes de programación enfrenta una barrera idiomática, ya que la mayoría utiliza el inglés, lo que representa un desafío para los estudiantes no angloparlantes. Aunque nuestra propuesta tiene una sintaxis en inglés, se enfoca en simplificar la comprensión de los fundamentos de programación. El lenguaje permite que los estudiantes se concentren en el pensamiento lógico sin lidiar con complejidades innecesarias. Su naturaleza multiplataforma fomenta la creatividad y el pensamiento crítico desde una edad temprana.

---


## Objetivos

1. Crear un lenguaje accesible que reduzca la barrera idiomática para estudiantes no angloparlantes.
2. Implementar una sintaxis sencilla y estandarizada que facilite el aprendizaje de conceptos de programación.
3. Incluir principios de Programación Orientada a Objetos (POO) para mejorar la comprensión de conceptos clave.
4. Optimizar el lenguaje para uso multiplataforma, permitiendo la ejecución de proyectos en diversos sistemas.
5. Facilitar la transición hacia lenguajes más avanzados, proporcionando una base sólida en programación.

---

## Gramática en ANTLR4

```antlr
grammar Cobra; 

program: (functionDef)* EOF; //done

statement: varDeclaration          // 
         | inferredVarDeclaration       //
         | assignment                 //  
         | display             //         
         | getInput             //
         | conditional   //
        |     loopStruct  // 
        | repeatStruct  //
        |objectDecl //
        |arrayDecl //
        |matrixDecl //
        |waitLoop //
        |rangeDeclaration //
         ;               

// Declaración de variable con tipo explícito
varDeclaration: dataType IDENTIFIER ('=' expression)? ';' ;

// Declaración de variable con inferencia de tipo
inferredVarDeclaration: 'auto' IDENTIFIER '=' expression ';' ;

// Declaración de rango automático
rangeDeclaration: 'auto' IDENTIFIER '=' 'scale' '(' expression ',' expression ')' ';';

// Declaración de listas y diccionarios simplificada
collection: '[' expression (',' expression)* ']'                   # listCollection
          | '{' TEXT ':' expression (',' TEXT ':' expression)* '}'  # dictCollection;

assignment: IDENTIFIER '=' expression ';' ;
display: 'show' '(' (TEXT | IDENTIFIER | expression) (',' (TEXT | IDENTIFIER | expression))* ')'  ';' ;
getInput: IDENTIFIER '=' 'ask' '(' TEXT ',' dataType ')' ';';

functionDef: 'function' IDENTIFIER '(' (IDENTIFIER(','IDENTIFIER)*)? ')' (block | returnBlock);

block: '{' statement* '}'   ;
returnBlock:'{'statement* 'return' expression ';''}';
conditional: WHEN '(' expression comparisonOperator expression ')' block (OTHERWISEWHEN '(' expression comparisonOperator expression  ')' block)* (OTHERWISE block)? ';';
WHEN: 'when';
OTHERWISEWHEN: 'otherwiseWhen';
OTHERWISE: 'otherwise';
comparisonOperator: '<' | '<=' | '>' |'>=' | '==' | '!=' ;

loopStruct: 'repeatWhile' '(' expression comparisonOperator expression  ')' block ';';
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
          | IDENTIFIER '[' expression ']' #arrayAccess 
          | IDENTIFIER '(' (expression (',' expression)*)? ')' #functionCall
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
```

---

## Esquema del Lenguaje

### Convenciones
- **Bloques de Código**: Delimitados por `{}` para mantener una estructura clara y accesible.
- **Tipos y Modificadores**: Colocados a la izquierda de las variables para consistencia y legibilidad.
- **Comentarios**: Utilizar `//` para comentarios de línea.
- **Palabras Clave**: En minúsculas (`if`, `loop`, `def`) para coherencia.
- **Finalización de Expresiones**: Todas las expresiones terminan con `;` para prevenir errores.
- **Operadores Lógicos y de Comparación**: Uso de `and`, `or`, `not`, y `==` para operaciones lógicas.

<!-- Propuesta de estilo
#### Estilo
- **Indentación**: Se recomienda una indentación de 2 o 4 espacios para mejorar la legibilidad del código.
- **Nombres de variables y funciones**: Se sugiere usar camelCase para variables (`miVariable`) y snake_case para funciones (`mi_funcion`).
-->

### Tipos de datos
- **Números**: `int`, `dec` (Para operaciones matemáticas).
- **Caracteres**: `char`, `text` (Manipulación de cadenas).
- **Booleanos**: `yes/no` (Valores booleanos intuitivos).
- **Operaciones**: Potencia `^`, Suma `+`, Resta `-`, División `/`, Multiplicación `*` (Operadores comunes).


### Sintaxis para funciones

Las funciones se declaran de manera compacta para facilitar su uso:
```plaintext
def nombre() {
    // Cuerpo de la función
}
```

### Sintaxis para Estructuras de Control

- **Condicionales**:
```plaintext
if (condición) {
    // Código si la condición es verdadera
} elseif (condición) {
    // Código si la anterior es falsa y esta es verdadera
} else {
    // Código si todas las condiciones son falsas
}
```

- **Bucles**:
```plaintext
loop (condición) {
    // Código mientras la condición sea verdadera
}

repeat (inicio, fin, incremento) {
    // Código desde 'inicio' hasta 'fin' con 'incremento'
}
```

### Sintaxis para Estructuras de Datos

- **Arreglos**:
```plaintext
arr<int> nombre = [1, 2, 3, 4]; // Arreglo de enteros
```

- **Matrices**:
```plaintext
matrix<int> nombre = [[1, 2, 3], [4, 5, 6]]; // Matriz de enteros
```

- **Clases**:
```plaintext
class NombreClase {
    def NombreClase(parametro) {
        // Inicialización
    }

    def metodo() {
        // Código del método
    }
}
```

---

## Bibliografía

- Palma, C. & Sarmiento, R. (2015). Estado del arte sobre experiencias de enseñanza de programación a niños y jóvenes. [Link](https://www.scielo.org.mx/scielo.php?pid=S1405-66662015000200013&script=sci_arttext)
- Aguilar, F. (2019). Uso de lenguajes de programación para desarrollar el razonamiento lógico matemático. [Link](https://doi.org/10.35290/rcui.v6n2.2019.114)
- ANTLR. (s.f). [About The ANTLR Parser Generator](https://www.antlr.org/about.html)

---
