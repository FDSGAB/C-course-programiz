/*

C User-defined functions

Uma função é um bloco de código que realiza uma tarefa específica. A linguagem
C permite que você defina funções de acordo com a sua necessidade. Esse tipo de
função é do grupo de funções definidas pelo usuário. Suponha que você precise
criar um círculo e colorí-lo de acordo com o raio e com a cor. Podem ser criadas
duas funções para solucionar esse problema:
- createCircle()
- color()


Protótipo de função (function prototype):
Um protótipo de função é simplesmente uma declaração de uma função que especifica
o nome, os parâmetros e o tipo de retorno de uma função. Não contém um corpo/bloco
de código. Um portótipo de função informa o compilador de que essa função talvez
seja usada mais tarde no programa.

Sintaxe de um protótipo de função:

returnType functionName(type1 argument1, type2 argument2, ...);

NOME: functionName
TIPO DE RETORNO: returnType
ARGUMENTOS E SEUS TIPOS: type1 argument1, type2 argument2, ...

Um protótipo de função não é necessário se a função for definida antes da main().


Chamando uma função:
O controle do programa é transferido para a função criada pelo usuário quando ela
é chamada.

Sintaxe da chamada de uma função:

functionName(argument1, argument2, ...);

Que é basicamente o nome da função com os argumentos necessários dentro do parênteses.


Definição de uma função:
A definição de uma função contém o bloco de código que especifíca o que a função
realiza.

Sintaxe da definição de uma função:

returnType functionName(type1 argument1, type2 argument2, ...)
{
    //body of the function
}

Quando a função é chamada, o controle do programa é transferido para a definição
da função, fazendo com que o compilador comece a executar o código dentro do corpo
da função.


Passando argumentos para uma função:
Em programação, argumento se refere à variável passada para a função. No exemplo
abaixo, duas variáveis n1 e n2 são passadas durante a chamada da função.

Os parâmetros a e b aceitam os argumentos passados na definição da função. Esses
argumentos são chamados de parâmetros formais da função.

Os argumentos passados para a função e os parâmetros formais devem combinar, senão,
o compilador voltará com erro. Se n1 é do tipo char, a também deve ser do tipo char.
Se n2 for do tipo float, b também deverá ser do tipo float.

Uma função também pode ser chamada sem se passar argumentos para ela.


Comando return:
O comando return finaliza a execução de uma função e retorna um valor para a
chamada da função. O controle do programa é transferido para a chamada da função
após o comando return. No exemplo abaixo, o valor da variável resultado é retornado
para a função main() e, em seguida, a variável sum recebe esse valor.

Sintaxe do comando return:

return (expression);

ou

return a;

ou

return (a+b);

O tipo de valor retornado da função e o tipo de valor especificado no protótipo
(ou definição) da função devem ser correspondentes.

*/

#include <stdio.h>

//Exemplo de uma função criada pelo usuário chamada addNumbers():
int addNumbers(int a, int b);         // function prototype

int Exemplo1()
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d",sum);

    return 0;
}

int addNumbers(int a, int b)         // function definition
{
    int result;
    result = a+b;
    return result;                  // return statement
}




int main () {

  return 0;
}
