#include <stdio.h>

int main()
{
	
	float p1,p2,op,md;
	printf("Digite a P1.: ");
	scanf("%f",&p1);
	printf("Digite a P2.: ");
	scanf("%f",&p2);
	printf("Caso não tenha feito a Op digite -1 no lugar da nota\n");
	printf("digite a optativa.: ");
	scanf("%f",&op);
	if (op==-1)
		md =(p1+p2)/2;
	else 
		if(p1>p2)
			md=(p1+op)/2;
		else
			md = (op+p2)/2;
	printf("A media eh.: %.2f\n\n", md);
	if (md>=6)
		printf("APROVADO!!!");
	else
	 if(md<3)
	 	printf("REPROVADO!!!");
	 else
	 	printf("EXAME!!!");
	 	
return 0;
	
}
