// par ou impar
#include <stdio.h>

int main(){
	
	int n;
	
	printf ("Digite um numero inteiro:");
	scanf("%d", &n);
	
	if (n%2==1){
		printf( "Esse numero e impar");
	}
	else{
		printf ("Esse numeroi e par");
	}
}
