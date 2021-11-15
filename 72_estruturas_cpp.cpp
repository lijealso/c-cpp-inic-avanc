#include <iostream>
#include <cstdlib>
#include <string>
#include <new>

using namespace std;

// estrutura para frutas

struct Fruta
{
    string cor;
    string nome;
};


int main(void)
{
    // ponteiro para a estrutura
    Fruta *primeiraFruta = new Fruta;

    // Modificar valores
    primeiraFruta->cor = "Amarela";
    primeiraFruta->nome = "Banana";

    cout << "Nome da fruta 1: " << primeiraFruta->nome << endl;
    cout << "Cor da fruta 1: " << primeiraFruta->cor << endl;

    // lista de frutas

    Fruta *ponteiroListaFrutas = new Fruta[2];

    // Modificar valores
    ponteiroListaFrutas[0].cor = "Vermelho";
    ponteiroListaFrutas[0].nome = "Morango";
    ponteiroListaFrutas[1].cor = "Verde";
    ponteiroListaFrutas[1].nome = "Kiwi";

    cout << "Nome fruta 1: " << ponteiroListaFrutas[0].nome << endl;
    cout << "Cor da fruta 1: " << ponteiroListaFrutas[0].cor << endl;
    cout << "Nome fruta 2: " << ponteiroListaFrutas[1].nome << endl;
    cout << "Cor da fruta 2: " << ponteiroListaFrutas[1].cor << endl;

    return 0;
}