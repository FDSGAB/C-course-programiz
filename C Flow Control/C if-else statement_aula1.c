/*

Instruções condicionais e instruções condicionais alinhadas (nested, uma dentro da outra):

A sintaxe de uma condicional em C é:
if (test expression)
{
   // code
}

A função avalia se a test expression dentro dos parênteses é verdadeira (1) ou
não (0). Se for verdadeira, o código dentro do bloco do if é realizado, se for
falso, o bloco não é executado. Na test expression se usa muito operadores de
comparação e lógicos.

Instruções if...else em C:
Uma instrução condicional if pode ter um bloco opcional else. A sintaxe dessa
forma fica assim:
if (test expression) {
    // run code if test expression is true
}
else {
    // run code if test expression is false
}

Essas instruções funcionam da seguinte maneira: caso a test expression do if seja
verdadeira, as linhas dentro do bloco if serão executadas e as linhas do bloco else
não serão executadas. Contudo, se a test expression do if for falsa, as linhas do
bloco de if não são executadas e as do bloco else são executadas.

Progressão if...else em C:
As instruções if...else executam dois códigos diferentes dependendo da veracidade
da test expression. Mas muitas vezes é necessário um programa que escolha entre mais
de duas possibilidades, para isso há a progressão if...else.
Ex:
if (test expression1) {
   // statement(s)
}
else if(test expression2) {
   // statement(s)
}
else if (test expression3) {
   // statement(s)
}
.
.
else {
   // statement(s)
}

If..else alinhado:
Nesse caso, uma isntrução if...else é inserida dentro de outra instrução if..else.

Se o bloco de instruções de if ou else só tem uma linha, não é necessário utilizar
chaves {}.
Ex:
Programa 1:
if (a > b) {
    printf("Hello");
}
printf("Hi");

É igual ao programa 2 seguinte:
if (a > b)
    printf("Hello");
printf("Hi");

*/

#include <stdio.h>


//Exemplo 1 if statement
int Exemplo1() {  // Program to display a number if it is negative
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // true if number is less than 0
    if (number < 0) {
        printf("You entered %d.\n", number);
    }

    printf("The if statement is easy.");

    /*
    Output1 (número negativo inserido):
    Enter an integer: -2
    You entered -2.
    The if statement is easy.

    Output2 (número maior igual a zero é inserido):
    Enter an integer: 5
    The if statement is easy.

    No primeiro caso, como number = -2, a expressão number < 0 é verdadeira, logo,
    as instruções dentro do bloco if são executadas. Contudo, no segundo caso
    number = 5, logo, a expressão number < 0 é falsa, resultando na não execução
    das instruções no bloco if.

    */

    return 0;
}


//Exemplo 2 instrução if...else
int main() {  // Check whether an integer is odd or even
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the remainder is 0
    if  (number%2 == 0) {
        printf("%d is an even integer.",number);
    }
    else {
        printf("%d is an odd integer.",number);
    }
    /*
    Output:
    Enter an integer: 7
    7 is an odd integer.

    Quando um usuário digita um número impar como 7, teremos que a expressão
    number%2 == 0 seja falsa, pois há resto na divisão. Logo, o bloco if é ignorado
    e o bloco else executado. Caso o número seja um par qualquer como 10, a expressão
    number%2 == 0 será verdadeira, logo, o bloco if será executado e o bloco else
    ignorado.

    */

    return 0;
}


//Exemplo 3 Progressão if...else
int main() {      // Program to relate two integers using =, > or < symbol
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    //checks if the two integers are equal.
    if(number1 == number2) {
        printf("Result: %d = %d",number1,number2);
    }

    //checks if number1 is greater than number2.
    else if (number1 > number2) {
        printf("Result: %d > %d", number1, number2);
    }

    //checks if both test expressions are false
    else {
        printf("Result: %d < %d",number1, number2);
    }

    /*
    Output:
    Enter two integers: 12
    23
    Result: 12 < 23

    O programa verifica entre 2 inteiros, se são maiores, iguais ou menores.
    No caso, essas três ultimas possibilidades que compões as condições de
    test expression, sendo a última redundande no contexto do programa e
    utilizando-se apenas um else genérico.
    */

    return 0;
}

//Exemplo 4 If...else alinhados
int Exemplo4() {    //Faz a mesma coisa que o exemplo 3 com if..else alinhados
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    if (number1 >= number2) {
      if (number1 == number2) {
        printf("Result: %d = %d",number1,number2);
      }
      else {
        printf("Result: %d > %d", number1, number2);
      }
    }
    else {
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
}


int main() {


  return 0;
}
