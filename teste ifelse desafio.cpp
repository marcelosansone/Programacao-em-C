//Leia um numero real . Se o numero for positivo,
//imprima a raiz quadrada. Do contrário, imprima
//o numero ao quadrado*

#include <stdio.h>
#include <math.h>

int main (){
	
		float  p1, p2, p3, media, mediap3;
		int faltas;
		
		printf("Digite a nota da P1: ");
		scanf("%f", &p1);
		printf("Digite a nota da P2: ");
		scanf("%f", &p2);
		
		if (p1 == 0 || p2 == 0){
				printf ("Digite a nota p3: ");
				scanf("%f", &p3);
				printf("Digite o numero de faltas: ");
				scanf("%d", faltas);
		}
		media = p1 + p2 / 2.0;
		
		if (p1 == 0){
		mediap3 = (p2 + p3 / 2);
		}
			
			if (p2 == 0 ){
				mediap3 = (p1 + p3 /2);
			}	
			
			else {
				media = p1 + p2 / 2;
				
			}
		printf ("P1 %f\n", p1);
		printf ("P2 %f\n", p2);
		printf ("P3 %f\n", p3);
		printf ("Media %f\n", media);
		}
			
		
		
		printf ("Media P3 %f", mediap3);
				
		
		if (media >=6 || mediap3>=6 && faltas <=20)  {
			printf("O aluno foi APROVADO!");
		}
			
		
		if (media>=6 || mediap3>=6) {
				if (faltas <=20){
				printf ("O Aluno foi reprovado por FALTAS");
			    }
		}
		if (media <6 || mediap3 < 6) {
			if (faltas <=20){
			printf ( " O aluno foi reprovado por NOTA");
			}
		}
		else {
			printf ("O aluno foi reprovado por NOTA e FALTA");
		}	
					
return 0;

}

