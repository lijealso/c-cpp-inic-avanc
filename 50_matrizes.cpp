#include <iostream>
#include <string>

using namespace std;

int main (void)
{
    int matriz[2][2];
    int i, j;

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> matriz[i][j];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cout << matriz[i][j] << endl;


    return 0;
}
