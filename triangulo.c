#include <stdio.h>

// verificar se forma um trângulo

//1 forma 0 não forma
int verificaSeFormaTriangulo ( int ladoa, int ladob, int ladoc) {
	if ( ladoa < (ladob+ladoc) && ladob < (ladoa+ladoc) && ladoc < (ladoa+ladoc))
		return 1;
	else 
		return 0;
}


//verifica tipo de triangulo
int verificaTipoDeTriangulo ( int ladoa, int ladob, int ladoc) {
	if (verificaSeFormaTriangulo (ladoa, ladob, ladoc) ) {
		if (ladoa==ladob && ladob==ladoc && ladoa==ladoc){	
			printf ("triangulo equilatero");
		
				if (ladoa == ladob || ladoa==ladoc || ladob == ladoc){
				
				printf("Triangulo Isoceles ");
		
				else if;
				printf ("Triangulo escaleno");
			}			
		}		

	else {
	
		printf("Nao forma triangulo!");
	}
}
int main (){
 
int a,b,c;
printf ("Digite o lado a:");
scanf ("%i", &a);
printf ("Digite o lado b:" );
scanf ("%i", &b);
printf ("Digite o lado c:" );
scanf ("%i", &c);
verificaTipoDeTriangulo (a,b,c);

return (0);
}

