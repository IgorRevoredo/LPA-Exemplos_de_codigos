// Questão 4 - Triângulo
#include <stdio.h>

int main(){
	int x,y,z;
	printf("digite o primeiro numero:\n");
	scanf("%d",&x);
	printf("digite o segundo numero:\n");
	scanf("%d",&y);
	printf("digite o terceiro numero:\n");
	scanf("%d",&z);
	if (x + y > z && x + z > y && y + z > x){	
		if(x == y && x == z ){
			printf("Eh um triangulo equilatero");
		}
	  	else{ 
		  	if(x == y || x == z||y == z ){
				printf("Eh um triangulo isoceles");
			}
			else{
				printf("Eh um triangulo escaleno");
			}
        }  		
	}
	else{
		printf("nao eh um triangulo");
	}
	getchar();
	return 0;
}
	

 