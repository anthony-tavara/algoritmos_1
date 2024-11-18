//   EJERCICIO 1   //
/*
Dada la siguiente estructura:

typedef struct{
	int padron;
	char ape_nom[30];
	float nota;
}t_regAlumno;

~ Escriba un programa modular que permita dar de alta registros de tipo t_regAlumno.
~ El usuario debe poder continuar ingresando datos hasta que ingrese un padron igual 
a 0.
~ Asuma que el archivo es inexistente ~
*/

#include <stdio.h>
#include <string.h>

#define MAX_ALUMNOS 100

typedef struct{
	int padron;
	char ape_nom[30];
	float nota;
}t_regAlumno;

void cargar_alumnos(t_regAlumno alumnos[MAX_ALUMNOS]){
	int i=0;
	FILE *archivo = fopen("ej1.txt","wb");

	if(archivo==NULL){
		printf("error al crear el archivo");
	}
	
	do{
		printf("\nALUMNO NÚMERO %i\n",i+1);

		printf("Ingrese su padrón.\n");
		scanf("%i",&alumnos[i].padron);		

		if(alumnos[i].padron!=0){
			printf("Ingrese su apellido y nombre.\n");
			scanf("%s",alumnos[i].ape_nom);			
			printf("Ingrese su nota.\n");		
			scanf("%f",&alumnos[i].nota);			
			printf("---------------------------------\n\n");
			
			fwrite(&alumnos[i],sizeof(t_regAlumno),1,archivo);	
		}	
		i++;
	}while(alumnos[i-1].padron!=0 && i<MAX_ALUMNOS);
	fclose(archivo);
}

int main(void){
	t_regAlumno alumnos[MAX_ALUMNOS];
	int inicio;
	
	printf("Desea cargar lo datos de alumnos? ( 0 - 1 )\n");
	scanf("%i",&inicio);
	if(inicio==1){
		cargar_alumnos(alumnos);
	}
	return 0;
}
	
