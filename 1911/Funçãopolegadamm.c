#include <stdio.h>
#include <stdlib.h>
//declara��o da fun��o � FORA DA FUN��O MAIN!!!

float polegadaMilimetro( float polegada ){
	float milimetro = polegada * 25.4;
	return milimetro;
}
void main (){

float pol, mm;
printf ("Digite o valor em polegadas:");
scanf("%f", &pol);
	//chama a fun��o polegadaMilimetro
	mm = polegadaMilimetro(pol);
	printf("\nO valor em mm e: %.2f", mm);

	return ;
}
