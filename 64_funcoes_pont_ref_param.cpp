#include <iostream>
using namespace std;

int retorna_mais_10 (int numero); // prototipo
void ponteiro_mais_10 (int *numero); // prototipo

int main (void)
{
    int a = 5;

    cout << "Valor de a = " << a << endl;

    a = retorna_mais_10(a);

    cout << "Valor de a + 10 = " << a << endl;

    ponteiro_mais_10(&a);

    cout << "Ponteiro + 10 = " << a << endl;

    return 0;
}

int retorna_mais_10 (int numero)
{
    return numero + 10;
}

void ponteiro_mais_10 (int *numero)
{
    *numero = *numero + 10;
}
