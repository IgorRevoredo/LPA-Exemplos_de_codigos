#include <stdio.h>

int main(){
	char teste;
	printf ("Este exemplo foi criado com Loop infinito\n\n");
	while (1){
		printf("Digite um caractere: ");
		fflush(stdin); // necessidade de usar o fflush
		scanf("%c",&teste);
		printf("vc digitou: %c\n\n",teste);
	}
	return 0;
}