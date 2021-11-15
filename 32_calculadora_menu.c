#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

// ler 2 valores
// menú de 4 opções, 1 para cada operação aritmética
// mostrar o resultado da operação escolhida

float a;
float b;
char letra;

    printf("Insira 2 valores: \n");
    scanf("%f %f", &a, &b);

    fflush(stdin);

    printf("Escolha uma opcao:\n");
    printf("1 - adicionar prima a\n");
    printf("2 - subtrair prima s\n");
    printf("3 - dividir prima d\n");
    printf("4 - multiplicar prima m\n");

    scanf("%c", &letra);

    switch(letra)
    {
        case 'a':
        printf("soma: %f", a+b);
        break;
        case 's':
        printf("substracao: %f", a-b);
        break;
        case 'd':
        printf("divisao: %f", a/b);
        break;
        case 'm':
        printf("multiplicacao: %f", a*b);
        break;
        default:
        printf("operacao inválida");

    }

return 0;
}
