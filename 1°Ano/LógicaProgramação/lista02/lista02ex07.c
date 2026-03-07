

#include <stdio.h>

int main(int argc, char **argv)
{
	float c, f , k ;
	printf("Informe a temperatura em celsius:");
	scanf("%f", &c);
	k = c + 273;
	f = 1.8 * (k - 273) + 32;
	printf("TEMPERATURA :\n Celsius :%1fC \n Fahrenheit :%1fF \n Kelvin :%1fK", c,f,k); 
	
	return 0;
}

