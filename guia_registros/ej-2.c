/*
Se tienen datos de empleados de una empresa según la siguiente
estructura:
	Apellido, nombre.
	Legajo.
	Dirección: Calle, N°, Localidad, provincia, CP.
	Fecha de nacimiento: Día, mes, año.
	Fecha de ingreso: Día, mes, año.

Se pide hacer un programa que almacene los datos de todos los empleados
en una tabla en memoria y que permita obtener un listado ordenado por
pantalla según distintos items, como, por ejemplo, por apellido y nombre,
por número de legajo, por edad, por antiguedad, por localidad.
Utilizar un esquema tipo menú.
*/
#include <stdio.h>
#include <string.h>

#define CANT_EMPLEADOS 2

typedef struct{
	char apellido_nombre[30];
	int legajo;
	char direccion[40];
	int fecha_nacimiento[3];
	int fecha_ingreso[3];
}empleado;

void cargar_empleados(empleado vec[CANT_EMPLEADOS]){
	int i;
	for(i=0;i<CANT_EMPLEADOS;i++){
		printf("~     Empleado N°%i     ~\n",i+1);
		printf("---------------------------------\n");
		printf("Ingrese su apellido y su nombre.\n~ ");
		scanf("%s",vec[i].apellido_nombre);
		printf("Ingrese su legajo.\n~ ");
		scanf("%i",&vec[i].legajo);
		printf("Ingrese su dirección.\n~ ");
		scanf("%s",vec[i].direccion);
		printf("Ingrese su nacimiento.\nDía: ");
		scanf("%i",&vec[i].fecha_nacimiento[0]);
		printf("Mes: ");
		scanf("%i",&vec[i].fecha_nacimiento[1]);
		printf("Año: ");
		scanf("%i",&vec[i].fecha_nacimiento[2]);  
		printf("Ingrese su fecha de ingreso.\nDía: ");
		scanf("%i",&vec[i].fecha_ingreso[0]);
		printf("Mes: ");
		scanf("%i",&vec[i].fecha_ingreso[1]);
		printf("Año: ");
		scanf("%i",&vec[i].fecha_ingreso[2]);		
		printf("\n");
	}
}
void ordenar_por_legajo(empleado vec[CANT_EMPLEADOS]){
	int i,j;
	empleado aux;
	for(i=0;i<CANT_EMPLEADOS;i++)
		for(j=0;j<CANT_EMPLEADOS-i-1;j++){
			if(vec[j].legajo > vec[j+1].legajo){
				aux=vec[j+1];
				vec[j+1]=vec[j];
				vec[j]=aux;
			}
		}

}
void mostrar_empleados(empleado vec[CANT_EMPLEADOS]){
	int i;
	for(i=0;i<CANT_EMPLEADOS;i++){
		printf("Empleado n°%i\n",i);
		printf("%s\n",vec[i].apellido_nombre);
		printf("Legajo: %i\n",vec[i].legajo);
		printf("Dirección: %s\n",vec[i].direccion);
		printf("Fecha de nacimiento: %i/%i/%i\n",vec[i].fecha_nacimiento[0],vec[i].fecha_nacimiento[1],vec[i].fecha_nacimiento[2]);
		printf("Fecha de ingreso: %i/%i/%i\n",vec[i].fecha_ingreso[0],vec[i].fecha_ingreso[1],vec[i].fecha_ingreso[2]);
		printf("\n\n");
	}
}

int main(){
	empleado empleados[CANT_EMPLEADOS];
	cargar_empleados(empleados);
	mostrar_empleados(empleados);
	ordenar_por_legajo(empleados);
	mostrar_empleados(empleados);
	return 0;
}
