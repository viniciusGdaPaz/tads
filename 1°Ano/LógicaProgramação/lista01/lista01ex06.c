

#include <stdio.h>

int main(int argc, char **argv)
{
	float tamanho, velocidade , tempo;
	printf("informe o tamanho do arquivo(em bitss):");
	scanf("%f", &tamanho);
	printf("informe a velocidade de conecxão(bits por segundo):");
	scanf("%f", &velocidade);
	tempo = tamanho / velocidade;
	printf("vai demorar :%2f segundos ",tempo);
	return 0;
}

