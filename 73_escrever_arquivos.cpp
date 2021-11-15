#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int main(void)
{
    ofstream arquivoSaida;

    // abre ficheiro ou cria novo se não existia
    arquivoSaida.open("teste.txt", std::ios::app);

    // Escreve no ficheiro
    arquivoSaida << "Olá Mundo\n";

    // Fecha o ficheiro
    arquivoSaida.close();

    return 0;
}