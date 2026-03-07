


#include <stdio.h>

int main(int argc, char **argv)
{
	float largura, comprimento, tamanho, preco;
	printf("informe a largura do local:");
	scanf("%f",&largura);
	printf("informe o comprimento do local:");
	scanf("%f",&comprimento);
	tamanho = largura * comprimento;
	printf("informe o preço do metro quadrado do carpete:");
	scanf("%f", &preco);
	preco = preco * tamanho;
	printf("o valor total gaasto para cobrir a sala sera de: %2f",preco);
	return 0;
}

