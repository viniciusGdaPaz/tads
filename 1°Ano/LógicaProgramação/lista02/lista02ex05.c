

#include <stdio.h>

int main(int argc, char **argv)
{
	float pago, troco, preco;
	printf("Informe o valor pago:");
	scanf("%f", &pago);
	printf("Informe o preco do produto que foi pago:");
	scanf("%f",&preco);
	troco = pago-preco;
	printf("seu troco será de :%2f",troco);
	return 0;
}

