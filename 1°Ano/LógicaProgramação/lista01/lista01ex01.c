#include <stdio.h>

int main () {
	int a, b, soma, sub, mult;
	float div;
	
	printf("informe um valor inteiro para o A:");
	scanf("%d", &a);
	printf("Informe um valor inteiro para o B:");
	scanf("%d", &b);
	soma=a+b;
	sub=a-b;
	mult=a*b;
	div=(float)a/b;
	printf("soma:%d\n",soma);
	printf("subtração:%d\n",sub);
	printf("multiplicação:%d\n",mult);
	printf("divisão:%2f\n",div);
	
	return 0;
}
