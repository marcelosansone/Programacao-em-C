#include <stdio.h>

int main () {
	
	char contador; // quando utilizar letras utilizar variavel char
	int i; // se dor utilizar o código decimalbinário tem que utilizar variavel int
	
	for (contador = 'a'; contador <= 'z'; contador ++){ // varável char deve vir em aspas simples
		printf ("%c ", contador);
			}
	
	printf("\n");
	for (i = 65 ; i <= 90; i++){
		printf ("%c ", i);	
	}
	
	
	
	return 0;
}
