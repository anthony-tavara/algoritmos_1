#include <stdio.h>
#include <string.h>

typedef char cadena[30];

void cargar_datos(FILE *archivo){
	cadena nombre_producto;
	int i=1;
	int cantidad;
	int precio_unitario,precio_total_p;
	int final_total;
	archivo=fopen("productos.txt","wt");

	do{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\nPRODUCTO N°%i\n\n",i);
		printf("Ingrese el nombre del producto.\n");
		scanf("%s",nombre_producto);
		if(nombre_producto[0]!='0'){
			printf("Ingrese la cantidad.\n");
			scanf("%i",&precio_unitario);
			printf("Ingrese el precio unitario.\n");
			scanf("%i",&cantidad);
			precio_total_p=(precio_unitario * cantidad);
			final_total+=precio_total_p;
			fprintf(archivo,"NOMBRE: %s\nCANT: %i\nPRECIO UNI: %i\nPRECIO SUBTOTAL: %i\n\n",nombre_producto,cantidad,precio_unitario,precio_total_p);				
		}
		
		i++;	
	}while(nombre_producto[0]!='0');

	fprintf(archivo,"FINAL TOTAL: %i",final_total);
	fclose(archivo);
}

int main(){
	FILE *archivo;
	int respuesta_inicio;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("Desea cargar datos?\n 1 - SI\n");
	scanf("%i",&respuesta_inicio);
	if(respuesta_inicio==1)
		cargar_datos(archivo);
}
