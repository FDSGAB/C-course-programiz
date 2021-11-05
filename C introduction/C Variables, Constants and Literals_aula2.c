/*

Variável:
Localização de memória onde se armazena um valor/informação
Dá-se um nome único para cada localização ou variável (identificador)

1. Não se pode declarar uma variavel com um espaço estre as palavras
Ex: int minha idade = 24; //ERRO

2. Não se pode começar o nome de uma variável com um número
Ex: int 1numero = 22; //ERRO

3. Não podem ser utilizadas palavras-chave da língua C
Ex: int if = 2; //ERRO

É legal procurar dar nomes bons às variaveis que facilitem a compreensão do
programa

Em C não é possível modificar o tipo de uma variável:
int number = 5;      // integer variable
number = 5.5;        // error não deveria ser decimal
double number;       // error não pode mudar o tipo para double (decimal)


Literals (Valores literais):
Data que representa valores fixos e podem ser utilizados diretamente
no código.
Ex:
números como 1, 5.5, 45
caracteres como 'c', '1', ' '

Inteiros (números sem casas decimais ou parte fracionária):
três tipos de inteiros em C:
Decimal: 0, -9, 22 etc
Octal: 021, 077, 033 etc  //Base Octal começa com 0
Hexadecimal: 0x7f, 0x2a, 0x521 etc //Base Hexadecimal começa com 0x


Literals de ponto flutuante (float ou double) (literal de número com parte
decimal ou fracionária)
Ex:
-2.0
0.0000234
-0.22E-5 // -0.22E-5 = -0.22*10^-5


Caracter (literal composto por algum dígito dentro de aspas simples '')
Ex:
'a'
'b'
'3'
')'
'F'


Escape sequences (Sequências de escape) são utilizadas para usar caracteres que
não podem ser digitados ou tem significado especial em C como: \n, tab
horizontal, interrogação etc
Ex:
Escape Sequences	 Character
\b	               Backspace
\f	               Form feed
\n	               Newline
\r	               Return
\t	               Horizontal tab
\v	               Vertical tab
\\	               Backslash
\'	               Single quotation mark
\"	               Double quotation mark
\?	               Question mark
\0	               Null character



String Literals (strings) é uma sequência de caracteres, para ser represntado,
utiliza-se aspas duplas ("").
Ex:
"good"                  //string constant
""                     //null string constant
"      "               //string constant of six white space
"x"                    //string constant having a single character.
"Earth is round\n"         //prints string with a newline


Declaração de constantes:
const double PI = 3.14; //utiliza-se a palavra chave "const" o tipo, o identificador e o valor
const double PI = 3.14;
PI = 2.9; //Error não é possível alterar uma constante

outro jeito de se declarar constante (começo do programa, junto aos headers):
#define PI 3.14
#define c 299792458  // speed of light



*/



#include <stdio.h>


int main() {
//Usa-se ';' para indicar o fim de um comando


//Exemplo de criação de uma variável do tipo inteiro
int idade;      //Variável criada com um valor aléatorio nela

//Armazenamento de valor inteiro na Variável
idade = 25;     //Muda o valor armazenado anterior para esse

//Ou:
int idade = 25; //Cria a variável e já atribui um valor a ela (inicialização)

//Impressão em C
printf("c-programming");       //Precisa da biblioteca stdio.h

//Imprimir Variável
printf("Idade: %d", idade);    //%d imprime inteiros (especificador)

//Mudança de valor
idade = 35;

printf("\nNova idade: %d", idade);

int firstNumber = 33;
printf("firstNumber = %d", firstNumber);

//Passando o valor de uma variável para outra
int secondNumber = firstNumber;
printf("secondNumber = %d", secondNumber);

//Declrar várias variáveis em uma mesma linha:
int variable1, variable2 = 25;

//Mudando uma varíavel char ao longo do código
char ch = 'a';
// some code
ch = 'l';



  return 0;
}
