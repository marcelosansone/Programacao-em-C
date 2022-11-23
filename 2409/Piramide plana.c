//Um rapaz e o seu pai, um programador de computador, estão a brincar com blocos de madeira.
//Eles estão a construir uma pirâmide plana.
//A pirâmide é empilhada de acordo com um princípio simples: cada camada inferior contém mais um bloco do que a camada superior.
//Escrever um programa que leia o número de blocos que os construtores têm, e que produza a altura da pirâmide que pode ser construída utilizando estes blocos.
//A altura é medida pelo número de camadas completamente preenchidas.
//Se os construtores não tiverem um número suficiente de blocos e não conseguirem completar a camada seguinte, terminam o seu trabalho imediatamente.

# include <stdio.h>

int main (){
	int altura, linha_inferior, blocos;
	altura = 0;
	linha_inferior = 1;
	printf ("Qual o numero de blocos ? ");
	scanf("%d", &blocos);
	
	while (linha_inferior < blocos){
	
	
		altura += 1;
		blocos -= linha_inferior;
		linha_inferior += 1;
		
	}

printf ("Altura %d", altura);

return 0;

}

	
	
	
	
	
