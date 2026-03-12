

#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	double val1, quadrado, cubo ;
	printf("informe o numero para calcular o cube e o quadrado: ");
	scanf("%lf",&val1);
	cubo = pow(val1, 3);
	quadrado = pow(val1, 2);
	printf("número\tquadrado\tcubo \n%.0lf\t%.0lf\t\t%.0lf", val1, quadrado, cubo);

	return 0;
}

