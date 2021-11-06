/*

C Programming Operators (operadores de programação):
Um operador é um símbolo que opera sobre um valor ou sobre uma variável. Por exemplo,
'+' é um operador que realiza uma adição.

Operadores aritméticos:
Um operador aritmético realiza uma operação matemática como adição, subtração,
multiplicação, divisão etc em valores numéricos (constantes(literais) e variáveis).

Operator	Meaning of Operator
+	        addition or unary plus
-	        subtraction or unary minus
*	        multiplication
/	        division
%	        remainder after division (modulo division)

Operadores de incremento e decremento:
Existem dois operadores desse tipo em C, o ++ (acresce) e o -- (decresce).
Ambos acrescem ou decrescem um valor em 1. Ambos também são unários (unary),
ou seja, operam em apenas um valor.

Operadores de atribuição:
São operadores que atribuem um valor a uma variável, sendo o mais comum o '='.

Operator	Example	        Same as
=	        a = b	          a = b
+=	      a += b	        a = a+b
-=	      a -= b	        a = a-b
*=	      a *= b	        a = a*b
/=	      a /= b	        a = a/b
%=	      a %= b	        a = a%b

Operadores de comparação:
Os operadores de comparação verificam a relação entre dois operandos. Se a
relação for verdadeira, retorna 1, senão (falsa) retorna 0. Muito usado para
que se façam decisões no algoritmo e em laços.

Operator	Meaning of Operator	           Example
==	      Equal to	                     5 == 3 is evaluated to 0
>	        Greater than	                 5 > 3 is evaluated to 1
<	        Less than	                     5 < 3 is evaluated to 0
!=	      Not equal to	                 5 != 3 is evaluated to 1
>=	      Greater than or equal to	     5 >= 3 is evaluated to 1
<=	      Less than or equal to	         5 <= 3 is evaluated to 0


Operadores lógicos:
Uma expressão contendo um operador lógico vai retornar 1(true) ou 0(false)
dependendo se a expressão for verdadeira ou falsa. Geralmnte são usadsa para
se tomar decisões ao longo do programa.


Operator	  Meaning	                                                 Example
&&	        Logical AND. True only if all operands are true	         If c = 5 and d = 2 then, expression ((c==5) && (d>5)) equals to 0.
||	        Logical OR. True only if either one operand is true	     If c = 5 and d = 2 then, expression ((c==5) || (d>5)) equals to 1.
!	          Logical NOT. True only if the operand is 0	             If c = 5 then, expression !(c==5) equals to 0.



Operadores Bitwise:
Durante a computação, operações matemáticas como adição, subtração, divisão
multiplicação etc são convertidas a nível de bit o que faz com que o processamento
seja mais rápido e economize energia.

Operators	    Meaning of operators
&	            Bitwise AND
|	            Bitwise OR
^	            Bitwise exclusive OR
~	            Bitwise complement
<<	          Shift left
>>	          Shift right

Outros operadores:
Operador vígula ',':
Usado para ligar expressões relacionadsa junto.
Ex:
int a, c = 5, d;

Operador sizeof():
Operador unário que retorna o tamanho do dado (constantes, vaiáveis, arrays,
estruturas etc).

Outros que serão estudados mais adiante:
Operador ternário (?:), operador referência (&), operador dereferência (*) e
operador de seleção de membro (->).

*/

#include <stdio.h>



//Exemplo 1 Operadores aritméticos
int Exemplo1()
{
    int a = 9,b = 4, c;

    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);

    /*
    Output:
    a+b = 13
    a-b = 5
    a*b = 36
    a/b = 2
    Remainder when a divided by b=1

    Calculando normalmente, 9/4 é 2.25, contudo o output é 2. Isso ocorre pois
    ambas as variáveis são inteiros, logo, o output tmb deve ser inteiro. O
    compilador ignora o que vem depois do .

    Supondo a =5.0, b=2.0, c=5, d=2, teremos:

    // Either one of the operands is a floating-point number
    a/b = 2.5
    a/d = 2.5
    c/b = 2.5

    // Both operands are integers
    c/d = 2
    */

    return 0;
}

//Exemplo 2 Operadores de incremento e decremento
int Exemplo2()
{
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;

    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);

    /*
    Output:
    ++a = 11
    --b = 99
    ++c = 11.500000
    --d = 99.500000

    Aqui os operadores são usados apenas como prefixos, contudo, eles podem serem
    usados como sufixos. A diferença é que se for utilizado como prefixo, ele
    é altera antes da linha ser executada, se for sufixo, altera depois da
    execução da linha.
    */

    return 0;
}

//Exemplo 3 Operadores de atribuição
int Exemplo3()
{
    int a = 5, c;

    c = a;      // c is 5
    printf("c = %d\n", c);
    c += a;     // c is 10
    printf("c = %d\n", c);
    c -= a;     // c is 5
    printf("c = %d\n", c);
    c *= a;     // c is 25
    printf("c = %d\n", c);
    c /= a;     // c is 5
    printf("c = %d\n", c);
    c %= a;     // c = 0
    printf("c = %d\n", c);

    /*
    Output:
    c = 5
    c = 10
    c = 5
    c = 25
    c = 5
    c = 0
    */

    return 0;
}

//Exemplo 4 Operadores de comparação
int Exemplo4()
{
    int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    /*
    Output:
    5 == 5 is 1
    5 == 10 is 0
    5 > 5 is 0
    5 > 10 is 0
    5 < 5 is 0
    5 < 10 is 1
    5 != 5 is 0
    5 != 10 is 1
    5 >= 5 is 1
    5 >= 10 is 0
    5 <= 5 is 1
    5 <= 10 is 1

    */

    return 0;
}

//Exemplo 5 Operadores lógicos
int Exemplo5()
{
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    /*
    Output:
    (a == b) && (c > b) is 1
    (a == b) && (c < b) is 0
    (a == b) || (c < b) is 1
    (a != b) || (c < b) is 0
    !(a != b) is 1
    !(a == b) is 0

    (a == b) && (c > 5) evaluates to 1 because both operands (a == b) and (c > b) is 1 (true).
    (a == b) && (c < b) evaluates to 0 because operand (c < b) is 0 (false).
    (a == b) || (c < b) evaluates to 1 because (a = b) is 1 (true).
    (a != b) || (c < b) evaluates to 0 because both operand (a != b) and (c < b) are 0 (false).
    !(a != b) evaluates to 1 because operand (a != b) is 0 (false). Hence, !(a != b) is 1 (true).
    !(a == b) evaluates to 0 because (a == b) is 1 (true). Hence, !(a == b) is 0 (false).
    */

    return 0;
}

//Exemplo 6 Operador sizeof()
int Exemplo6()
{
    int a;
    float b;
    double c;
    char d;
    printf("Size of int=%lu bytes\n",sizeof(a));
    printf("Size of float=%lu bytes\n",sizeof(b));
    printf("Size of double=%lu bytes\n",sizeof(c));
    printf("Size of char=%lu byte\n",sizeof(d));

    /*
    Output:
    Size of int = 4 bytes
    Size of float = 4 bytes
    Size of double = 8 bytes
    Size of char = 1 byte
    */

    return 0;
}


int main() {


  return 0;
}
