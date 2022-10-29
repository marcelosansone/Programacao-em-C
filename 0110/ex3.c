// 3. Leia um número real. Se o número for positivo imprima a raiz quadrada.
// Do contrário, imprima o número ao quadrado.

#include <stdio.h>
#include<math.h>
int main (){
	
	float n;
	
	printf ("Digite um numero real: ");
	scanf ("%f", &n);
	
	if ( n >=0){
		printf ("Esse numero e positivo, portanto sua raiz quadradada e: %.2f", sqrt (n));
	}
	else {
		printf ("Esse numero e negativo, portanto seu quadradro e: %.2f", n*n);
	}
	
	return 0;
	
}
