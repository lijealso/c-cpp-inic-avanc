#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

    int a = 6;
    char b = 'x';
    int opcao = 3;

    if(a==5)
        printf("A variável = 5\n");
    else
        printf("A variável não é 5\n");

    if(a%2==0)
        printf("A variável é par\n");
    else
        printf("A variável é impar\n");

    if(b == 'x')
        printf("A variável é x\n");
    else
        printf("A variável não é x\n");

    if(opcao == 1)
        printf("A variável é igual a 1\n");
        else if (opcao == 2)
            printf("A variável é igual a 2\n");
            else
            printf("Nao é 1 nem 2\n");



return 0;
}
