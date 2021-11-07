/*

C break and continue

O comando break, quando lido, sai imediatamente do laço atual do programa. Sua
sintaxe é:
break;

Geralmente o comando break é utilizado em conjunto com uma instrução if...else

A instrução break também é muito utilizada com a instrução switch.


O comando continue pula a iteração atual do laço e vai para a próxima. Sua
sintaxe é:
continue;

O comando continue quase sempre é utilizado junto a uma instrução if...else.

*/
#include <stdio.h>

//Exemplo 1 Instrução break
// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates
int Exemplo1() {
   int i;
   double number, sum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter n%d: ", i);
      scanf("%lf", &number);

      // if the user enters a negative number, break the loop
      if (number < 0.0) {
         break;
      }

      sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);

   /*
   Output:
   Enter n1: 2.4
   Enter n2: 4.5
   Enter n3: 3.4
   Enter n4: -3
   Sum = 10.30

   O programa calcula a soma de no máximo 10 números, pois se um número negativo
   for inputado, o programa para. Logo, ele calcula a soma de até 10 números
   positivos.
   */

   return 0;
}

//Exemplo 2 Instrução continue
// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result
int Exemplo2() {
   int i;
   double number, sum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter a n%d: ", i);
      scanf("%lf", &number);

      if (number < 0.0) {
         continue;
      }

      sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);

   /*
   Output:
   Enter n1: 1.1
   Enter n2: 2.2
   Enter n3: 5.5
   Enter n4: 4.4
   Enter n5: -3.4
   Enter n6: -45.5
   Enter n7: 34.5
   Enter n8: -4.2
   Enter n9: -1000
   Enter n10: 12
   Sum = 59.70

   Este programa também calcula a soma de até 10 números, contudo, ao encontrar
   um número negativo, ao invés de sair do laço e terminar a soma, ele pula a
   iteração do número negativo (não somando ele) e vai para o próximo número
   */

   return 0;
}


int main() {




  return 0;
}
