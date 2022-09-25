#include <stdio.h> //biblioteca usada
#include<locale.h> //biblioteca que deixa o programa com acentos

int main(){ //Comando de iniciação
		setlocale( LC_ALL, "portuguese"); //comando utilizado para a biblioteca de acentos em português
		
		//declaração de variáveis
		int n1, n2, soma;
		
		//inicialização das variáveis
		n1 = 0;
		n2 = 0;		//n1 = n2 = soma = 0;
		soma = 0;
		
		//ler n1
		printf("Digite o primeiro número: ");
		scanf( "%i",&n1);
		
		//ler n2
		printf("Digite o segundo número: ");
		scanf( "%i", &n2);
		
		//soma <- n1 + n2
		soma = n1 + n2;
		
		//exiba soma
		//printf("A soma foi %d!", soma);	
		printf("A soma de  %d e %i foi %d", n1,n2,soma);
	return 0;
}
