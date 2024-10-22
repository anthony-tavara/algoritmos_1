/*Dado un listado de números reales del cual no se conoce la cantidad, almacenar los números en un
vector en el orden de entrada. Informar la cantidad de números y el contenido del vector indicando
la posición ocupada por cada número a partir de la primera posición.*/
#include <stdio.h>

int main(){
	float listado[]={10.2,2.5,5.3,6.1,8.9,2.4,1.2};
	int i;
	float vector[7];
	for(i=0;i<=6;i++){
		vector[i]=listado[i];
		printf("Número: %.2f Posición: %i\n",vector[i],i);	
	}
	return 0;
}
