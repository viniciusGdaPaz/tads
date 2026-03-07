


#include <stdio.h>

int main(int argc, char **argv)
{
	int num;
	printf("informe um numero inteiro:");
	scanf("%d", &num);
	printf("o antecessor de %d é : %d \n o sucessor de %d é:%d",
	num,num-1,num,num+1);
	return 0;
}

