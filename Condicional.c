#include <stdio.h>

int main(){
	int num;
	printf("Digite um numero:");
	scanf("%d",&num);
	
	if (num % 2 == 0){
		printf("eh par!\n\n");
	}else{
		printf("eh impar!\n\n");
	}
	getchar();
	return 0;	
}