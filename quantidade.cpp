#include <stdio.h>

int main()
{
	int num1,num2,cont;
	cont=1;
	printf("Digite o primeiro numero.:");
	scanf("%d",&num1);
	printf("Digite o segundo numero.:");
	scanf("%d",&num2);
	while(num1<num2)	
	{
		cont=cont+1;
		num1=num1+1;
	}
	printf("Quantidade de numeros.: %d",cont);
	return 0;
}
