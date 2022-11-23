#include <stdio.h>
#include <conio.h>

int main (){
	
	int a[5], b[5], c [5], i;
	
	for (i=0; i <5; i++){
		printf ("Digite um numero conjunto A: ");
		scanf ("%i", &a[i]);
		printf ("Digite um numero conjunto B: ");
		scanf ("%i", &b[i]);
	c[i]= (a[i]+b[i]);
	}
	
	
	for (i=0; i <5; i++){
		printf ("Valor lido do conjunto C = %i \n", c[i] );
		
	}
	return 0;
}
