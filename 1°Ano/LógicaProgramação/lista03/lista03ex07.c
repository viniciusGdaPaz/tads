
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int valor, val1, val2, val3, val4,change;
	int soma;
	
	
	printf("informe um valor de 4 algarismos :");
	scanf("%d", &valor);
	val1 = (valor/1000);
	change = valor % 1000;
	val2 = (change/100);
	change = change %100;
	val3 = (change/10);
	val4 = change %10;
	soma = val1+val2+val3+val4;
	printf("a soma dos algaritimos %d é igual = %d", valor,soma);
	return 0;
}

