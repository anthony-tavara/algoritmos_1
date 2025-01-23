/*
9) Se tiene un archivo con los siguientes datos de los empleados de una
empresa: Apellido y Nombre (35 caracteres), Fecha de Nacimiento (día,
mes y año) ,Fecha de Ingreso (día , mes y año) y Sueldo Básico
Se conoce la fecha de procesamiento.
Se pide:

a) imprimir un listado con los apellidos y nombres de las personas que
cumplan años en el mes de enero por ejemplo.
b) calcular e informar una suma de regalo equivalente al uno por mil del
sueldo por cada año cumplido.
*/

#include <stdio.h>
#define MAX_EMPLEADOS 100
typedef struct{
	char ape_nom[35];
	int fecha_naci[3];
	int fecha_ingreso[3];
	int sueldo_basico;
}t_empleado;

void generarArchivoEmpleados(FILE *archivo){
	t_empleado empleados[MAX_EMPLEADOS];
	int i;
	for(i=0;i<3;i++){
		printf("Empleado Nro %i\n\n",i+1);
		printf("Ingrese el nombre\n");
		scanf("%s",empleados[i].ape_nom);
		printf("Ingrese su fecha de nacimiento\n");
		printf("Dia: ");
		scanf("%i",&empleados[i].fecha_naci[0]);
		printf("Mes: ");
		scanf("%i",&empleados[i].fecha_naci[1]);
		printf("Año: ");
		scanf("%i",&empleados[i].fecha_naci[2]);
		printf("Ingrese su fecha de ingreso\n");
		printf("Dia: ");
		scanf("%i",&empleados[i].fecha_ingreso[0]);
		printf("Mes: ");
		scanf("%i",&empleados[i].fecha_ingreso[1]);
		printf("Año: ");
		scanf("%i",&empleados[i].fecha_ingreso[2]);
		printf("Ingrese su sueldo Basico\n");
		scanf("%i",&empleados[i].sueldo_basico);

		fwrite(&empleados[i],sizeof(t_empleado),1,archivo);
	}
	fclose(archivo);
}

void procesarTexto(FILE *archivo){
	t_empleado empleado;
	fread(&empleado,sizeof(empleado),1,archivo);
	int i=1;
	int sumaRegalo=(2025-empleado.fecha_ingreso[2])*empleado.sueldo_basico;
	while(!feof(archivo)){
		if(empleado.fecha_naci[1] == 9){
			printf("%i - %s\n",i,empleado.ape_nom);
			printf("Su bonificacion de regalo es de $%i\n",sumaRegalo);
		}
		fread(&empleado,sizeof(empleado),1,archivo);
		i++;
	}
}
 
int main(void){
	//FILE *archivoEmpleados;
	//archivoEmpleados = fopen("empleados.txt","wb");
	//generarArchivoEmpleados(archivoEmpleados);
	FILE *archivoEntrada;
	archivoEntrada = fopen("empleados.txt","rb");
	procesarTexto(archivoEntrada);
	return 0;
}
