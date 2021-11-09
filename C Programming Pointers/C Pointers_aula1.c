/*

C Pointers (Ponteiros em C)

Ponteiros são recursos poderosos em C e C++. Antes de aprender sobre ponteiros,
vamos aprender sobre endereços de memória.


Endereços em C:
Se você tem uma variável var em seu programa, &var irá devolver o endereço da
var na memória. Isso é muito usado na função scanf():

scanf("%d", &var);

Na função scanf() o valor informado pelo usuário é armazenado no endereço de
memória da variável var. Por exemplo:

int main()
{
  int var = 5;
  printf("var: %d\n", var);

  // Notice the use of & before var
  printf("address of var: %p", &var);
  """
  Output:
  var: 5
  address of var: 2686778

  """
  return 0;
}

Você provavelmente obterá um endereço diferente ao rodar este código.


Ponteiros em C:
Ponteiros ou variáveis ponteiros são variáveis que são utilizadas para armazenar
endereços de memória ao invés de valoress.

Sintaxe de ponteiros:

int* p;     //Aqui foi declarado um ponteiro p do tipo int

Outra forma de declarar ponteiros:

int *p1;
int * p2;

int* p1, p2; //p1 é um ponteiro e p2 é uma variável normal

Atribuindo enderços para ponteiros:
Ex:

int* pc, c;
c = 5;
pc = &c;

Aqui o valor 5 é atribuido para a variável c e o endereço da variável c é atribuido
para o ponteiro pc.


Pegando o valor de itens apontados por ponteiros:
Para pegar o valor de algum item apontado por um ponteiro, utiliza-se o operador
*, por exemplo:

int* pc, c;
c = 5;
pc = &c;
printf("%d", *pc);   // Output: 5

Aqui o endereço de c foi atribuido para o ponteiro pc e para pegar o valor aramazenado
naquele endereço utiliza-se *pc.

IMPORTANTE: No exemplo acima pc é um ponteiro e *pc não. Não se pode e não se deve
fazer algo como: *pc = &c XXXX
Além disso, o operador * é chamado de operador de derreferência (quando trabalhando
com ponteiros). Ele opera em um ponteiro e devolve o valor armazenado na memória de
onde o ponteiro aponta.


Alterando o valor apontado por ponteiros:
Ex:
int* pc, c;
c = 5;
pc = &c;
c = 1;
printf("%d", c);    // Output: 1
printf("%d", *pc);  // Ouptut: 1

O endereço de c é passado para o ponteiro pc, em seguida o valor de c é alterado
para 1 e, como o endereço de pc é o mesmo que o de c, *pc devolve o valor 1. Outro
exemplo:

int* pc, c;
c = 5;
pc = &c;
*pc = 1;
printf("%d", *pc);  // Ouptut: 1
printf("%d", c);    // Output: 1

Novamente, aqui o endereço de c é atribuido ao ponteiro pc. Em seguida, troca-se
*pc para um através da linha *pc = 1 e, como o endereço de c e pc são o mesmo, o
valor de c é modificado para 1. Um último exemplo:

int* pc, c, d;
c = 5;
d = -15;

pc = &c; printf("%d", *pc); // Output: 5
pc = &d; printf("%d", *pc); // Ouptut: -15

Inicialmente o endereço de c é passado para o ponteiro pc, utilizando-se pc = &c.
E como c = 5, *pc devolve 5. Em seguida, o endereço de d é atribuido para o ponteiro pc,
utilizando-se pc = &d. E como d = -15, *pc retorna -15.



Erros comuns ao se utilizar ponteiros:
Suponha que você quer que um ponteiro pc aponte para o endereço de uma variável
c:

int c, *pc;

// pc is address but c is not
pc = c;  // Error

// &c is address but *pc is not
*pc = &c;  // Error

// both &c and pc are addresses
pc = &c;  // Not an error

// both c and *pc values
*pc = c;  // Not an error

A seguir, um exemplo de sintaxe um pouco confuso para iniciantes:

#include <stdio.h>
int main() {
   int c = 5;
   int *p = &c;

   printf("%d", *p);  // 5
   return 0;
}

Por que não deu erro na instrução int *p = &c ?
Porque
int *p = &c;
é equivalente a
int *p;
p = &c;
Em ambos os casos estamos criando um ponteiro p e não acessando um valor em
p (*P). Para evitar confusão, é possível passar a seguinte instrução:

int* p = &c;

*/

#include <stdio.h>


//Exemplo Funcionamento de Ponteiros
#include <stdio.h>
int main()
{
   int* pc, c;

   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22

   pc = &c;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 22

   c = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11

   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 2
   /*
   Output:
   Address of c: 2686784
   Value of c: 22

   Address of pointer pc: 2686784
   Content of pointer pc: 22

   Address of pointer pc: 2686784
   Content of pointer pc: 11

   Address of c: 2686784
   Value of c: 2


   Explicação do programa:
   1. int* pc, c;
   Aqui um ponteiro pc e uma variável c (ambos do tipo int) são declarados. Como
   o ponteiro pc não foi inicializado, ele aponta para algum endereço aleatóro ou
   para endereço nenhum. E a variável c tem um endereço fixo, mas tem um valor
   aleatório.

   2. c=22
   O valor 22 é atribuido para a variável c. Logo, o valor 22 é armazenado no local
   de memória em que c está.

   3. pc = &c
   Aqui o ponteiro pc deixa de apontar para um lugar aleatório ou lugar nenhum e
   passa a apontar para o endereço de memória da variável c.

   4. c = 11
   Atribui o valor 11 para a variável c (muda o valor contido na memória em que c
   está).

   5. *pc = 2
   Essa instrução faz com que o valor contido na memória para a qual o ponteiro
   pc aponta seja modificado para 2. No caso, como pc aponta para c, o valor
   contido no endereço de memória de c será alterado para 2.

   */
   return 0;
}


int main (){


  return 0;
}
