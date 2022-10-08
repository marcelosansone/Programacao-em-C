#include <stdio.h>

int main()
{
int i,tab,nun;
i=0;
printf("Digite a tabuada.:");
scanf("%d",&nun);
while(i<=10){
	tab=nun*i;
	printf("%d * %d = %d \n",nun,i,tab);
	i=i+1;
}
printf("\n\n");
i=i-1;
while(i>=0){
	tab=nun*i;
	printf("%d * %d = %d \n",nun,i,tab);
	i=i-1;
}	

	 	
return 0;
	
}
