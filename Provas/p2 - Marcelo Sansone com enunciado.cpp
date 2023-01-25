//Prova P2 - 2o Ciclo
//Dados:
//Toda sala é retâncular com dimensões Largura (L) e Comprimento (C)
//Perímetro (P) de uma sala retangular é dado por P= L + L+ C + C
//Área (A) de uma sala retangular é dada por A= l x C
// Uma sala deve conter um número de tomadas dado T= P /5
// Uma sala deve conter um número de lâmpadas de 100A (Lam) ddo por Lam = A/6
#include <stdio.h>
// 1. Fazer uma função que em linguagem C que receba Largura e Comprimento de
//uma sala e retorne o número recomendado de tomadas (Somente a função)
	float calcTomadas(float largura, float comprimento){
		float tomadas;

		tomadas = ((largura*2.0) + (comprimento*2.0)) / 5.0;
		return (tomadas);

	}
//2. Faça uma função em lingugagem C que receba a Largura e o Comprimento
//de uma sala e rotrine o número recomendado de lâmpadas de 100A (Somente a função)
	float calcLampadas(float largura, float comprimento){
		float lampadas;

		lampadas = (largura*comprimento) / 6.0;
		return (lampadas);

	}
//3.Faça um programa em linguagem C que o usuário informe as dimensões
//de uma sala (largura e o comprimento) e, usando as funções desenvolvidas nas
//questões 1 e 2, mostre na tela o número recomendado de tomadas e lâmpadas para a sala
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
