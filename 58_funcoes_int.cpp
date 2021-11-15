#include <iostream>
using namespace std;

int return_10(void); // prototipo
float return_float(void); // prototipo

int main (void)
{
    int a;
    float b;

    a = return_10();
    b = return_float();

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

int return_10(void)
{
    cout << "cout da funcao" << endl;
    return 10;
}

float return_float(void)
{
    cout << "cout da funcao" << endl;
    return 10.8432423;
}
