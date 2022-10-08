#include <stdio.h>

int main()
{
	int numero;
	printf("Digite um numero.: ");
	scanf("%d",&numero);
	if(numero>0)
		printf("POSITIVO");
	else
		if(numero<0)
			printf("NEGATIVO");
		else
			printf("ZERO");	
	
	return 0;
}
