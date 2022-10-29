// 1. Faça um programa que receba dois números e mostre qual deles é o maior.
#include <stdio.h>
#include <math.h>

int main (){
	float n1,n2;
	printf ( "Digite dois numeros: ");
	scanf("%f", &n1);
	scanf("%f", &n2);
	
	 if (n1 > n2){
	 	printf("O primeiro numero %.1f e maior que o segundo numero %.1f", n1, n2);
	 	}
	else {
		printf ("O segundo numero %.1f e maior que o primeiro numero %.1f", n2, n1);
	}
	
	return 0;
	
	
	
}

