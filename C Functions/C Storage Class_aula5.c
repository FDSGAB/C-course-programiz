/*

C Storage Class


Toda variável em C tem duas propriedades: tipo e storage class (classe dearmazenamento).
O tipo se refere ao tipo de dado de uma variável e o storage class determina o
escopo, visibilidade e tempo de vida de uma variável.

Existem 4 tipos de storage class:
1. automatic (local)
2. external  (global)
3. static
4. register

Variável local:
Uma variável declarada dentro de um bloco é chamadaa de variável automática
(automatic) ou local. Variáveis locais só existem dentro do bloco em que elas
foram declaradas. Por exemplo:

#include <stdio.h>

int main(void) {

  for (int i = 0; i < 5; ++i) {
     printf("C programming");
  }

 // Error: i is not declared at this point
  printf("%d", i);
  return 0;
}

Ao rodar o código acima, haverá um erro no printf("%d", i), pois a variável i é
declarada dentro do loop for, fora do loop, ela não está declarada. Outro exemplo:

int main() {
    int n1; // n1 is a local variable to main()
}

void func() {
   int n2;  // n2 is a local variable to func()
}

No exemplo acima, n1 é uma variável local para a main() e n2 é uma variável local
para func(). Isso significa que não é possível acessar a variável n1 na func(), pois
ela só existe na main(). Do mesmo jeito é impossível de se acessar a variável n2
da func() na main(), pois ela só existe na func().


Variável global:
Variáveis globais são variáveis que são declaradas fora de todas as funçoes do
programa (também conhecidas como external). Essas variáveis são acessíveis de
qualquer função do programa.

Suponha que você tenha declarado uma variável global em uma file1 (arquivo 1). Se
você tentar acessar essa variável de um arquivo diferente (file2), o compilador irá
reclamar. Para resolver esse problema, a palavra-chave external  é utilizada na
file2 para indicar que a variável externa está declarada em outro arquivo.


Variável de registro (register variable):
A palavra-chave keyword é utilizada para declarar variáveis de registro. Era para
variáveis de registro serem mais rápidas do que variáveis locais. Entretanto,
compiladores modernos são muito bons em otimizar o código, e a chance de aumentar a
velocidade de um programa usando essas variáveis de registro.


Variável estática (Static Variable):
Uma variável estática é declarada usando a palavra-chave static.
Ex:

static int i;

O valor de uma variável estática persiste até o fim do programa.






*/

#include <stdio.h>


//Exemplo 1 Variável Global:
void display();

int n = 5;  // global variable

int Exemplo1()
{
    ++n;
    display();
    /*
    Output:
    n = 7
    */
    return 0;
}

void display()
{
    ++n;
    printf("n = %d", n);
}





//Exemplo 2 Variável estática
void display();

int main()
{
    display();
    display();
    /*
    Output:
    6 11

    Quando a primeira chamada da função display() ocorre, c é inicializado como
    uma variável estática do tipo int com c=1. Seu valor é acrescido de 5 e
    imprimi-se 6 como resultado.
    Na segunda chamada, c não é inicializado de novo como 1, pois é estático (ele mantem
    o valor 6 armazenado anteriormente). O valor de c é novamente acrescido de 5
    o que faz com que o programa imprima 11.

    */
}
void display()
{
    static int c = 1;
    c += 5;
    printf("%d  ",c);
}

int main(){

  return 0;
}
