/*
Escribir un programa el cual reserve memoria dinámica para almacenar
un número entero (int), le solicite al usuario el ingreso de un número y se 
asigna dicho valor en la memoria reservada, luego mostrar dicho valor por 
pantalla. 
Liberar la memoria reservada al finalizar el programa.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *ptr = NULL;
	ptr = malloc(sizeof(int));
	if(ptr != NULL){
		printf("Ingrese un número: ");
		scanf("%i",ptr);
		printf("El número ingresado fue %i\n\n",*ptr);
		free(ptr);
	}


	return 0;
}
