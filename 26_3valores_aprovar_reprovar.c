#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

// ler 3 notas, calcular média
// se > 7 informar aprovado, else reprovado

float a, b, c;
float media;

    printf("Insira 3 valores: \n");
    scanf("%f %f %f", &a, &b, &c);
    media = (a + b + c)/3;

    if(media > 7)
    {
        printf("Média: %.3f\n", media);
        printf("Aprovado");
    }
    else
    {
        printf("Média: %.3f\n", media);
        printf("Reprovado");
    }
return 0;
}
