
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int val1, val2, val3;
	float media;
	printf("informe  a 1° nota:");
	scanf("%d",&val1);
	printf("informe  a 2° nota:");
	scanf("%d",&val2);
	printf("informe  a 3° nota:");
	scanf("%d",&val3);
	media = (float)(val1 + val2 + val3) / 3;
	printf("a media dos valores(%d,%d,%d) é = %f", val1, val2, val3, media);
	return 0;
}

