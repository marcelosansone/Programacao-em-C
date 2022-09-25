#include <stdio.h>

int main(){
		// usando comando FOR
		int i=1;
		int soma;
		for(soma=1; i <= 100 ; i++){
			printf("%d\n", soma);
			soma = soma + 1;
		}
		printf ("\n\n");
		
		// usando comando while
		soma = 1;
		i=1;
		while ( i<=100 ){
			printf ("%i\n", soma);
			soma=soma+1;
			i= i+1;
		}
		
	return 0;
}

