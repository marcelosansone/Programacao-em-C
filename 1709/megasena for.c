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
	
	for (i=1; i<=Q;i++){
		printf("Jogo numero %d \n", i);
		for (j=1; j<=N; j++){
			printf("%d \t", rand()%61);
		}
	printf("\n");	
	}
			
		
return 0;
			
}





