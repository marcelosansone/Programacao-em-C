#include <stdio.h>

int main () {
	
char x, y=1 , a = 'z', l=26;
	
for (x ='A'; x<='Z'; x++){
	printf ("%c%d%c%d\n", x,y,a,l);
	y++;
	a--;
	l--;
}

return 0;
	
}

