// fazer uum programa em linguagem C o qual produza a seguinte saida
// 1-10
// 2-9
// 3-8
// ..
// 10-1 

#include <stdio.h>

int main () {
	
char x, y= 'a';
	
for ( x= 'A'; x <= 'Z';  x++){
printf ("%c%c \n", x, y);
y +=1;
}
	
return 0;	
}
