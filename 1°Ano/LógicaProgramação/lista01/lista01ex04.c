

#include <stdio.h>

int main()
{
	float km, litrosa, consumo;
	printf("informe a quantidade de km percorrida:");
	scanf("%f", &km);
	printf("informe a quantidade de gasolina consumida em litros:");
	scanf("%f", &litrosa);
	consumo = km/litrosa;
	printf("o seu consumo foi de %1f km por litro",consumo);
	return 0;
}

