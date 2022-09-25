#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	srand(time(NULL));
	int i,N;
	
	printf ("Digite a quantidade de numeros para apostar:");
	scanf("%d", &N);
	printf("\n");
		for ( i=1; i<=N; i++){
				printf("%d  ", rand()%61 );
				
		}
		printf("\n\n\n");
		i=1;
				while (i<=N){
				printf("%d  ", rand()%61 );
			i++;
			}
			


return 0;

}
