#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> // adicionado

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

int a = 1;
int b = 10;

    while(a <= 10) // imprime de 1 a 10
    {
        printf("%d\n", a);
        a = a + 1; // ou a++
    }

    while(b >= 1) // imprime de 1 a 10
    {
        printf("%d\n", b);
        b = b - 1; // ou b--
    }

return 0;
}
