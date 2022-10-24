#include <stdio.h>

int main (){
	
	float p1, p2, p3, media, mediap3;
	int faltas;
	
	printf ("Digite a nota da P1: ");
	scanf ("%f", &p1);
	printf ("Digite a nota da P2:");
	scanf ("%f", &p2);
	
	if (p1 ==0 || p2==0){
	
		printf("Digite a nota da P3:");
		scanf ("%f", &p3);
	}	
	else {
		media = (p1 + p2) / 2.0;
	}
	if (p1 == 0) {
		mediap3= (p2 + p3) / 2.0;		
	}
	else if (p2 ==0) {
		mediap3= (p1 + p3) / 2.0;
	}

	printf ("Digite a frequencia do aluno:");
	scanf ("%d", &faltas);

	if (media >= 6.0 || mediap3>= 6.0){
		if (faltas > 20){
			printf ("Aluno REPROVADO por FALTAS");
		}
		if (media >= 6.0 || mediap3 >= 6.0){
			if (faltas <= 20){
				printf ("Aluno APROVADO!");
			}
			if (media < 6.0 || mediap3 < 6.0){
				if (faltas <= 20){
					printf (" Aluno REPROVADO por NOTA");
				}
				else {
					printf ("Aluno repovado por FALTAS e NOTAS!!!");
					
				}
			}
					}
		}
	return 0;
}
