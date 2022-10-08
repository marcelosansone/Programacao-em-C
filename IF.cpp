#include <stdio.h>


int main ()
{
	float p1,p2,md;
	printf("Digite a P1.:");
	scanf("%f",&p1);
	printf("Digite a P2.:");
	scanf("%f",&p2);
	md=(p1+p2)/2;
	printf("A media eh.: %.2f\n",md);
	if (md>=6)
		printf("APROVADO!!!!");
	else
		printf("REPROVADO!!!");	
	
	return 0;
}
