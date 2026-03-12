
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	float valor, prest;
	printf("Informe o valor de sua compra: ");
	scanf("%f", &valor);
	prest = valor / 5;
	printf(" o valor da sua prestação é\n 5 x %.2f = %.2f", valor, prest);
	return 0;
}

