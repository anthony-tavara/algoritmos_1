/*Dada la estructura de datos del problema anterior, escribir el algoritmo de
busqueda binaria para la búsqueda de un dato correspondiente a los campos de apelliido,
nombre, o número de legajo, a elección dell usuario.  */

//BUSQUEDA BINARIA SOLO SE PUEDE HACER CUANDO ESTA ORDENADO

#include <stdio.h>
#include <string.h>

#define CANT_EMPLEADOS 2

typedef struct{
	char apellido[15];
	char nombre[15];
	int legajo;
	char direccion[40];
	int fecha_nacimiento[3];
	int fecha_ingreso[3];
}empleado;

void cargar_empleados(empleado vec[CANT_EMPLEADOS]){
	int i;
	for(i=0;i<CANT_EMPLEADOS;i++){
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n~     Empleado N°%i     ~\n",i+1);
		printf("---------------------------------\n");
		printf("Ingrese su apellido.\n~ ");
		scanf("%s",vec[i].apellido);
		printf("Ingrese su nombre.\n~ ");
		scanf("%s",vec[i].nombre);		
		printf("Ingrese su legajo.\n~ ");
		scanf("%i",&vec[i].legajo);
		printf("Ingrese su dirección.\n~ ");
		scanf("%s",vec[i].direccion);
/*		printf("Ingrese su nacimiento.\nDía: ");
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
		printf("\n");     */
	}
}

void ordenar_por_apellido(empleado vec[CANT_EMPLEADOS]){
	//INSERTION SORT
	int i,j;
	empleado aux;	
		for(i=1;i<CANT_EMPLEADOS;i++){
			aux=vec[i];
			j=i-1;
			//hasta que j sea mayor o igual a 0, y que el apellido del vec[i] sea menor a vec[j]	
			while(j >= 0 && (strcmp(aux.apellido,vec[j].apellido) < 0)){
				vec[j+1]=vec[j];
				j--;
			}
			vec[j+1]=aux;
		}
}

void ordenar_por_nombre(empleado vec[CANT_EMPLEADOS]){
	//INSERTION SORT
	int i,j;
	empleado aux;
	for(i=1;i<CANT_EMPLEADOS;i++){
		aux=vec[i];
		j=i-1;
		while(j>=0 && strcmp(aux.nombre,vec[j].nombre) < 0){
			vec[j+1]=vec[j];
			j--;
		}
		vec[j+1]=aux;
	}
}

void ordenar_por_direccion(empleado vec[CANT_EMPLEADOS]){
	//INSERTION SORT
	int i,j;
	empleado aux;
	for(i=1;i<CANT_EMPLEADOS;i++){
		aux=vec[i];
		j=i-1;
		while(j >= 0 && ( strcmp(aux.direccion,vec[j].direccion) < 0 )){
			vec[j+1]=vec[j];
			j--;
		}
		vec[j+1]=aux;
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
		printf("Empleado n°%i:\n",i+1);
		printf("Apellido: %s\n",vec[i].apellido);
		printf("Nombre: %s\n",vec[i].nombre);
		printf("Legajo: %i\n",vec[i].legajo);
		printf("Dirección: %s\n",vec[i].direccion);
/*		printf("Fecha de nacimiento: %i/%i/%i\n",vec[i].fecha_nacimiento[0],vec[i].fecha_nacimiento[1],vec[i].fecha_nacimiento[2]);
		printf("Fecha de ingreso: %i/%i/%i\n",vec[i].fecha_ingreso[0],vec[i].fecha_ingreso[1],vec[i].fecha_ingreso[2]);
*/		printf("\n");
	}
}

int main(){
	int respuesta_cargar,respuesta_ordenar,respuesta_seleccion_ordenar;
	empleado empleados[CANT_EMPLEADOS];

	printf("Desea cargar los datos de los empleados?\n");
	printf("0 - NO\t1 - SI\n");
	scanf("%i",&respuesta_cargar);
	
	if(respuesta_cargar==1){
		cargar_empleados(empleados);
		
		printf("Desea ordenar los registros?\n");
		printf("0 - NO\t1 - SI\n");
		scanf("%i",&respuesta_ordenar);

		if(respuesta_ordenar==1){
			printf("OPCIONES DE ORDENAMIENTO:\n1 - Apellido\n2 - Nombre\n 3 - Legajo\n4 - Dirección");
			scanf("%i",&respuesta_seleccion_ordenar);
			switch (respuesta_seleccion_ordenar){
				case 1:
					printf("\nEMPLEADOS ORDENADOS POR APELLIDO\n");
					ordenar_por_apellido(empleados);
					break;
				case 2:
					printf("\nEMPLEADOS ORDENADOS POR NOMBRE\n");
					ordenar_por_nombre(empleados);
					break;
				case 3:
					printf("\nEMPLEADOS ORDENADOS POR LEGAJO\n");
					ordenar_por_legajo(empleados);
					break;
				case 4:
					printf("\nEMPLEADOS ORDENADOS POR DIRECCION\n");
					ordenar_por_direccion(empleados);
					break;
			}
		}
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		mostrar_empleados(empleados);

	}
	return 0;
}
