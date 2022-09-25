// 6. Faça um programa que leia 10 inteiros e imprima sua média.

#include <stdio.h>

int main (){
	
	int i, valor=0, soma=0;
	
	for ( i=1; i <= 10; i++){
		printf ("Digite o valor: ");
		scanf ("%i", &valor);
		soma = soma + valor;
	}
	printf("Média = %d",soma/i+1);
	
	return 0;
}
