


#include <stdio.h>

int main(int argc, char **argv)
{
	float valor, acrescimo, decrescimo;
	printf("Informe o valor total de uma compre:");
	scanf("%f",&valor);
	decrescimo = valor - (valor*0.1);
	acrescimo = valor + (valor * 0.05);
	printf("valor total:%2f \n valor com 5%% de acrescimo : %2f\n valor com 10%% de decrescimo : %2f",
	valor,acrescimo,decrescimo);
	return 0;
}

