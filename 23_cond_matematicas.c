#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

    int a = 5;
    int b = 10;
    int c = 15;
    char d = 'r';

    if(a > 2)
        printf("%d é maior que 2\n", a);

    if(c >= b)
        printf("%d é maior ou igual a %d\n", c, b);

    if(a <= 10)
        printf("%d é menor ou igual que 10\n", a);

    if(c != 10)
        printf("%d é diferente de 10\n", a);

    if(d != 'g')
        printf("%c não é 'g'\n", d);


return 0;
}
