/*
5) Dado un archivo de apellidos y nombres, generar otro archivo con los
mismos datos ordenados alfabéticamente.
Suponer que el archivo de entrada cabe en memoria
*/
#include <stdio.h>

void generarArchivoApeNom(FILE *archivo){
	char ape_nom[] = "Gonzalez Catan";
	int i;
	for(i=0;i<11;i++)
		fwrite(&ape_nom,sizeof(ape_nom - 1),1,archivo);
	fclose(archivo);
}

void ordenarNombres(FILE *archivo){
	//Creo que se debe usar strcmp()
	
}

int main(void){
	FILE *archivo;
	archivo = fopen("apellido_nombres.txt","wb");
	generarArchivoApeNom(archivo);
}
