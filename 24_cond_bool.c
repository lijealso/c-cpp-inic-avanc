#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

    bool a = true;
    bool b = false;

    if(a)
        printf("a é verdadeiro\n");

    if(b)
        printf("b é verdadeiro\n");
        else
        printf("b é falso\n");

    if(!b)
        printf("b é falso\n");

return 0;
}
