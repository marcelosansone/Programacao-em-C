// 5. Faça um programa que peça ao usuário para digitar 10 valores e some-os.
#include <stdio.h>

int main (){
	
	int i, valor=0, soma=0;
	
	for ( i=1; i <= 10; i++){
		printf ("Digite o valor: ");
		scanf ("%i", &valor);
		soma = soma + valor;
	}
	printf("Soma = %d", soma);
	
	return 0;
}
