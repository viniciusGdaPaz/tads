

#include <stdio.h>

int main(int argc, char **argv)
{
	float area, base, altura;
	printf("informe o o tamanho da base do retângulo:");
	scanf("%f",&base);
	printf("informe a altura do retângulo:");
	scanf("%f",&altura);
	area = base * altura;
	printf("A área do retângulo é :%2f", area);
	return 0;
}

