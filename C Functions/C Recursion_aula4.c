/*

C Recursion

Uma função que chama a si mesma é chamada de função recursiva. E essa técnica é
conhecida como recursão.

Como isso funciona?

void recurse()
{
    ... .. ...
    recurse();
    ... .. ...
}

int main()
{
    ... .. ...
    recurse();
    ... .. ...
}

A recursão continua até que alguma condição é alcançada e impeça a recursão. Para
evitar uma recursão infinita,  uma instrução if...else pode ser implementada no
código onde um dos condicionais realiza a recursão e o outro não.

Vantagens e desvantagens de se utilizar recursão:
Recursão torna um programa elegante, entretanto, se performance é vital, use laços,
pois recursão é, geralmente, muito mais lenta. Dito isto, recursão é um conceito
importante que é frequentemente utilizado em estrutura de dados e algoritmos. Por
exemplo, é muito comum utilizar recursão em problemas de Tree Traversal (travessia
em árvore).

*/

#include <stdio.h>

//Exemplo 1 Soma de números naturais utilizando recursão:
int sum(int n);

int Exemplo1() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
    /*
    Output:
    Enter a positive integer:3
    sum = 6

    Inicialmente a função sum(n) é chamada na função main() e a variável number
    é passada como argumento. Supondo que o valor de n dentro da sum(n) seja 3
    inicialmente. Na próxima chamada da função sum(n) o número passado será 2 e
    esse processo continua até que n=0. Quando n = 0, o programa não entra no if,
    mas sim no else que retorna a soma dos inteiros para a main().

    */

    return 0;
}

int sum(int n) {
    if (n != 0)
        // sum() function calls itself
        return n + sum(n-1);
    else
        return n;
}


int main() {

  return 0;
}
