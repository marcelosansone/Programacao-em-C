// 3. Leia um n�mero real. Se o n�mero for positivo imprima a raiz quadrada.
// Do contr�rio, imprima o n�mero ao quadrado.

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
