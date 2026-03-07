

#include <stdio.h>

int main()
{
	float totalVendas, comissao;
	printf("informe o valor total de vendas:");
	scanf("%f",&totalVendas);
	comissao = totalVendas*0.1;
	printf("a sua comissão de 10%% é de :%2f", comissao );
	
	
	return 0;
}

