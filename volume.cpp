# include <stdio.h>
int main()
{
	int alt,comp,larg,vol;
	printf("digite a altura.: ");
	scanf("%d",&alt);
	printf("Digite o comprimento.: ");
	scanf("%d",&comp);
	printf("digite a largura.: ");
	scanf("%d",&larg);
	vol=alt*comp*larg;
	printf("o volume eh.: %d",vol);
	return 0;
}
