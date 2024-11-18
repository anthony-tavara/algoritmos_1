//   EJERCICIO 1   //
/*
Dada la siguiente estructura:

typedef struct{
	int padron;
	char ape_nom[30];
	float nota;
}t_regAlumno;

Escriba un programa modular que permita 
listar el contenido del archivo creado en el punto 1.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
	int padron;
	char ape_nom[30];
	float nota;
}t_regAlumno;

int main(void){
	t_regAlumno alumno;
	FILE *archivo = fopen("ej1.txt","r");
	
	while ( !feof(archivo) ){
		fread(&alumno,sizeof(t_regAlumno),1,archivo);
	    printf("Padrón: %d\nNombre: %s\nNota: %.2f\n\n", alumno.padron, alumno.ape_nom, alumno.nota);
	}

	fclose(archivo);

}

