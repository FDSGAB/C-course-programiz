/*

C while and do...while Loop (enquanto e faça enquanto)

Laço while:
Sintaxe do laço while:
while (testExpression) {
  // the body of the loop
}

A função while avalia a expressão dentro do parenteses. Enquanto ela for verdadeira,
o bloco de linhas do while será executado e, quando a expressão passar a ser falsa,
o programa sai do laço.


Laço do...while:
É parecido com o while, contudo, o bloco de instruções do do...while é executado
ao menos uma vez e só depois a expressão é avaliada.
Sintaxe do loop do...while:
do {
  // the body of the loop
}
while (testExpression);

O bloco do do é executado uma vez e depois a expressão é avaliada. Se a expressão
for verdadeira, o bloco é executado novamente e, se for falso, o programa sai do
laço.





*/

#include <stdio.h>


//Exemplo 1 Laço while
// Print numbers from 1 to 5
int Exemplo1() {
  int i = 1;

  while (i <= 5) {
    printf("%d\n", i);
    ++i;
  }


  /*
  Output:
  1
  2
  3
  4
  5

  O programa inicializa i como 1. Como i<=5, o programa entra no laço e realiza
  o bloco de instruções dentro do while até que o i<=5 seja falso (i == 6).




  */

  return 0;
}


//Exemplo 2 do...while Loop
// Program to add numbers until the user enters zero
int Exemplo2() {
  double number, sum = 0;

  // the body of the loop is executed at least once
  do {
    printf("Enter a number: ");
    scanf("%lf", &number);
    sum += number;
  }
  while(number != 0.0);

  printf("Sum = %.2lf",sum);

  /*
  Output:
  Enter a number: 1.5
  Enter a number: 2.4
  Enter a number: -3.4
  Enter a number: 4.2
  Enter a number: 0
  Sum = 4.70


  O programa pede um número inicialmente e se ele for 0, ele sai do loop. Como
  foi utilizada a estrutura do...while, o do será executado ao menos uma vez e a
  condição só é verificada depois das instruções serem executadas.

  */

  return 0;
}



int main() {


  return 0;
}
