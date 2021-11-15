#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

struct palavra
{
    int ordem;
    char letra;
    char texto[256];
};

int main(void)
{

    struct palavra primeiraPalavra;
    primeiraPalavra.ordem = 10;
    primeiraPalavra.letra = 'c';
    strcpy(primeiraPalavra.texto, "palavrinha");

    cout << primeiraPalavra.ordem << endl;
    cout << primeiraPalavra.letra << endl;
    cout << primeiraPalavra.texto << endl;

    struct palavra ListaDePalavras[3];
    ListaDePalavras[0].ordem = 0;
    ListaDePalavras[1].ordem = 1;
    ListaDePalavras[2].ordem = 2;
    ListaDePalavras[0].letra = 'd';
    ListaDePalavras[1].letra = 'f';
    ListaDePalavras[2].letra = 'd';
    strcpy(ListaDePalavras[0].texto, "SimSanhora");
    strcpy(ListaDePalavras[1].texto, "Agora Agora");
    strcpy(ListaDePalavras[2].texto, "Dunas altas");

    // percorrer vetor
    for(int i = 0 ; i < 3 ; i++)
        cout << "Ordem: " << ListaDePalavras[i].ordem << "Letra: " << ListaDePalavras[i].letra << "Palavra: " << ListaDePalavras[i].texto << endl;

    return 0;
}
