/*
Escribir u programa el cual reserve memoria dinamica para almacenar una cierta cantidad de 
numeros enteros (n *int), ese valor n debe ser ingresado por el usuario. Luego solcitarle
que ingrese n valores enteros ingresados de a uno y almacenarlos en la memoria previamente
reservada. Mostrar luego todos los valores ingresados.
Liberar la memoria reservada al finalizar el programa.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n,i;	
	int *ptr = NULL;

	printf("Ingrese la cantidad de numeros a ingresar: ");
	scanf("%i",&n);

	ptr = malloc(n * sizeof(int));
	if( ptr != NULL ){
		
		for(i=0;i<n;i++){
			printf("Ingrese un numero: ");
			scanf("%i",&ptr[i]);	
		}		
		printf("\n\n");
		for(i=0;i<n;i++){
			printf("Pos %i Num: %i\n",i+1,ptr[i]);
		}
		free(ptr);
	}else{
		printf("Error de memoria.\n");
	}

	return 0;
}
