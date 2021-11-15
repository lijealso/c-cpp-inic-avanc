#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

// ler 2 notas; mostrar valor absoluto da diferença entre as notas

    float nota1;
    float nota2;

    printf("Insira a nota 1: \n");
    scanf("%f", &nota1);

    printf("Insira a nota 2: \n");
    scanf("%f", &nota2);

    printf("Resultado: %f", fabs(nota1 - nota2));

return 0;
}
