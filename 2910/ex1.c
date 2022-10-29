#include <stdio.h>

int main (){
	
	// var
	char op;
	switchCase:
	
	printf ("Digite a opcao (+ - * /): ");
	scanf (" %c", &op);	
	
	switch (op){
		case '+':
			printf ("SOMA");
			break;
		case '-':
			printf ("SUBTRACAO");
			break;
		case '*':
			printf ("MULTIPLICACAO");
			break;
		case '/':
			printf ("DIVISAO");
			break;
		default:
			printf ("Opcao invalida\n");
			goto switchCase;
}
	return 0;
	
	
	
	
	}
	
	
	
	
	
	
