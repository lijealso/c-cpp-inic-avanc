#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

// ler 3 valores e informe se são iguais entre si

    float a, b, c;

    printf("Insira 3 valores: \n");
    scanf("%f %f %f", &a, &b, &c);

    printf("Os valores escolhidos são: %f, %f, e %f\n", a, b, c);

    if( (a == b) && (b == c) )
        printf("Triangulo equilatero");
    else if( (a == b) || (b == c) || (c == a) )
        printf("Triangulo isosceles");
    else
        printf("Triangulo escaleno");

return 0;
}
