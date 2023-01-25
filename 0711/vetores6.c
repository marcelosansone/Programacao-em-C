#include <stdio.h>
#include <conio.h>

int main (){
	
	int x[15], i;
	float soma;
	soma = 0;
	for (i=0; i <15; i++){
		printf ("Digite um numero: ");
		scanf ("%i", &x[i]);
		soma=soma + x[i];
	}
	
	
	
	printf (" A media das 15 notas e: %f", soma/15);
	return 0;
}
