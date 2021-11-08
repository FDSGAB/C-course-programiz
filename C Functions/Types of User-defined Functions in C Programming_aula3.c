/*

Types of User-defined Functions in C Programming

Abaixo estão apresentados 4 exemplos de um progrma que verifica se o número inserido
é primo ou não. Para os 4 exemplos foram utilizadas metodologias diferentes para
se obter o mesmo resultado.

No Exemplo 1, a função recebe um número do usuário, checa se é um número primo ou
não e imprime o resultado. Como a função checkPrimeNumber() na main() não tem nada
dentro do parênteses, isso significa que a dunção não recebe argumentos. O tipo de
retorno é void, logo, a função não retorna nenhum valor.

No Exemplo 2, a função getInteger() não recebe argumento, mas retorna uma valor
inteiro (int) para a main() que é passado para a variável n. Nesse progrma, a
função getInteger() pega o número do usuário e passa para a main() que retorna se
ele é primo ou não.

No Exemplo 3, o npumero a ser checado é inputado pelo usuário na main() e então
esse valor é passado como argumento para a fução checkPrimeAndDisplay(n) que
recebe o número n como parâmetro, verifica se ele é primo e imprime o resultado.

No Exemplo 4, o programa lê o número a ser analisado na main() e em seguida utiliza-o
como o argumento n da função checkPrimeNumber(n), a qual retorna um valor que é
atribuido à variável flag que indicará se o número n é primo ou não numa estrutura
if...else.


Qual é a melhor maneira de se realizar esse programa?
Depende do problema que está tentando solucionar. Neste caso uma alternativa melhor
seria o Exemplo 4, pois a função não recebe um input e nem imprime nada. Ela somente
verifica se o número é primo ou não. Lembrando que uma função deve, principalmente,
realizar uma tarefa específica.

*/

#include <stdio.h>




/*

Exemplo 1 função sem argumentos passados e sem return
void checkPrimeNumber();

int main()
{
    checkPrimeNumber();    // argument is not passed
    return 0;
}

// return type is void meaning doesn't return any value
void checkPrimeNumber()
{
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
}

*/








/*
Exemplo 2 Sem argumentos passados mas com um valor de retorno
int getInteger();

int main()
{
    int n, i, flag = 0;

   // no argument is passed
    n = getInteger();

    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0){
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);

    return 0;
}

// returns integer entered by the user
int getInteger()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    return n;
}

*/











/*

Exemplo 3 função com argumento mas sem return
void checkPrimeAndDisplay(int n);

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    // n is passed to the function
    checkPrimeAndDisplay(n);

    return 0;
}

// return type is void meaning doesn't return any value
void checkPrimeAndDisplay(int n)
{
    int i, flag = 0;

    for(i=2; i <= n/2; ++i)
    {
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("%d is not a prime number.",n);
    else
        printf("%d is a prime number.", n);
}

*/










/*

Exemplo 4 função com argumento que retorna um valor

int checkPrimeNumber(int n);

int main()
{
    int n, flag;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    // n is passed to the checkPrimeNumber() function
    // the returned value is assigned to the flag variable
    flag = checkPrimeNumber(n);

    if(flag == 1)
        printf("%d is not a prime number",n);
    else
        printf("%d is a prime number",n);

    return 0;
}

// int is returned from the function
int checkPrimeNumber(int n)
{
    int i;

    for(i=2; i <= n/2; ++i)
    {
        if(n%i == 0)
            return 1;
    }

    return 0;
}


*/


int main() {

  return 0;
}
