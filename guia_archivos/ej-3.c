//   EJERCICIO 1   //
/*
Dada la siguiente estructura:

typedef struct{
	int padron;
	char ape_nom[30];
	float nota;
}t_regAlumno;

Escribir un programa que permita almacenar y consultar datos en un archivo de alumnos.
El programa deberá tener 2 opciones:
 1 - Cargar Datos Alumnos
 2 - Listar Alumnos

Los datos que se guaardan de los alumnos son los indicado en la estructura inicial.
La carga de datos, termina cuando el padron ingresado sea 0.
La carga de datos, puede reanudarse, y en este caso no se deben perder los datos existentes.
El listado debe ser de todos los datos, encolumnados, y en el orden que se encuentran almacenados.
*/

#include <stdio.h>
#include <string.h>

#define MAX_ALUMNOS 100

typedef struct{
	int padron;
	char ape_nom[30];
	float nota;
}t_regAlumno;

void cargar_datos_alumnos(FILE *archivo){
	int cant_alumnos=1;
	t_regAlumno alumno;
	
	do{
		printf("\nALUMNO NÚMERO %i\n",cant_alumnos);

		printf("Ingrese su padrón.\n");
		scanf("%i",&alumno.padron);		

		if(alumno.padron!=0){
			printf("Ingrese su apellido y nombre.\n");
			scanf("%s",alumno.ape_nom);			
			printf("Ingrese su nota.\n");		
			scanf("%f",&alumno.nota);			
			printf("---------------------------------\n\n");
			
			fwrite(&alumno,sizeof(t_regAlumno),1,archivo);	
		}	
		cant_alumnos++;
	}while(alumno.padron!=0 && cant_alumnos<MAX_ALUMNOS);
	fclose(archivo);
}

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


int main(){
	int inicio;
	FILE *archivo;
	printf("¿Qué desea hacer?\n");
	printf("1 - Cargar datos de los alumnos\n2 - Listar el archivo alumnos\n");
	scanf("%i",&inicio);

	while(inicio != 1 &&  inicio != 2){	
		printf("No ingreso correctamente la respuesta.\n");
		printf("1 - Cargar datos de los alumnos\n2 - Listar el archivo alumnos\n");	
		scanf("%i",&inicio);
	}

	if(inicio==1){
		archivo=fopen("ej3.dat","wb");//abro en modo escritura binaria
		cargar_datos_alumnos(archivo);		
	}
	else if(inicio == 2){
		archivo=fopen("ej3.dat","rb");//abro en modo lectura binaria
		listar_contenido(archivo);				
	}
	return 0;
	
}

//	fwrite(&alumno,sizeof(t_regAlumno),1,archivo);
