#include <stdio.h>
#include <string.h>

typedef struct{
	char nombre[15];
	int cantidad;
	int precio_unitario;
	int precio_total_p;
}t_regProducto;

int cargar_productos(FILE *archivo){
	t_regProducto producto;
	archivo=fopen("productos.dat","wb");

	int cant_p=1;
	do{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("PRODUCTO NRO° %i\n\n",cant_p);
		printf("Ingrese el nombre del producto.\n~ ");
		scanf("%s",producto.nombre);
		printf("Ingrese la cantidad.\n~ ");
		scanf("%i",&producto.cantidad);
		
		if(producto.cantidad!=0){
			printf("Ingrese su precio unitario.\n~ ");
			scanf("%i",&producto.precio_unitario);
			producto.precio_total_p=(producto.precio_unitario * producto.cantidad);				
			fwrite(&producto,sizeof(t_regProducto),1,archivo);
		}
		cant_p++;
	}while(producto.cantidad!=0);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	fclose(archivo);
}

void listar_productos(FILE *archivo){
	t_regProducto producto;
	archivo=fopen("productos.dat","rb");

	int cant_p=1;
	int final_total=0;
	fread(&producto,sizeof(t_regProducto),1,archivo);

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("|---|-------------------|---------------|---------------|---------------|\n");
	printf("| N°| NOMBRE\t\t| CANTIDAD\t| PRECIO U.\t| PRECIO TOTAL\t|\n");
	printf("|---|-------------------|---------------|---------------|---------------|\n");
	
	while(!feof(archivo)){
		printf("| %i | %-15s\t| %-10i\t| $%-10i\t| $%-10i\t|\n",cant_p,producto.nombre,producto.cantidad,producto.precio_unitario,producto.precio_total_p);
		final_total=(final_total + producto.precio_total_p);
		cant_p++;
		
		fread(&producto,sizeof(t_regProducto),1,archivo);		
	}
	printf("|---|-------------------|---------------|---------------|---------------|\n");
	printf("\nPRECIO FINAL TOTAL : $%i",final_total);
	printf("\n\n\n");	
	fclose(archivo);
}

int main(void){
	FILE *archivo;
	
	int pregunta_inicio;
	int respuesta_mostrar_lista;
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("¿Qué desea hacer? Ingrese el número indicado como respuesta.\n\n");
	printf("1 - Cargar productos.\n2 - Listar productos cargados.\n\n");
	scanf("%i",&pregunta_inicio);
	while(pregunta_inicio != 1 && pregunta_inicio != 2){
		printf("Opción incorrecta.\nIngrese nuevamente, por favor.");
		printf("1 - Cargar productos.\n2 - Listar productos cargados.\n");	
		scanf("%i",&pregunta_inicio);		
	}
	
	if(pregunta_inicio == 1){
		cargar_productos(archivo);
		printf("¿Desea mostrar la lista de productos cargados?\n1 - Continuar\n");
		scanf("%i",&respuesta_mostrar_lista);
		
		if(respuesta_mostrar_lista==1){
			listar_productos(archivo);
			rewind(archivo);
		}else
			printf("Hasta la próxima!\n");
	}else if(pregunta_inicio == 2){
		listar_productos(archivo);
	}
	return 0;
}
