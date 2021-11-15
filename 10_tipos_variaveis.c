#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese");

    // imprime olá
    printf("Olá\n");

    // ler valor inteiro
    int a = 50;
    printf("O valor de a é = %d\n", a);
    scanf("%d", &a);
    printf("O novo valor de a é = %d\n", a);

    // ler valor float
    float b = 5.5;
    printf("O valor de b é = %.4f\n", b);
    scanf("%f", &b);
    printf("O novo valor de b é = %.4f\n", b);

    // ler valor char
    char c = 't';
    printf("O valor de c é = %c\n", c);
    fflush(stdin); // limpar o buffer de input
    scanf("%c", &c);
    printf("O novo valor de  é = %c\n", c);



return 0;
}
