/*
Una empresa de venta de productos alimenticios posee los siguientes listados:

	Listado de Stock: 
		Código de producto (entero de 4 cifras), 
		Cantidad en stock (real mayor que cero).
	Listado de Productos: 
		Código de producto (entero de 4 cifras), 
		Descripción, 
		Precio unitario.
	Listado de Ventas
		Código de producto (entero de 4 cifras), 
		Cantidad vendida en una venta.
	
Los listados de Stock y Productos están ordenados por código y no
necesariamente todos los registros de uno están en el otro. El listado de
ventas corresponde a un día y no está ordenado. Se pide :

a) Listar por pantalla la cantidad total vendida por producto.
b) Listar por pantalla el monto de venta por producto y el monto total.
c) Listar por pantalla el stock actualizado por producto, eliminando de la misma aquellos productos 
sin existencia y generando una lista aparte de faltantes.

*/

#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTOS 4
#define MAX_VENTAS 3

typedef struct{
	int codigo_producto;
	unsigned int cantidad_stock;
}listado_stock;

typedef struct{
	int codigo_producto;
	char descripcion_producto[30];
	int precio_unitario;	
}listado_productos;

typedef struct{
	int codigo_producto;
	unsigned int cantidad_vendida_una_venta;
}listado_ventas;

void cantidad_total_vendida_por_producto(listado_stock vecStock[4],listado_productos vecProductos[MAX_PRODUCTOS],listado_ventas vecVentas[MAX_PRODUCTOS]){
	int i,j;
	int codigos_iguales;
	int total_venta_producto;
	printf("PRODUCTO\tSTOCK\t\tCANTIDAD TOTAL VENTA\n");
	for(i=0;i<MAX_PRODUCTOS;i++){
		j=0;
		codigos_iguales=0;
		while(codigos_iguales==0 && j<= MAX_PRODUCTOS){
			if(vecProductos[i].codigo_producto == vecVentas[j].codigo_producto){
				total_venta_producto = vecProductos[i].precio_unitario * vecVentas[j].cantidad_vendida_una_venta;
				printf("%s\t\t%i u.\t\t%i\n",vecProductos[i].descripcion_producto,vecVentas[j].cantidad_vendida_una_venta,total_venta_producto);
			//	printf("%s\t\t\t$%i \n",vecProductos[i].descripcion_producto,total_venta_producto);
				codigos_iguales=1;
			}
			j++;
		}
	}
		
}

int main(){
	listado_stock vecStock[4]={
		{1,20},
		{2,25},
		{3,10},
		{4,100}
	};
	listado_productos  vecProductos[MAX_PRODUCTOS]={
		{1,"Arroz",1000},
		{3,"Fideo",500},
		{5,"Alfajor",800},
		{6,"Galletas",700}
		
	};
	
	listado_ventas vecVentas[MAX_VENTAS]={
		{1,40},
		{3,100},
		{6,20}
	};
	
	cantidad_total_vendida_por_producto(vecStock,vecProductos,vecVentas);
	
	return 0;
}
