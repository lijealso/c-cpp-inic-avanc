#include <stdio.h>
#include <stdlib.h>
#define TAM 3
// verificar se número é primo ou não

int main (void)
{

    int vetor[TAM];
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    printf("Posicao 0 = %d\n", vetor[0]);
    printf("Posicao 1 = %d\n", vetor[1]);
    printf("Posicao 2 = %d\n", vetor[2]);

    // ciclo

    int cont = 0;

    for(cont = 0 ; cont < TAM ; cont++)
        vetor[cont] = vetor[cont] + 1;

    for(cont = 0 ; cont < TAM ; cont++)
            scanf("%d", &vetor[cont]);

    for(cont = 0 ; cont < TAM ; cont++)
        printf("Posicao %d = %d\n", cont, vetor[cont]);


    return 0;
}
