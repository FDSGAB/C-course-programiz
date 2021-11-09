/*

C Arrays

Um array (arranjo) é uma variável que consegue armazenar vários valores. Por
exemplo, se você quiser armazenar 100 valores, é possível criar um array para
isso.
Ex:

int data[100];

Declaração de um array:

dataType arrayName[arraySize];

Por exemplo:

float mark[5];

Aqui foi declarado um arrat com o identificador mark do tipo float e tamanho 5.
Ou seja, ele pode armazenar 5 valores float. IMPORTANTE: o tamanho de um array
não pode ser mudado uma vez que ele já foi declarado.

Acesso aos elementos de um array:
Os valores de um array são acessados através de índices. Suponha o array mark
declarado acima. O primeiro elemento é mark[0], o segundo é mark[1] e assim por
diante até o último elemento, o quinto, que é mark[4].

Pontos importantes:
- O primeiro índice de um array é 0 e não 1. No exemplo, mark[0].
- Se o tamanho do array é n, para acessar o último elemento, o índice n-1 é
usado. No exemplo, mark[4].
- Suponha que o endereçamento de memória do mark[0] seja 2120d, então mark[1] será
2124d, mark[2] será 2128d e assim por diante, pois o tamanho de cada elemento float
é 4 bytes.

Como inicializar um array?
É possível de se inicializar um array no momento de sua declaração:

int mark[5] = {19, 10, 8, 17, 9};

Também é possível inicializar o array assim:

int mark[] = {19, 10, 8, 17, 9};

Neste último exemplo o tamanho do array não foi especificado. Entretanto, o
compilador sabe que o tamanho é 5, pois o array foi inicializao com 5 elementos.
Dos últimos exemplos temos:

mark[0] is equal to 19
mark[1] is equal to 10
mark[2] is equal to 8
mark[3] is equal to 17
mark[4] is equal to 9

Mudando o valor de algum elemento do array:

int mark[5] = {19, 10, 8, 17, 9}

// make the value of the third element to -1
mark[2] = -1;

// make the value of the fifth element to 0
mark[4] = 0;

Input e Output de elementos de um array:
Primeiro, como receber um input do usuário e armazená-lo no array:


// take input and store it in the 3rd element
​scanf("%d", &mark[2]);

// take input and store it in the ith element
scanf("%d", &mark[i-1]);


Como imprimir um elemento individual do array:


// print the first element of the array
printf("%d", mark[0]);

// print the third element of the array
printf("%d", mark[2]);

// print ith element of the array
printf("%d", mark[i-1]);


Acessando valores fora dos limites do array:
Suponha que tenha sido declarado o seguinte array de 10 elementos:

int testArray[10];

Os elementos do array que podem ser acessados vão de testArray[0] até testArray[9].
Digamos que o programa receba a instrução de acessar o elemento testArray[12].
Esse elemento não está disponível. Isso pode gerar um output inesperado (comportamento
indefinido). As vezes pode-se receber um erro e outras o programa pode funcionar
corretamente. Por conta disso, não se deve acessar elementos fora do limite de um
array.

Nessa aula foram estudados arrays com apenas uma dimensão. Na aula seguinte serão
estudados arrays de mais dimensões.

*/

#include <stdio.h>


//Exemplo 1 Input e Output de um array
// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
int Exemplo1() {
  int values[5];

  printf("Enter 5 integers: ");

  // taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", values[i]);
  }
  /*
  Output:
  Enter 5 integers: 1
  -3
  34
  0
  3
  Displaying integers: 1
  -3
  34
  0
  3

  Aqui foi utilizado um loop for para receber 5 inputs e armazená-los em um array.
  Então, com outro laço for, os elementos foram impressos.

  */

  return 0;
}






//Exemplo 2 Calcular média
// Program to find the average of n numbers using arrays
int Exemplo2()
{
     int marks[10], i, n, sum = 0, average;

     printf("Enter number of elements: ");
     scanf("%d", &n);

     for(i=0; i<n; ++i)
     {
          printf("Enter number%d: ",i+1);
          scanf("%d", &marks[i]);

          // adding integers entered by the user to the sum variable
          sum += marks[i];
     }

     average = sum/n;
     printf("Average = %d", average);

     /*
     Output:
     Enter n: 5
     Enter number1: 45
     Enter number2: 35
     Enter number3: 38
     Enter number4: 31
     Enter number5: 49
     Average = 39

     Programa que calcula a média dos n valores inseridos pelo usuário.
     */

     return 0;
}



int main() {


  return 0;
}
