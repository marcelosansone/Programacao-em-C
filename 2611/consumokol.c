#include <stdio.h>
void verificaConsumo (float km, float litros){
	// calcular  o consumo em km/l
float consumo = km/litros;
if (consumo <= 8){
	printf ("Venda o carro!");
}	else if (consumo >= 12 ){
	printf ("Econ�mico");
} 	else {
	printf ("Superecon�mico!");
}
}// fim fun��o verifica cosumo

int main (){
	float km, litros;
	printf ("Digite a quantidade de km:");
	scanf ("%f", &km);
	printf ("Digite a quantidade de litros:");
	scanf ("%f", &litros);
	
	verificaConsumo (km, litros);
}
