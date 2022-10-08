#include <stdio.h>
int main(){
	
float p1,p2,media,tmedia,mmedia;
int ap,rp,i;
ap=0;
rp=0;
i=1;
while(i<=6){
	printf("aluno.: %d\n",i);
	printf("Digite a P1.:");
	scanf("%f",&p1);
	printf("Digite a P2.:");
	scanf("%f",&p2);
	media=(p1+p2)/2;
	tmedia=tmedia+media;
	printf("A media eh.: %.2f\n",media);
	if (media>=7){
		printf("APROVADO!!!!\n");
		ap=ap+1;
	} else if(media<5){
		printf("REPROVADO!!!!\n");
		rp=rp+1; 
	}else
		printf("EXAME!!!!\n");
	i=i+1;
}
	mmedia=tmedia/6;
	printf("Total de Aprovado.: %d\n",ap);
	printf("Total de Reprovado.: %d\n",rp);
	printf("Media geral da sala.: %.2f",mmedia);	
	return 0;
}
