#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    int linhas, colunas;
    int **matriz;

    cout << "Numero de linhas:" << endl;
    cin >> linhas;
    cout << "Numero de colunas:" << endl;
    cin >> colunas;

    // alocar as linhas
    matriz = (int **) malloc(linhas * sizeof(int *));
    
    // alocar memória para as colunas de cada linha
    for (int i = 0 ; i < linhas ; i++)
    {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    for (int i = 0 ; i < linhas ; i++)
    {
        for (int j = 0 ; j < colunas ; j++)
        {
            matriz[i][j] = i;
            cout << matriz[i][j];
        }
        cout << endl;
    }

    free(matriz);
    return 0;
}
