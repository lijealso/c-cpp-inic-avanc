#include <iostream>
using namespace std;

void mostra_soma (int numero1, int numero2); // prototipo
int retorna_soma (int numero1, int numero2); // prototipo

int main (void)
{
    int a = 5;
    int b = 10;

    cout << "Insira valor de a: " << endl;
    cin >> a;

    cout << "Insira valor de b: " << endl;
    cin >> b;

    mostra_soma (a, b);

    cout << "Retorna a + b = " << retorna_soma (a, b) << endl;

    return 0;
}

void mostra_soma (int numero1, int numero2)
{
    cout << "valor de a + b = " << numero1 +  numero2 << endl;
}

int retorna_soma (int numero1, int numero2)
{
    return numero1 + numero2;
}
