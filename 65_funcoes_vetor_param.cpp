#include <iostream>
using namespace std;

void imprimeVetor(int *vetor, int tamanho)
{
    for (int i = 0 ; i < tamanho ; i++)
        printf("%d\n", vetor[i]);
}

void modificaVetor(int *vetor, int tamanho)
{
    for (int i = 0 ; i < tamanho ; i++)
        vetor[i] = vetor[i] + 1;
}


int main (void)
{
    int v[3] = {1,2,3};

    imprimeVetor(v, 3);

    modificaVetor(v, 3);

    imprimeVetor(v, 3);
    
    return 0;
}

