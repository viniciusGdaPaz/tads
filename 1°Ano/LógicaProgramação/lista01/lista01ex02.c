

#include <stdio.h>

int main()
{
	float cedula, dolar, cotacao;
	printf("informo o valor(dolar) para conversão:");
	scanf("%f",&dolar);
	printf("informo o valor da cotação do dolar atualmenter:");
	scanf("%f",&cotacao);
	cedula=dolar*cotacao;
	printf("valor em real:%2f",cedula);
	
	
	return 0;
}

