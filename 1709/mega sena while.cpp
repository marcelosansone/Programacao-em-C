#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	srand(time(NULL));
	int i,j,N,Q;
	
	printf ("Digite a quantidade de numeros para apostar:");
	scanf("%d", &N);
	printf ("Digite quantos jogos: ");
	scanf("%d", &Q);
		i=1;
		while (i<=Q){
			printf("Jogo numero %d \n ", i);
			j=1;
			while (j<=N){
				printf("%d \t",  rand()%61 );
			j++;
			}
		i++;
		printf("\n");	
		}	
return 0;
			
}





