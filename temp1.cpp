# include <stdio.h>
int main()
{
	float f,c;
	printf("Digite a temperatura.:");
	scanf("%f",&c);
	f=(9*c+160)/5.0;
	printf("A temperatura convertida eh.: %.2f",f);
	return 0;
}
