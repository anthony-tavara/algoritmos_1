/*Generar los primeros n números naturales e informar un listado de cada número
generado junto con el factorial correspondiente. Utilizar una función que dado un
número devuelva su factorial.*/

#include <stdio.h>

int calcular_factorial(int num){
	int i,factorial=1;
	for(i=2;i<=num;i++)
		factorial=factorial*i;
	return factorial;
}

int main(){
	int n,i;
	printf("Ingrese el valor de  n: ");
	scanf("%i",&n);
	for(i=0;i<=n;i++)
		printf("Número: %i Factorial: %i\n",i,calcular_factorial(i));
	return 0;
}
