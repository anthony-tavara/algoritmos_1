/*
Asumiendo que ya existe un puntero que apunta un bloque de memoria previamene reservada con
malloc de tamaño (n * int), redimensionar dicha memoria a un tamaño de (2 * n * int ).
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *ptr = NULL;
	int n; 
	n=2;
	
	ptr = malloc(n * sizeof(int));
	if( ptr != NULL ){
		realloc(ptr, 2 * n * sizeof(int));
		free(ptr);
	}
}
