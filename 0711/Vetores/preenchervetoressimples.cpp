#include <stdio.h>
#include <conio.h>

int main (){
	
	int x[5],i;
	
	for (i=0; i <5; i++){
		printf ("Digite um numero: ");
		scanf ("%i", &x[i]);
	}
	
	for (i=0; i <5; i++){
		printf ("Valor lido = %i \n", x[i] );
		
	}
	return 0;
}
