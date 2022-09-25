#include <stdio.h>
int main ()
{
	float c,k;
	printf ("Digite a temperatura em graus Celsius:");
	scanf ("%f", &c);
	k=c+273.15;
	printf ("A temperatura %f graus Celsius equivale a %f graus Kelvin",c,k);
	
	return 0;
}
