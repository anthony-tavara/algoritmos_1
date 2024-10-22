/*Dado un listado de valores numéricos i y x, donde i es un entero mayor que 0 y x un real, almacenar
x en la posición i de un vector. El listado no se ingresa ordenado por posición. Informar la cantidad
de números y el contenido del vector indicando la posición ocupada por cada número a partir de la 
primera posición.*/

#include <stdio.h>

#define MF 20

typedef float t_vec[MF];

int main(){
	int pos,i;
	float num;
	t_vec vector;
	do{	
		printf("ingrese posicion: ");
		scanf("%i",&pos);
		printf("ingrese numero: ");
		scanf("%f",&num);
		vector[pos]=num;
	}while(num!=0);
	
	for(i=0;i<MF;i++)
		printf("Valor: %f Posición: %i\n",vector[i],i);
	return 0;
}
