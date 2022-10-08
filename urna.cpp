#include <stdio.h>
int main()
{
//Declaração das variáveis globais muda tudo pra float
int voto, c1, c2, c3, c4; 
float tnulo, tbranco, total; 
float nulo, branco;	
c1=0;
c2=0;
c3=0;
c4=0;
nulo=0;
branco=0;
total=0;
voto=-1; 
tnulo = 0;
tbranco = 0;
    
//MENU DE CANDIDATOS
	printf ("Para CANDIDATO 1 APERTE 1 \n");
	printf ("Para CANDIDATO 2 APERTE 2 \n");
	printf ("Para CANDIDATO 3 APERTE 3 \n");
	printf ("Para CANDIDATO 4 APERTE 4 \n");
	printf ("VOTO NULO APERTE 5 \n");
	printf ("VOTO BRANCO APERTE 6\n");
	printf("Pressione 0 para finalizar\n");
//PEDIR O VOTO	
	while (voto!=0) {
		printf("Digite o seu voto:\n");
		scanf ("%d",&voto);
		if(voto==1){
			c1++;	//voto candidato 1
		}
		else if(voto==2){
			c2++;//voto candidato 2
		}
		else if(voto==3){
			c3++;//voto candidato 3
		}
		else if(voto==4){
			c4++;//voto candidato 4
		}
		else if(voto==5){
			nulo++;//voto nulo
		}	
		else if(voto==6){
			branco++;//voto branco
		}
		total++;
    }
    total=total-1;
    printf("-------------------------\n");
    printf("Resultados:\n");
    printf("Candidato 1: %d Votos\n", c1);
    printf("Candidato 2: %d Votos\n", c2);
    printf("Candidato 3: %d Votos\n", c3);
    printf("Candidato 4: %d Votos\n", c4);
    printf("Votos Nulos: %.0f Votos\n", nulo);
    printf("Votos Brancos: %.0f Votos\n", branco);
    
	
	tnulo=(nulo/total)*100;
    tbranco=(branco/total)*100;
    
    printf ("\nNulos em relacao ao total: %.2f porcento",tnulo );
    printf ("\nBrancos em relacao ao total: %.2f porcento", tbranco );
    
	return 0;

}
