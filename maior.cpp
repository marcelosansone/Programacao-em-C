#include <stdio.h>

int main()
{
	int nun1,nun2;
	printf("Digite um numero.:");
	scanf("%d",&nun1);
	printf("digite outro numero.:");
	scanf("%d", &nun2);
	if (nun1>nun2)
		printf(" Os numeros em ordem sao %d > %d", nun1,nun2);	
	else
		printf(" Os numeros em ordem sao %d > %d", nun2,nun1);
	return 0;
}
