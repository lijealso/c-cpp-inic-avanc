#include <iostream>
#include <cstdlib>

using namespace std;

int* alocaVetor(int tamanho)
{
    int *aux;
    aux = (int*) malloc(sizeof(int) * tamanho);
}

int main (void)
{
    int *vetor, tamanho;

    printf ("Qual o tamanho do vetor? \n");
    scanf("%d", &tamanho);

    vetor = alocaVetor(tamanho);

    for (int i = 0 ; i < tamanho ; i++)
        vetor[i] = 80;

        for (int i = 0 ; i < tamanho ; i++)
        printf("%d", *vetor);

    free(vetor);
    
    return 0;
}