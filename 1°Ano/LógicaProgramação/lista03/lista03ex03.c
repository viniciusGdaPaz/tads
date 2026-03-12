

#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	double val, acima, baixo;
	printf("informe o valor real que você deseja arredondar:");
	scanf("%lf",&val);
	acima = ceil(val);
	baixo = floor(val);
	printf("o %.2lf aredondado para cima é: %lf \n o %.2lf aredondado para baixo é: %lf", val, acima, val, baixo);
	return 0;
}

