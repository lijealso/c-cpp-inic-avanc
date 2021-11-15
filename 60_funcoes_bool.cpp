#include <iostream>
#include <cstdbool>
using namespace std;

_Bool return_bool(void); // prototipo

int main (void)
{
    _Bool teste;

    teste = return_bool();

    cout << "teste = " << teste << endl;

    if(teste)
    {
        cout << "verdadeiro..." << endl;
    }
    else
    {
        cout << "falso..." << endl;
    }

    return 0;
}

_Bool return_bool(void)
{
    cout << "cout da funcao" << endl;

    return false;
}
