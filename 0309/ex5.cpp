#include <stdio.h>
int main ()
{
	float c,f;
	printf ("Digite a temperatura em graus Celsius:");
	scanf ("%f", &c);
	f=1.8*c+32;
	printf ("A temperatura %.2f graus Celsius equivale a %.2f graus Farenheint",c,f);
	
	return 0;
}
