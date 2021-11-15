#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

int a = 10;

    if(a>5 && a<15)
        printf("A variável está entre 5 e 15\n");

    if(a>5 || a>15)
     printf("A variável é maior que 5 mas nao é maior que 15\n");

    if( (a<5 && a<15) || a<7 );
    printf("É menor que 15, mas nao é menor que 5; mas é menor que 7\n");

return 0;
}
