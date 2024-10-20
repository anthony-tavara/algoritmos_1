#include <stdio.h>

int calcular_suma_hasta_n(int num){
	int i,suma;
	suma=0;
	for(i=0;i<=num;i++){
		suma+=i;
	}
	return suma;
}

void main(){
	int num;
	num=10;
	printf("La suma es : %i\n",calcular_suma_hasta_n(num));
}
