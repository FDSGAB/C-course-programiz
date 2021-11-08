/*

C goto Statement

O comando goto permite que o controle do programa seja transferido para um label
(rótulo).

O label é um identificador. Quando o programa encontra um goto, o controle do
programa vai para o label: e começa a executar o código.

Razões para se evitar o uso do goto:
o uso inapropriado do comando goto pode fazer com que o programa apresente bugs,
além de tornar o programa difícil de entender.
Exemplo:

one:
for (i = 0; i < number; ++i)
{
    test += i;
    goto two;
}
two:
if (test > 5) {
  goto three;
}
... .. ...

Além disso, o comando goto também permite que o programa saia dos parâmetros.
Contudo, o goto pode ser útil algumas vezes para sair de laços aninhados, por
exemplo.


Você deve usar o goto?
Se você acredita que sua utilização irá simplificar seu programa, então ok,
entretanto, o goto dificilmente é útil e é possível de se criar qualquer programa
em C sem utilizá-lo.

Here's a quote from Bjarne Stroustrup, creator of C++:
"The fact that 'goto' can do anything is exactly why we don't use it."

*/
#include <stdio.h>

//Exemplo 1 Comando goto
// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.
int Exemplo1() {

   const int maxInput = 100;
   int i;
   double number, average, sum = 0.0;

   for (i = 1; i <= maxInput; ++i) {
      printf("%d. Enter a number: ", i);
      scanf("%lf", &number);

      // go to jump if the user enters a negative number
      if (number < 0.0) {
         goto jump;
      }
      sum += number;
   }

jump:
   average = sum / (i - 1);
   printf("Sum = %.2f\n", sum);
   printf("Average = %.2f", average);

   /*
   Output:
   1. Enter a number: 3
   2. Enter a number: 4.3
   3. Enter a number: 9.3
   4. Enter a number: -2.9
   Sum = 16.60
   Average = 5.53
   */

   return 0;
}



int main() {

  return 0;
}
