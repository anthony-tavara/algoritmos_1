/*Dado n entero positivo y un listado de n números reales, almacenar lo números en un
vector ene el orden de entrada. Informar el contenido del vector indicando la posición
ocupada por cada número a partir de la primera posición.*/

#include <stdio.h>

int main(){
	int i,n;
	float num;
	printf("Ingrese n: ");
	scanf("%i",&n);
	float vector[n];
	for(i=0;i<n;i++){
		printf("Ingrese número: ");
		scanf("%f",&num);
		vector[i]=num;
	}
	for(i=0;i<n;i++)
		printf("Número: %i Posición: %f\n",i,vector[i]);
	return 0;		
}
