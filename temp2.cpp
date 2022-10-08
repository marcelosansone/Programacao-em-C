# include <stdio.h>
int main()
{
	float f,c;
	printf("Digite a temperatura.:");
	scanf("%f",&f);
	c=(f-32)*(5.0/9.0);
	printf("A temperatura convertida eh.: %.2f",c);
	return 0;
}
