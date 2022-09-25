#include <stdio.h>

int main (){
	
	int i, N, impar=1;
	// i contador
	// N é a quantidade de numeros gerados
	//impar gera os numeros
	
	// solicitar a quantidade de numeros ao usuario
	printf("Digite a quantidade:");
	scanf("%d", &N);
	
	for (i=1;i<=N;i++){// gera N numeros
	//imprime numeros gerados
	printf("%d ", impar);
	impar+=2;
	// gera o proximo
	
	}
return 0;
}

