#include <stdio.h>

int main(){
	// Declara��o de vari�veis
	char nota_musical;
	int idade;
	float salario;
	
	int num1, num2, media;
	
	/* L�gica principal 
	Aqui iremos incluir comandos de entrada e sa�da*/
	
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