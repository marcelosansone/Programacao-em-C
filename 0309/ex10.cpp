#include <stdio.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "portuguese");
	int n,menor,maior;
	n=0;
	printf("Digite um número inteiro:");
	scanf("%i", &n);
	menor=n-1;
	maior=n+1;
	printf("O número digitado foi %i, seu número antecessor é %i e seu sucessor é %i",n,menor,maior);
	return 0;
	
}

