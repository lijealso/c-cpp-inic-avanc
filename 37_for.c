#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int cont;

    // tabuada do 5
    for(cont = 1 ; cont <= 10 ; cont++)
        printf("5 vezes %d = %d\n", cont, cont * 5);

    // contar de 2 em 2
    for(cont = 1 ; cont <= 20 ; cont+=2)
        printf("%d\n", cont);

    // contagem regressiva
    for(cont = 10 ; cont >= 1 ; cont--)
        printf("%d\n", cont);

return 0;
}
