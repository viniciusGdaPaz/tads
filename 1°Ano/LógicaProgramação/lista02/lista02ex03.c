int main()
{
	float val1, val2, val3, val4, med;
	printf("informe o primeiro valor:");
	scanf("%f", &val1);
	printf("informe o segundo valor:");
	scanf("%f", &val2);
	printf("informe o terceiro valor:");
	scanf("%f", &val3);
	printf("informe o quarto valor:");
	scanf("%f", &val4);
	med = (val1+val2+val3+val4)/4;
	printf("a media dos valores(%2f,%2f,%2f,%2f) é de :%2f",
	val1,val2,val3,val4,med);	
	return 0;
}
