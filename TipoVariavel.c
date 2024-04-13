#include <stdio.h>

int main(){
	// Declaração de variáveis
	char nota_musical;
	int idade;
	float salario;
	
	int num1, num2, media;
	
	/* Lógica principal 
	Aqui iremos incluir comandos de entrada e saída*/
	
	printf("Digite a primeira nota:");
	scanf("%d",&num1);
	printf("Digite a segunda nota:");
	scanf("%d",&num2);	
	
	media = (num1 + num2)/2;
	// media = num1 + num2/2;
	printf("\n\n\n\nMedia (numero inteiro) = %d\n\nFim do programa!",media);
	
	getch();	
	
	return 0;
}