#include <stdio.h>
int main()
{
	float nun1,nun2,result;
	int op;
	printf(" Digite um numero.:");
	scanf("%f",&nun1);
    printf(" Digite um numero.:");
	scanf("%f",&nun2);
	printf("digite a operacao.:\n");
	printf("adicao --------> 1\n");
	printf("subtracao -----> 2\n");
	printf("divisao -------> 3\n");
	printf("multiplicacao -> 4\n");	
	scanf("%d",&op);
	if (op==1)
		result = nun1+nun2;
	else if(op==2)
		result = nun1-nun2;
	else if(op==3)
		result = nun1/nun2;
	else if(op==4)
		result = nun1*nun2;
	else
		printf("Opcao nao valida!!!!");
		
	printf("=======================\n");
	printf("o resultado eh.: %.2f",result);
	
	return 0;
}
