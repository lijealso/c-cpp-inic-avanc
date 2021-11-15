#include <iostream>

using namespace std;

int main (void)
{
    int a = 20;
    int *ponteiro;

    ponteiro = &a;

    cout << "Valor de a = " << a << endl;

    // endereço da variável a
    cout << "Endereco de a = " << &a << endl;

    // Conteúdo do ponteiro = a
    cout << "Conteudo de ponteiro = " << *ponteiro << endl;

    // endereço de a
    cout << "Endereco de a = ponteiro = " << ponteiro;

    return 0;
}
