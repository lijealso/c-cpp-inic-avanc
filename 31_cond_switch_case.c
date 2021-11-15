#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

    int a = 6;
    char b = 'x';

    switch(a)
    {
        case 1:
            printf("Opcao escolhida é 1");
            break;
        case 2:
            printf("Opcao escolhida é 2");
            break;
        case 3:
            printf("Opcao escolhida é 3");
            break;
        case 4:
            printf("Opcao escolhida é 4");
            break;
        case 5:
            printf("Opcao escolhida é 5");
            break;
        default:
            printf("Unknown");
            break;
    }

    switch(b)
    {
        case 'x':
            printf("A letra é x");
            break;
        default:
            printf("Unknown");
            break;
    }

return 0;
}
