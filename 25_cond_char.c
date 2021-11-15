#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

// tabela ASCII : web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm

    char letra = 'x'; // 120

    if(letra == 'x')
        printf("A letra é 'x'\n");

    // código da letra
    printf("Código da letra x é: %d\n", letra);

    if(letra == 120)
        printf("A letra é 'x'\n");

return 0;
}
