

#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	double a, b, c, d, mh, mq;
	printf("informe o valor de A: ");
	scanf("%lf", &a);
	printf("informe o valor de B: ");
	scanf("%lf", &b);
	printf("informe o valor de C: ");
	scanf("%lf", &c);
	printf("informe o valor de D: ");
	scanf("%lf", &d);
	
	mh = 4/((1/a) + (1/b) + (1/c) + (1/d) );
	mq= sqrt((pow(a, 2) + pow(b, 2)+ pow(c, 2) +pow(d, 2)) / 4);
	printf("média Hârmonica: %.4lf \n média quadrática: %.4lf", mh, mq);
	
	return 0;
}

