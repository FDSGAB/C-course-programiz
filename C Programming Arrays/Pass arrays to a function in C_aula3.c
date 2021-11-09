/*

Pass arrays to a function in C

Em C, é possível passar um array inteiro como um argumento para uma função, mas
antes, veremos como passar um elemento de um array para uma função.


Passando elementos individuais de um array para uma função:
Passar um elemento de um array para uma função é similar à maneira como se
passa uma variável, como exemplificado no Exemplo 1:

// pass second and third elements to display()
display(ageArray[1], ageArray[2]);

Podemos perceber isso ao olhar para os parâmetros da função e perceber que eles
são variáveis individuais:

void display(int age1, int age2) {
  // code
}



Passando um array inteiro como argumento para uma função:
Para passar um array inteiro para uma função, só se passa o nome do array como
argumento, como visto no Exemplo 2.:

result = calculateSum(num);

Entretanto, note que na definição da função é utilizado '[]' para o programa
saber que o parãmetro é um array unidimensional:

float calculateSum(float num[]) {
... ..
}



Passando arrays multimensionais como argumento de uma função:
Para passar um array multidimensional para uma função, similar ao array
unidimensional, apenas o nome do array é passado como argumento da função,
como exemplificado no exemplo 4. Contudo, note como fica a definição da função
que usa um array multimensional como parâmetro:

// function prototype
void displayNumbers(int num[2][2]);

O parâmetro da função ficou como int num[2][2]. Isso significa que a função vai
receber um array bidimensional como parâmetro e é possível passar arrays com mais
de duas dimensões para uma função.
Quando se coloca um array bidimensional como parâmetro de uma função, não é
necessário especificar o número de linhas que o array vai ter. Entretanto, o
número de colunas sempre deve ser especificado. Por exemplo:

void displayNumbers(int num[][2]) {
  // code
}

ATENÇÂO: Em C é possível passar arrays para uma função, mas não é possível
retorná-los de funções. Só é possível retornar um array ao se utilizar o conceito
de ponteiros.

*/

#include <stdio.h>

//Exemplo 1 Passar elementos individuais de um array para uma função
void display(int age1, int age2) {
  printf("%d\n", age1);
  printf("%d\n", age2);
}

int Exemplo1() {
  int ageArray[] = {2, 8, 4, 12};

  // pass second and third elements to display()
  display(ageArray[1], ageArray[2]);

  /*
  Output:
  8
  4

  A maneira como elementos de um array são passados para uma função é igual à
  maneira como uma variável é passada a uma função.

  */
  return 0;
}










//Exemplo 2 Passar um array para uma função
// Program to calculate the sum of array elements by passing to a function
float calculateSum(float num[]);

int Exemplo2() {
  float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};

  // num array is passed to calculateSum()
  result = calculateSum(num);
  printf("Result = %.2f", result);
  /*
  Output:
  Result = 162.50
  */

  return 0;
}

float calculateSum(float num[]) {
  float sum = 0.0;

  for (int i = 0; i < 6; ++i) {
    sum += num[i];
  }

  return sum;
}









//Exemplo 3 Passando arrays bidimensionais
void displayNumbers(int num[2][2]);

int Exemplo2() {
  int num[2][2];
  printf("Enter 4 numbers:\n");
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 2; ++j) {
      scanf("%d", &num[i][j]);
    }
  }

  // pass multi-dimensional array to a function
  displayNumbers(num);
  /*
  Output:
  Enter 4 numbers:
  2
  3
  4
  5
  Displaying:
  2
  3
  4
  5



  */
  return 0;
}

void displayNumbers(int num[2][2]) {
  printf("Displaying:\n");
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 2; ++j) {
      printf("%d\n", num[i][j]);
    }
  }
}


int main() {

  return 0;
}
