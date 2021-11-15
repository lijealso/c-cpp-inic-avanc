#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

// ler 3 números inteiros de uma só vez
// resultado da multiplicação numa variável
// mostrar a variável

    int x, y, z;
    int resultado;

    scanf("%d %d %d", &x, &y, &z);
    resultado = x * y * z;

    printf("Resultado: %d", resultado);

return 0;
}
