#include <stdio.h>
int main()
{
 int t,i,r;
 i=0;
 printf("Digite um numero.: ");
 scanf("%d",&t);
 while(i<=10)
 {
 	r=t*i;
 	printf("%d * %d = %d\n",t,i,r);
 	i=i+1;
	 }	
	
	
	
	return 0;
}
