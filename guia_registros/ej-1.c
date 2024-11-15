/*
Se tienen los siguientes datos de los empleados de una empresa:

Apellido y nombre (35 caracteres)
Fecha de nacimiento (dia, mes y año)
Fecha de ingreso (dia, mes y año)
Sueldo básico

Se conoce la cantidad N de empleados y la fecha de procesamiento.

Se pide: Imprimir un listado con los apellidos y nombres de las personas que cumplan
años en el mes y calcular e informar una suma de regalo equivalente al uno por mil del
sueldo por cada año cumplido.
*/

#include <stdio.h>
#include <string.h>

#define CANT_EMPLEADOS 1
#define MES_PROCESAMIENTO 5
#define ANIO_ACTUAL 2024

typedef struct{
	char apellido_nombre[30];
	int nacimiento[3];
	int fecha_ingreso[3];
	int sueldo_basico;
} empleado;

void cargar_empleados(empleado vec[CANT_EMPLEADOS]){
	int i;
	for(i=0;i<CANT_EMPLEADOS;i++){
		printf("~     Empleado N°%i     ~\n",i+1);
		printf("---------------------------------\n");
		printf("Ingrese su apellido y su nombre.\n~ ");
		scanf("%s",vec[i].apellido_nombre);
/*		printf("Ingrese su nacimiento.\nDía: ");
		scanf("%i",&vec[i].nacimiento[0]);
		printf("Mes: ");
		scanf("%i",&vec[i].nacimiento[1]);
		printf("Año: ");
		scanf("%i",&vec[i].nacimiento[2]);  */
		printf("Ingrese su fecha de ingreso.\nDía: ");
		scanf("%i",&vec[i].fecha_ingreso[0]);
		printf("Mes: ");
		scanf("%i",&vec[i].fecha_ingreso[1]);
		printf("Año: ");
		scanf("%i",&vec[i].fecha_ingreso[2]);		
		printf("Ingrese su sueldo.\n~ $");
		scanf("%i",&vec[i].sueldo_basico);
		printf("\n");				
	}
}
void aniversario_empleado(empleado empleados[CANT_EMPLEADOS]){
	int i;
	int suma_regalo;
	printf("EMPLEADO\t\t\tCOBRO TOTAL POR AÑOS TRABAJADOS\n");
	for(i=0;i<CANT_EMPLEADOS;i++){
		if(empleados[i].fecha_ingreso[1]==MES_PROCESAMIENTO){
			suma_regalo=empleados[i].sueldo_basico;
			suma_regalo=(suma_regalo/1000)*(ANIO_ACTUAL-empleados[i].fecha_ingreso[2]);
			printf("%s\t\t\t\t$%i\n",empleados[i].apellido_nombre,suma_regalo);
		}	
	}
}


int main(){
	empleado empleados[CANT_EMPLEADOS];
	
	cargar_empleados(empleados);
	aniversario_empleado(empleados);
	return 0;
	
}

