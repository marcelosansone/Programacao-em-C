#include <stdio.h>
#include <stdlib.h>

//declara��o da fun��o � FORA DA FUN��O MAIN!

float polegadaMilimetro (float polegada);
float milimetroPolegada (float milimetro);

int main (){

	
float pol, mm;


	printf ("Digite o valor em polegadas:");
	scanf("%f", &pol);
	//chama a fun��o polegadaMilimetro
	
	mm = polegadaMilimetro(pol);
	printf("\nO valor em mm e: %.2f", mm);
	return ;


	printf ("Digite o valor em milimetro:");
	scanf("%f", &mm);
	
	//chama a fun��o polegadaMilimetro
	
	pol = milimetroPolegada(mm);
	printf("\nO valor em mm e: %.2f", pol);
	return ;

// funcao polegada milimetro

float polegadaMilimetro(float polegada){//pol*25.4
	float mm = polegada * 25.4;
	return mm;
}

//funcao milimetro polegada

float milimetroPolegada (float milimetro){// mili/25.4
	float pol = milimetro / 25.4;
	return pol;
}
}

