

#include <stdio.h>

	float calcTomadas(float largura, float comprimento){
		float tomadas;

		tomadas = ((largura*2.0) + (comprimento*2.0)) / 5.0;
		return (tomadas);

	}

	float calcLampadas(float largura, float comprimento){
		float lampadas;

		lampadas = (largura*comprimento) / 6.0;
		return (lampadas);

	}

int main(){
	float L, C, lamp, toma;

	printf("Insira a largura da sala LADO A :");
	scanf("%f", &L);
	printf("Insira o comprimento da sala LADO B:");
	scanf("%f", &C);

	toma = calcTomadas(L, C);
	printf("Total de tomadas recomendadas LADO A = %f \n", toma);


	lamp = calcLampadas(L, C);
	printf("Total de lampadas recomendadas LADO B = %f \n", lamp);


	return (0);
}
