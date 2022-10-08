#include <stdio.h>

int main()
{
  float h;
  int sexo;
  
  printf("Digite 1 - feminino \n       2 - masculino.:");
  scanf("%d",&sexo);
  printf("Digite a altura.: ");
  scanf("%f",&h);
  if (sexo==1)
   printf("A peso ideal eh.: %.2f Kg",(62.1*h)-44.7 );
  else
	 printf("A peso ideal eh.: %.2f Kg",(72.7*h)-58 );
   	
	return 0;
}
