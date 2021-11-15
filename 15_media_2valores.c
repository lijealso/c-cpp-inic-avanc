#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

// ler 2 notas e mostrar média entre elas

    float nota1, nota2;
    float media;

    printf("Insira a nota 1:\n");
    scanf("%f", &nota1);
    printf("Insira a nota 2:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;
    printf("A média das notas: %f", media);

return 0;
}
