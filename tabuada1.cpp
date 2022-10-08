#include <stdio.h>

int main()
{
	int t,cont,r;
	cont=1;
	printf("Digite a tabuada.:");
	scanf("%d",&t);
	while(cont<=10){
		r=t*cont;
		if ((cont%2)==0)
		printf("%d * %d =  %d\n",t,cont,r);
		cont=cont+1;
	}
	return 0;
}
