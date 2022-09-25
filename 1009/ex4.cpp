#include <stdio.h>
// Escreva um programa que declare um número inteiro, inicialize-o com 0, e incremente-o de 1000 em 1000, inprimindo seu valor na tela, até que o valor seja 100.000

int main(){
	
	int i=0;
		int soma;
		for(soma=0; i <= 100 ; i++){
			printf("%d\n", soma);
			soma = soma + 1000;
		}
	
	return 0;
	
}

