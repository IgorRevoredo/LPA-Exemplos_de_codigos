#include <stdio.h>
#include <stdlib.h>

int fat(int n){
	int fatorial = 1;
	int num = 1;
	while (num <= n){
		fatorial = fatorial*num;
		num = num + 1;
	}
	
	return fatorial;
}

int main(void){
	int x;
	int resultado;
	printf("Digite um numero:");
	scanf("%d",&x);
    x = 5;
	resultado = fat(x);
	printf("%d",resultado); 
	getchar();    
	return 0;	
}