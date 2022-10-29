// 4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
// - O número digitado ao quadrado
// - A raiz quadrada do número digitado

#include <stdio.h>
#include <math.h>

int main (){

int n1;

printf ("Digite um numero inteiro:");
scanf ("%i", &n1);

	if (n1 >= 0){
	printf ("Esse numero inteiro e positivo.\n");
	printf ("O seu quadrador e: %i \n", n1*n1);
	printf ("Sua raiz quadrada e:  %.2f \n", sqrt (n1));
	}	
	else {
	printf ("Esse numero inteiro nao e positivo. Nada sera feito");
	}
	
return 0;
}	
	
