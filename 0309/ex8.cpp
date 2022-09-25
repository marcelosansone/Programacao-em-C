#include <stdio.h>
int main ()
{
	float c,k;
	printf ("Digite a temperatura em graus Kelvin:");
	scanf ("%f", &k);
	c=k-273.15;
	printf ("A temperatura %f graus Kelvin equivale a %f graus Celsius",k,c);
	
	return 0;
}
