#include <stdio.h>
int main ()
{
	float c,f;
	printf ("Digite a temperatura em graus Farenheint:");
	scanf ("%f", &f);
	c=5*(f-32)/9;
	printf ("A temperatura %.2f graus Farenheint equivale a %.2f graus Celsius",f,c);
	
	return 0;
}
