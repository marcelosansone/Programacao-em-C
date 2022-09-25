#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	srand(time(NULL));
	int i;
	for ( i=1; i<=6; i++){
		printf("%d  ", rand()%61 );
		
	}
return 0;	
		
}
