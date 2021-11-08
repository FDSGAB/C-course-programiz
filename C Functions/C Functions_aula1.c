/*

C Functions

Uma função é um bloco de código que realiza uma certa tarefa. Suponha que você
precise criar um programa que desenha um círculo e depois colore ele. Podem ser
feitas duas funções para resolver esse problema:
-função que cria um círculo
-função que colore um círculo

Dividir um programa em tarefas menores ajuda na compreensão dele e permite uma
reutilização desse código de maneira mais fácil.

Em C existem dois tipos de função:
1. Funções padrão de biblioteca
2. Funções definidas pelo usuário


Funções padrão de biblioteca:
Essas funções já vêm inseridas na linguagem de programação C e são definidas nos
headers do programa, por exemplo:

A função printf() é uma função padrão de biblioteca. Para utilizá-la é necessário
incluir o header stdio.h no começo do programa com o #include <stdio.h>.

A função sqrt() calcula a raiz de um número. A função é definida no header math.h.


Funções definidas pelo usuário:
Também é possível de se criar funções para uso próprio. São funções criadas pelo
usuário (programador) para ajudar na confecção do programa conforme suas
necessidades.

Sintaxe para se definir uma função e utilizá-la:

void functionName()
{
    ... .. ...
    ... .. ...
}

int main()
{
    ... .. ...
    ... .. ...

    functionName();

    ... .. ...
    ... .. ...
}

O programa em C começa pela função main e, ao encontrar a função functionName(),
o programa vai pra linha: void functionName() e executa o código dentro do função
functionName(). Quando o código dentro da função functionName termina de ser
executado, o programa retorna a linha da main() onde parou.


Nome de funções são identificadores e, por isso, devem ser únicos no programa.


Vantagens de se utilizar funções definidas pelo usuário:
1. O programa será mais fácil de entender, fazer correções e de fazer debug.
2. Funções se tornam código reutilizável para serem inseridas em outros programas.
3. Um programa grande pode ser dividido em partes menores, logo, um grande projeto
pode ser dividido entre vários programadores.

*/

#include <stdio.h>






int main() {

  return 0;
}
