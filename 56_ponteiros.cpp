#include <iostream>

using namespace std;

int main (void)
{
    int a = 20;
    int *ponteiro;

    ponteiro = &a;

    cout << "Valor de a = " << a << endl;

    // endere�o da vari�vel a
    cout << "Endereco de a = " << &a << endl;

    // Conte�do do ponteiro = a
    cout << "Conteudo de ponteiro = " << *ponteiro << endl;

    // endere�o de a
    cout << "Endereco de a = ponteiro = " << ponteiro;

    return 0;
}
