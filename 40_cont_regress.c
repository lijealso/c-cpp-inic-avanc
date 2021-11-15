#include <stdio.h>
#include <stdlib.h>

int main (void)
{

    int i = 10;
/*
    while( i >= 0)
    {
        printf("%d\n", i);
        i--;
    }
*/
/*
    do
    {
        printf("%d\n", i);
        i--;
    }
    while( i >= 0 );
*/

    for( i = 10 ; i >= 0 ; i-- )
        printf("%d\n", i);


return 0;
}
