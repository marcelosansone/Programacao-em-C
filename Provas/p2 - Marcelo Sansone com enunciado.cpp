//Prova P2 - 2o Ciclo
//Dados:
//Toda sala � ret�ncular com dimens�es Largura (L) e Comprimento (C)
//Per�metro (P) de uma sala retangular � dado por P= L + L+ C + C
//�rea (A) de uma sala retangular � dada por A= l x C
// Uma sala deve conter um n�mero de tomadas dado T= P /5
// Uma sala deve conter um n�mero de l�mpadas de 100A (Lam) ddo por Lam = A/6
#include <stdio.h>
// 1. Fazer uma fun��o que em linguagem C que receba Largura e Comprimento de
//uma sala e retorne o n�mero recomendado de tomadas (Somente a fun��o)
	float calcTomadas(float largura, float comprimento){
		float tomadas;

		tomadas = ((largura*2.0) + (comprimento*2.0)) / 5.0;
		return (tomadas);

	}
//2. Fa�a uma fun��o em lingugagem C que receba a Largura e o Comprimento
//de uma sala e rotrine o n�mero recomendado de l�mpadas de 100A (Somente a fun��o)
	float calcLampadas(float largura, float comprimento){
		float lampadas;

		lampadas = (largura*comprimento) / 6.0;
		return (lampadas);

	}
//3.Fa�a um programa em linguagem C que o usu�rio informe as dimens�es
//de uma sala (largura e o comprimento) e, usando as fun��es desenvolvidas nas
//quest�es 1 e 2, mostre na tela o n�mero recomendado de tomadas e l�mpadas para a sala
//informada(Somente o programa)
int main(){
	float L, C, lamp, toma,nov;

	printf("Insira a largura da sala:");
	scanf("%f", &L);
	printf("Insira o comprimento da sala:");
	scanf("%f", &C);

	toma = calcTomadas(L, C);
	printf("Total de tomadas recomendadas = %f \n", toma);


	lamp = calcLampadas(L, C);
	printf("Total de lampadas recomendadas = %f \n", lamp);


	return 0;

}
