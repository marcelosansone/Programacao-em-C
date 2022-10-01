// fazer uum programa em linguagem C o qual produza a seguinte saida
// 1-10
// 2-9
// 3-8
// ..
// 10-1 

#include <stdio.h>

int main () {
	
	int i,j=10;
	
	for (i = 1; i <= 10 ; i++){
		printf ("%d - %d", i, j);
		printf ("\n");
		j -=1;
}
	
return 0;	
}
