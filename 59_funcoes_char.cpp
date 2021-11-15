#include <iostream>
using namespace std;

char return_char(void); // prototipo

int main (void)
{
    char letra;

    letra = return_char();

    cout << "letra = " << letra << endl;

    return 0;
}

char return_char(void)
{
    cout << "cout da funcao" << endl;
    // valor ASCII de A
    return 65;
}
