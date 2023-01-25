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
 	float novlampadas (float largura, float comprimento){
        float area;

        area = (comprimento * largura)/6.0;
        return (area);

	}

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
