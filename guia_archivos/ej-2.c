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

void listar_contenido(FILE *archivo){
	t_regAlumno alumno;
	int i=1;
	fread(&alumno,sizeof(t_regAlumno),1,archivo);
	while(!feof(archivo)){
		printf("ALUMNO NRO %i\n",i);
		printf("Padron: %i\n",alumno.padron);
		printf("Apellido y nombre: %s\n",alumno.ape_nom);
		printf("Nota: %2.f\n\n",alumno.nota);	
		fread(&alumno,sizeof(t_regAlumno),1,archivo);	
		i++;
	}
	fclose(archivo);
}

int main(void){	
	FILE *archivo;

	archivo=fopen("ej1.txt","rb");

	if(archivo == NULL){
		printf("Archivo no encontrado");
	}else{
		listar_contenido(archivo);
	}
}

