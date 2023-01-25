#include <stdio.h>
#include <math.h>
//funções
float somadeQuadrados (float a, float b){
	return  ((a*a) + (b*b));
}

float hipotenusa ( float catetoa, float catetob){
	return sqrt ( somadeQuadrados (catetoa, catetob));
}

//programa principal
int main (){
	float catA, catB, hipo;
	printf ("Digite o valor do cateto A:)");
	scanf("%f", &catA);
	printf ("Digite o valor do cateto B:");
	scanf ("%f", &catB);
	hipo = hipotenusa (catA, catB);
	
	printf("Hipotenusa = %f", hipo);
}
