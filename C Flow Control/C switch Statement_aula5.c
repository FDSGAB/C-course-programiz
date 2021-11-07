/*

C switch Statement

O comando switch permite que o programa execute um bloco de instruções entre
diversas alternativas. É possível fazer a mesma coisa com a progressão
if..else if... else, contudo, a sintaxe do comando switch é mais legível e mais
fácil de escrever.
Sintaxe da instrução switch:

switch (expression)
​{
    case constant1:
      // statements
      break;

    case constant2:
      // statements
      break;
    .
    .
    .
    default:
      // default statements
}

A expressão (expression) é avaliada uma vez e comparada com cada comando case
dentro do switch. Se um case correspondente for encontrado, os blocos de código
depois desse case correspondente serão executados. Por exemplo, se o valor da
expressão corresponder ao constan2, todas as instruções a partir do case serão
executadas até se encontrar um break. Se o break não for utilizado, tudo após o
caso correspondente será executado.

Se não houver correspondência, as instruções do default são executadas. Contudo,
o default dentro do switch é opcional.

*/

#include <stdio.h>

// Program to create a simple calculator
int Exemplo() {
    char operator;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }

    /*
    Output:
    Enter an operator (+, -, *,): -
    Enter two operands: 32.5
    12.4
    32.5 - 12.4 = 20.1

    O programa armazena um char na variável operador que será comparado com cada
    com cada caso do comando switch. Em seguida, ele recebe ps números e vai para
    a instrução switch. Aqui o operador é comparado com cada caso e entra no caso
    correspondente. Por fim, o comando break finaliza o comando switch.

    No caso exemplificado, o switch pula direto para a linha:
    printf("%.1lf - %.1lf = %.1lf", n1, n2, n1-n2);
    */

    return 0;
}

int main() {


  return 0;
}
