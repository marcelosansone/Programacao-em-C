#include <stdio.h>
//  Faça um programa utilizando o comando WHILE que mostra uma contagem regressiva na tela, iniciando em 10 e terminando em 0.Mostrar uma mensagem “FIM!” após a contagem.

int main(){
	
int i;
int n;
		n  = 10;
		i=0;
		while ( i<=10 ){
			printf ("%i\n", n);
			n=n-1;
			i= i+1;
		}
	printf ("FIM!")	;
	return 0;
}
