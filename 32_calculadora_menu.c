#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

// ler 2 valores
// men� de 4 op��es, 1 para cada opera��o aritm�tica
// mostrar o resultado da opera��o escolhida

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
        printf("operacao inv�lida");

    }

return 0;
}
