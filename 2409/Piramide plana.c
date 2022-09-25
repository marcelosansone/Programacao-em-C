//Um rapaz e o seu pai, um programador de computador, est�o a brincar com blocos de madeira.
//Eles est�o a construir uma pir�mide plana.
//A pir�mide � empilhada de acordo com um princ�pio simples: cada camada inferior cont�m mais um bloco do que a camada superior.
//Escrever um programa que leia o n�mero de blocos que os construtores t�m, e que produza a altura da pir�mide que pode ser constru�da utilizando estes blocos.
//A altura � medida pelo n�mero de camadas completamente preenchidas.
//Se os construtores n�o tiverem um n�mero suficiente de blocos e n�o conseguirem completar a camada seguinte, terminam o seu trabalho imediatamente.

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

	
	
	
	
	
