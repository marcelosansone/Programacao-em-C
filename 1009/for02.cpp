#include <stdio.h>

int main(){
	
		int i;
		float mult = 25.4;
		for(i=1 ; i<=10 ; i++){
			printf("%.2f\t ",mult);
			mult = mult + 25.4; //mult += 25.4
		}

	return 0;
}

