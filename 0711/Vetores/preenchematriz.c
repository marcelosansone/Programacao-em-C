// inckuir valor na matriz
#include <stdio.h>

int main (){
	
	
	int m [3][3], l, c;
	
	
	for (l=0; l<=2; l++){
		for(c=0; c<=2; c++){
			printf ("Digite um valor: ");
			scanf ("%i",  &m[l][c]);
		}
	}
	
	printf ("\n\n Matriz Lida \n\n");
	for (l=0; l<=2; l++){
		for(c=0; c<=2; c++){
	
		printf ("[%i]", m [l][c]);
}
printf ("\n");
}
	return 0 ;
	
	
}
