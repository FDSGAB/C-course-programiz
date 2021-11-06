/*

C output:
uma das principais funções de output em C é printf(), a qual envia um output
formatado para a tela e pertence à biblioteca stdio.h.

Todo programa C deve conter a função main(). O código é executado a partir dela.

O reurn 0 no final da main() é o status de saída (Exit status) do programa e é
opcional.

C input:
Em C uma função comum para receber um input do usuário é o scanf(). A função le
input formatado do input padrão como, por exemplo, teclados.

Especificadores de formato para I/O:
int	                        %d
char	                      %c
float	                      %f
double	                    %lf
short int   	              %hd
unsigned int    	          %u
long int    	              %li
long long int	              %lli
unsigned long int     	    %lu
unsigned long long int    	%llu
signed char	                %c
unsigned char	              %c
long double               	%Lf

*/



#include <stdio.h>//Necessário pro printf e pro scanf()



//Exemplo 1 C Output
int Exemplo1()
{
    // Displays the string inside quotations
    printf("C Programming");      //Output: C Programming
    return 0;
}

//Exemplo 2 Integer Output
int Exemplo2()
{
    int testInteger = 5;
    //%d específica que uma variavel int será imprimida no local, a qual é passada depois da virgula
    printf("Number = %d", testInteger); //Output: Number = 5
    return 0;
}


//Exemplo 3 float and double Output
int Exemplo3()
{

    /*
    To print float, we use %f format specifier.
    Similarly, we use %lf to print double values.
    */

    float number1 = 13.5;
    double number2 = 12.4;

    printf("number1 = %f\n", number1);  //Output: number1 = 13.500000
    printf("number2 = %lf", number2);   //Output: number2 = 12.400000
    return 0;
}

//Exemplo 4 Print Characters
int Exemplo4()
{
    char chr = 'a';
    //To print char, we use %c format specifier.
    printf("character = %c", chr);  //Output: character = a
    return 0;
}

//Exemplo 5 Integer Input/Output
int Exemplo5()
{
    int testInteger;
    printf("Enter an integer: ");       //Output: Enter an integer: 4
    //& pega o endereço de memória da variável onde o valor será guardado
    scanf("%d", &testInteger);  //Necessário especificar o tipo de dado lido, no caso, %d
    printf("Number = %d",testInteger);  //Output: Number = 4
    return 0;
}


//Exemplo 6 Float and Double Input/Output
int Exemplo6()
{
    float num1;
    double num2;

    //We use %f and %lf format specifier for float and double respectively.

    printf("Enter a number: ");           //Output: Enter a number: 12.523
    scanf("%f", &num1);
    printf("Enter another number: ");     //Output: Enter another number: 10.2
    scanf("%lf", &num2);

    printf("num1 = %f\n", num1);          //Output: num1 = 12.523000
    printf("num2 = %lf", num2);           //Output: num2 = 10.200000

    return 0;
}

//Exemplo 7 C Character I/O
int Exemplo7()
{
    char chr;
    printf("Enter a character: ");  //Output: Enter a character: g
    scanf("%c",&chr);
    printf("You entered %c.", chr);  //Output: You entered g
    return 0;

    /*
    Quando o usuário coloca um caracter, o caracter não é guardado, mas sim
    seu valor de inteiro correspondente à tabela ASCII.

    Se especificarmos um char com %c no printf() seu valor será impresso como
    texto e se utilizarmos %d, seu valor de inteiro ASCII será impresso.

    */
}

//Exemplo 8 ASCII Value
int Exemplo8()
{
    char chr;
    printf("Enter a character: "); //Output: Enter a character: g
    scanf("%c", &chr);

    // When %c is used, a character is displayed
    printf("You entered %c.\n",chr);  //Output: You entered g.

    // When %d is used, ASCII value is displayed
    printf("ASCII value is %d.", chr);  //Output: ASCII value is 103.
    return 0;
}

//Exemplo 9 I/O Multiple Values (input e output de valores multiplos)
int Exemplo9()
{
    int a;
    float b;

    printf("Enter integer and then a float: ");

    // Taking multiple inputs
    scanf("%d%f", &a, &b);

    printf("You entered %d and %f", a, b);
    /*
    Output:
    Enter integer and then a float: -3
    3.4
    You entered -3 and 3.400000
    */

    return 0;
}



int main () {


  /*

  Programa #1


  int age;


  printf("Enter input value: ");
  //Recebe um valor do usuário, no caso, um valor de int
  scanf("%d", &age); //Tem um data specifier (%d) o & pega o endereço da memória da variável

  printf("Age = %d", age);

  */


  /*

  Programa #2


  double number;
  char alphabet;

  printf("Enter double input: ");
  scanf("%lf", &number);

  printf("Enter character input: ");
  scanf("\n%c", &alphabet);

  printf("Number: %lf", number);
  printf("\nCharacter: %c", alphabet);

  */

  double number;
  char alphabet;

  //input multiplo
  printf("Enterinput values: ");
  scanf("%lf %c", &number, &alphabet);

  printf("Number: %lf", number);
  printf("\nCharacter: %c", alphabet);

  return 0;
}
