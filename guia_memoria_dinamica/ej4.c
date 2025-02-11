/*
Escribir un programa el cual reserve memoria dinamica para almacenar un struct del tipo 
t_alumno (ver anexo). Luego solicitar al usuario que ingrese los datos del alumno y 
almacenarlos en la memoria previamente reservada.
Mostrar luego todos los datos de todos los alumnos.
Liberar la memoria reservada al finalizar el programa.										
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int padron;
	char nombre[30];
	char apellido[30];
}t_alumno;

int main(void){
	t_alumno *alumnos = NULL;
	int n,i;
	printf("¿Cuantos alumnos desea ingresar?\n");
	scanf("%i",&n);
	alumnos = malloc(n * sizeof(t_alumno));
	
	if( alumnos != NULL){

		for(i=0;i<n;i++){
		
			printf("Alumno %i \n",i+1);			
			printf("Ingrese el padron: ");
			scanf("%i", &alumnos[i].padron);
			printf("Ingrese el nombre: ");
			scanf("%s", alumnos[i].nombre);
			printf("Ingrese el apellido: ");
			scanf("%s", alumnos[i].apellido);
		}

		for(i=0;i<n;i++){
			printf("Alumno %i \n",i+1);			
			printf("Padron: %i\n",alumnos[i].padron);
			printf("Nombre: %s\n",alumnos[i].nombre);			
			printf("Apellido: %s\n",alumnos[i].apellido);			
			
		}

		free(alumnos);
	}
		
	return 0;
}
