/*

Data types (tipos de dados):
Em C os tipos de dados são declarados para variáveis, pois isso determina o tipo
e o tamanho de de data associado à variável.
Ex:

int myVar;

A variável acima é do tipo int (inteiro) e o tamanho de um dado do tipo int é de
4 bytes.

Tipos básicos:

Type	                  Size (bytes)	                   Format Specifier
int	                    at least 2, usually 4	           %d, %i
char	                  1	                               %c
float	                  4	                               %f
double	                8	                               %lf
short int	              2 usually	                       %hd
unsigned int            at least 2, usually 4	           %u
long int	              at least 4, usually 8	           %ld, %li
long long int	          at least 8	                     %lld, %lli
unsigned long int	      at least 4	                     %lu
unsigned long long int	at least 8	                     %llu
signed char	            1	                               %c
unsigned char	          1	                               %c
long double	            at least 10, usually 12 or 16	   %Lf



int (inteiros):
Representam números inteiros que vão dos negativos aos positivos incluindo 0.
Declarando int e declarando vários int:
int id;
int id, age;

O tamanho de um int geralmente é de 4 bytes (ou 32 bits) e pode armazenar Valores
da ordem de 2^32 de -2147483648 a 2147483647.


float e double (núemeros com casa decimal ou fracionários, números reais):
Ex de declaração:
float salary;
double price;
float normalizationFactor = 22.442e2; //representado em exponencial

A diferença entre float e double é que o float ocupa 4 bytes de memória e o
double ocupa 8 bytes de memória (dobro da precisão do float).


char (somente um caracter):
Declara-se variávei do tipo caractér com esse tipo.
Ex:
char test = 'h';

O tamanho desse tipo de data é de 1 byte.


void (tipo incompleto, vazio):
Um tipo de dado incompleto que significa nada ou sem tipo. Ausência de tipo.
Geralmente utilizado com uma função que não retorna nada. Não é possível criar
variáveis do tipo void.


short e long (especificadores de tipo caso necessite de um número maior ou menor):
Ex:
long a;           //Pode armazenar valores inteiros
long long b;      //Pode armazenar valores inteiros
long double c;    //Pode armazenar valores float (números reais)

Se o espectro de números utilizados estiver entre [−32,767, +32,767], pode se
usar o tipo short.
Ex:
short d;

***É possível checar o tamanho de uma variável utilizando-se a função sizeof().***

signed and unsigned
Esses tipos servem como modificadores de tipo. É possível alterar o tamanho do
armazenamento de dados do tipo.
Ex:
unsigned int x;  //Aceita valores maiores ou igual a 0 até 2^32-1
int y;           //Aceita valores de -2^31 a 2^31-1


Outros tipos de dados são:
bool Type;
Enumerated type
Complex types


Tipos de dados derivados:
São tipos de dados derivados dos tipos de dados fundamentais. Como por exemplo:
arrays, pointers(ponteiros), tipos de função, estruturas etc.


*/


#include <stdio.h>


int main () {

    short a;
    long b;
    long long c;
    long double d;


    /*
    sizeof() é uma função que retorna a quantiade de bytes utilizados por um
    certo tipo de dado.
    */
    printf("size of short = %d bytes\n", sizeof(a));
    printf("size of long = %d bytes\n", sizeof(b));
    printf("size of long long = %d bytes\n", sizeof(c));
    printf("size of long double= %d bytes\n", sizeof(d));

  return 0;
}
