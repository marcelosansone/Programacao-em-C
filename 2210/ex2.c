// 1. Faça um programa que receba dois números e mostre qual deles é o maior.
#include <stdio.h>
#include <math.h>

int main (){
	float n1,n2;
	printf ( "Digite um numero: ");
	scanf("%f", &n1);
	
	
	 if (n1 >= 0){
	 	printf("O numero e positivo e sua raiz quadrada e: %.1f", sqrt (n1));
	 	}
	else {
		printf ("O numero e invalido!");
	}
	
	return 0;
	
	
	
}

