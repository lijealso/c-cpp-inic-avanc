#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> // adicionado

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

    srand( (unsigned)time(NULL) );

    int aleatorio = rand() % 10; // número aleatório de 0 a 10

    int aleatorio2 = (rand() % 9) + 1;


    printf("%d\n", aleatorio);
    printf("%d\n", aleatorio2);


return 0;
}
