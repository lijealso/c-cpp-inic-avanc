#include <stdio.h>
#include <stdlib.h>

// verificar se número é primo ou não

int main(int argc)
{
	int i;
	int j;
	int contador = 0;

	printf("Insira um numero:\n");
	scanf("%d", &i);

	for (j = i; j  >= 1 ; j--)
	{
		if(i%j == 0)
			contador++;
	}

	if(i == 1)
		printf("%d nao e numero primo", i);
	if(contador == 2)
		printf("%d e numero primo...\n", i);
	if(contador > 2)
		printf("%d nao e numero primo", i);

return 0;
}
