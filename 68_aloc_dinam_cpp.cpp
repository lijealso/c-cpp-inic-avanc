#include <iostream>
#include <cstdlib>
#include <new>
#include <vector>

using namespace std;

int main (void)
{
    int tamanho;
    int conta;

    cout << "Qual o tamanho? " << tamanho << endl;
    cin >> tamanho;

    vector<int> vetor(tamanho);

    for(int i : vetor)
    {
        vetor[i] = vetor[i] + 1;
        cout << vetor[i] << endl;
    }
    
    return 0;
}