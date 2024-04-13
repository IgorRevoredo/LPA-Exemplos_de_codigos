#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(){
	int terminar = FALSE;
	int i = 0;
	
	while (!terminar){
		printf("Continuando ... i = %d\n",i);
		if (i > 10){
			terminar = TRUE;
		}
		i++;
	}
	
	return 0;	
}