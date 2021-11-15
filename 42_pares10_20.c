#include <stdio.h>
#include <stdlib.h>

// imprimir números pares de 10 a 20

int main (void)
{

/*
    int i = 10;

    while( i <= 20)
    {
        if ( i%2 == 0 )
        {
        printf("%d\n", i);
        }
    i++;
    }
*/
/*
    int i = 10;

    do
    {
        if ( i%2 == 0 )
        printf("%d\n", i);
        i++;
    }
    while( i <= 20 );
*/
    int i = 0;

    for( i = 10 ; i <= 20 ; i++ )
        if ( i%2 == 0 )
        printf("%d\n", i);

return 0;
}
