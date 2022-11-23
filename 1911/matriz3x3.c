#include <stdio.h>

int main() {

int m[3][3], l, c;

for (l=0; l<3;l++){
	for(c=0; c<3;c++){
	printf ("Digite um valor:") ;
	scanf("%i", &m[l][c]);
	}	
}
printf ("\n\n Matriz lida\n\n");
for(l=0;l<3;l++){
	for(c=0;c<3;c++){
		printf("[%i]", m[l][c]);
		
}
printf ("\n");

}
return 0;

}
