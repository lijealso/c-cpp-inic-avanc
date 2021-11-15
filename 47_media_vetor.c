#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float soma  = 0;
    int tamanho;

    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &tamanho);

    float vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
        {
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
        }

        printf("A media = %f\n", soma / tamanho);

return 0;
}
