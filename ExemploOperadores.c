#include <stdio.h>

int main(){
	
	int resultado, x, y;
	
	x = 10;
	y = 5;
	printf("x = %d e y = %d\n\n",x,y);
	
	//adi��o
	resultado = x + y;
	printf("Soma = %d\n",resultado);
	//subtra��o
	resultado = x - y;
	printf("Diferenca = %d\n",resultado);
	
	//multiplica��o
	resultado = x * y;
	printf("Produto = %d\n",resultado);
	
	//divis�o
	resultado = x / y;
	printf("Divisao = %d\n",resultado);
	
	
	getchar();
	return 0;
}