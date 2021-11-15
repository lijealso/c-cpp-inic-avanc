#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char palavra[256];

    printf("Digite uma palavra:\n");

    // limpar o buffer
    setbuf(stdin, 0);

    fgets(palavra, 256, stdin);

    // colocar \0 no fim da palavra
    palavra[strlen(palavra) - 1] = '\0';

    printf("A palavra = %s\n", palavra);


return 0;
}
