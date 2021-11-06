/*

Laço (loop) for em C

Em programação, um laço é utilizado para que um bloco de instruções seja repetido
até que uma certa condição seja atingida. Existem 3 tipos de laço em C:
1. Laço for
2. Laço while
3. Laço do...while

Sintaxe de um laço for:
for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}

A linha de inicialização (inicializationStatement) é executada apenas uma vez.
Em seguida a test expression é avaliada e se for falsa, o programa sai do laço.
Se a test expression for verdadeira as instruções do bloco for são realizadas e
a linha updateStatement é executada.
Esse processo ocorre até que o test expression seja falso, terminando o laço.







*/


#include <stdio.h>


//Exemplo 1 Laço for
int main() {        // Print numbers from 1 to 10
  int i;

  for (i = 1; i < 11; ++i)
  {
    printf("%d ", i);
  }
  /*
  Output:
  1 2 3 4 5 6 7 8 9 10

  1. O contador i é inicializado em 1
  2. A expressão de teste é avaliada. Como i<11 é verdadeiro, o bloco for será
  exeutado, imprimindo i que é 1 no primeiro caso.
  3.Feito isso a linha de update ++i será executada e i será igual 2. Em seguida,
  a teste expression é avaliada novamente. E o processo continua até q ++i faz com
  que i = 12, o que torna i<11 falso e sai do bloco.
  */
  return 0;
}

//Exemplo 2 Laço for
// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers
int Exemplo2()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // for loop terminates when num is less than count
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("Sum = %d", sum);

    /*
    Output:
    Enter a positive integer: 10
    Sum = 55

    Nesse teste, o valor colocado pelo usuário foi 10. A variável count é incializada
    em 1 e enquanto count for menor ou igual ao número (no caso 10), o programa
    vai armazenando a soma de todos os valores de count na variável soma até que
    a expressão de teste se torne falsa (no caso count = 11 => count<=num é falso).
    Feito isso, a variável soma é impressa na tela com o resultado das somas dos
    números até num.
    */

    return 0;
}

int main() {


  return 0;
}
