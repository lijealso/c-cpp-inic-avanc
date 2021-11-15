#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

int a = 5;
int b = 3;

printf("A soma de a (%d) e b (%d) é: %d\n", a, b, a + b);

printf("A subtracao de a (%d) e b (%d) é: %d\n", a, b, a - b);

printf("A multiplicacao de a (%d) e b (%d) é: %d\n", a, b, a * b);

printf("A divisao de a (%d) e b (%d) é: %d\n", a, b, a / b);

printf("O resto da divisao entre (%d) e b (%d) é: %d\n", a, b, a%b);

printf("O valor absoluto de -3 é = %d", abs(-3));

return 0;
}
