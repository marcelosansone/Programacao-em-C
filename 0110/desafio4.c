#include <stdio.h>

int main () {
	
char x;
int y = 1;
	
for (x='A';x<='Z';x++){
	
	printf ("%c%d", x, y);
	printf("\n");
	y++;
	
}
char a;
int b =26;

for (a = 'z'; a>= 'a'; a--){
	
	printf( "%c%d",a,b);
	b--;
	printf ("\n");
}
	
return 0;	
}

