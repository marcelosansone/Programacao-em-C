#include <stdio.h>



	float calcTomadas(float largura, float comprimento){
		float tomadas;

		tomadas = ((largura*2.0) + (comprimento*2.0)) / 5.0;

		return (tomadas);

	}

	float calcLampadas(float largura, float comprimento){
		float lampadas;
        float lampadas = calcTomadas/6
		return (lampadas);

	}

int main(){
	float L, C, lamp, toma;

	printf("Insira a largura da sala:");
	scanf("%f", &L);
	printf("Insira o comprimento da sala:");
	scanf("%f", &C);

	toma = calcTomadas(L, C);
	printf("Total de tomadas recomendadas = %f \n", toma);


	lamp = calcLampadas(L, C);
	printf("Total de lampadas recomendadas = %f \n", lamp);


	return (0);
}
