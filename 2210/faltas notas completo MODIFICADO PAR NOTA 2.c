#include <stdio.h>

int main () {

	
	float p1, p2, p3, media, mediap3;
	int faltas;
	
	printf ("Digite a nota da P1: ");
	scanf ("%f", &p1);
	printf ("Digite a nota da P2:");
	scanf ("%f", &p2);
	media = (p1 + p2) / 2;
		
	if (p1 <= 2.0  || p2 <= 2.0 ){
	
		printf("Digite a nota da P3:");
		scanf ("%f", &p3);
		
		if (p1 < 1.9) {
		mediap3 = (p2 + p3) / 2;		
		}
		else  if (p2 < 1.9) {
		mediap3= (p1 + p3) / 2;
		}
}
	printf ("Digite numero de faltas do aluno:");
	scanf ("%d", &faltas);
	
	
	if (media >= 6.0 || mediap3 >= 6.0){
		if (faltas > 20){
			printf ("Aluno REPROVADO por FALTAS\n");
			}
			if (faltas <= 20){
				printf ("Aluno APROVADO!\n");
			}
	}
		if (media < 6.0 && mediap3 < 6.0){
			if (faltas <= 20){
			printf ("Aluno REPROVADO por NOTA\n");
			}
		}
		
		if (media < 6.0 && mediap3 <6.0) {
			if (faltas >20){
		printf ("Aluno repovado por FALTAS e NOTAS!!!\n");
			}
		}
	
	printf ("Nota da P1: %.2f \n",p1);
	printf ("Nota da P2: %.2f \n",p2);
	printf ("Media sem P3: %.2f \n", media);
	if (p1==0 || p2 ==0){
	printf ("Media com a P3: %.2f\n", mediap3);
	}
	printf ("Numero de faltas: %d\n", faltas);
	
return 0;
}
