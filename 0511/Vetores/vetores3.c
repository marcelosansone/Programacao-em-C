#include <stdio.h>
#include <conio.h>

int main (){
	
	int x[10], y[10],i;
	
	for (i=0; i <10; i++){
		printf ("Digite um numero: ");
		scanf ("%i", &x[i]);
	y[i]= (x[i]*x[i]);
	}
	
	
	for (i=0; i <10; i++){
		printf ("Valor lido = %i \n", y[i] );
		
	}
	return 0;
}
