#include <stdio.h>

int main(){
	
		int i;
		float mult = 25.4;
		for(i=1 ; i<=10 ; i++){
			printf("%.2f\n",mult);
			mult = mult + 25.4; //mult += 25.4
		}
		printf("\n\n");
		  i=1;
		  mult = 25.4;
		while ( i<=10 ){
			printf("%.2f\n", mult);
			mult = mult + 25.4;
			i++;
}	
	return 0;
}

