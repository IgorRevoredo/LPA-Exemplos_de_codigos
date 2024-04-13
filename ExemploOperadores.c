#include <stdio.h>

int main(){
	
	int resultado, x, y;
	
	x = 10;
	y = 5;
	printf("x = %d e y = %d\n\n",x,y);
	
	//adição
	resultado = x + y;
	printf("Soma = %d\n",resultado);
	//subtração
	resultado = x - y;
	printf("Diferenca = %d\n",resultado);
	
	//multiplicação
	resultado = x * y;
	printf("Produto = %d\n",resultado);
	
	//divisão
	resultado = x / y;
	printf("Divisao = %d\n",resultado);
	
	
	getchar();
	return 0;
}