#include <iostream>
using namespace std;

 void mais_um (int numero); // prototipo
 int menos_um (int numero); // prototipo

int main (void)
{
    int a;

    cout << "Insira um valor: " << endl;
    cin >> a;

    mais_um(a);
    cout << "valor - 1 = " << menos_um(a) << endl;

    return 0;
}

void mais_um (int numero)
{
    cout << "valor + 1 = " << numero + 1 << endl;
}

int menos_um (int numero)
{
    return numero - 1;
}
