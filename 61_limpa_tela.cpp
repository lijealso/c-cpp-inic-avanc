#include <iostream>
using namespace std;

void limpa_tela (void);

int main (void)
{
    int a;

    cout << "Digite um valor: \n";
    cin >> a;
    limpa_tela();
    cout << "O valor = " << a << endl;

    return 0;
}

void limpa_tela (void)
{
    system("cls");
}
