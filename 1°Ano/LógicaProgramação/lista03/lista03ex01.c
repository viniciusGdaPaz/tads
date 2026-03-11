

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double x, exp, resultado;
	printf("Informe o valor da base: ");
	scanf("%lf", &x);
	printf("Informe o expoente: ");
	scanf("%lf", &exp);
	resultado = pow(x, exp);
	printf("Resultado = %.0f", resultado);
	return 0;
}

