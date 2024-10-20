#include <stdio.h>

int calcular_factorial(int num){
	int factorial,i;;
	factorial=1;
	for(i=1;i<num;i++){
		factorial=factorial*i;		
	}
	return factorial;
}

void main(){
	int num;
	num=10;
	printf("El factorial de %i es : %i\n",num,calcular_factorial(num));
}
