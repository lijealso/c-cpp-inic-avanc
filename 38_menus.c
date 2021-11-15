#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int opcao;

    while(opcao < 1 || opcao > 3)
    {

    printf("Escolha um opcao:\n");
    printf("1 - Opcao 1\n");
    printf("2 - Opcao 2\n");
    printf("3 - Opcao 3\n");

    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
        printf("Opcao 1 foi a escolhida");
        break;

        case 2:
        printf("Opcao 2 foi a escolhida");
        break;

        case 3:
        printf("Opcao 3 foi a escolhida");
        break;

        default:
        printf("Opcao invalida");
        break;
    }

    }

return 0;
}
