//Leia um numero real . Se o numero for positivo,
//imprima a raiz quadrada. Do contrário, imprima
//o numero ao quadrado*

#include <stdio.h>
#include <math.h>

int main (){
	
		float numero;
		printf ("Digite um valor :");
		scanf("%f", &numero);
		
		if (numero >= 0){
			printf ("Raiz Quadrada: %f", sqrt(numero)); // pow (numero, 1.0/2.0)
		} 
		else {
			printf ("O quadrado do numero : %f", numero*numero); //pow (numero, 2)
				
			}
return 0;
}

