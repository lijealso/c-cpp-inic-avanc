#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

int a = 10;

    if(a>5 && a<15)
        printf("A vari�vel est� entre 5 e 15\n");

    if(a>5 || a>15)
     printf("A vari�vel � maior que 5 mas nao � maior que 15\n");

    if( (a<5 && a<15) || a<7 );
    printf("� menor que 15, mas nao � menor que 5; mas � menor que 7\n");

return 0;
}
