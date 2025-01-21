/*
7) Leer un archivo de caracteres que representa un texto formado por
oraciones terminadas en punto. Copiarlo en otro archivo eliminando los
espacios superfluos.
*/
#include <stdio.h>

void procesarTexto(FILE *archivoEntrada,FILE *archivoSalida){
	char palabra[50];
	fscanf(archivoEntrada,"%s",palabra);
	while(!feof(archivoEntrada)){
		if(palabra[0]=='.'){
			fprintf(archivoSalida,"%s\n",palabra);				
		}else{
			fprintf(archivoSalida,"%s ",palabra);				
		}
		fscanf(archivoEntrada,"%s",palabra);
	}
	fclose(archivoEntrada);
}

int main(void){
	FILE *archivoEntrada, *archivoSalida;
	archivoEntrada = fopen("oraciones.txt","r");
	archivoSalida = fopen("oraciones_procesadas.txt","w");
	procesarTexto(archivoEntrada,archivoSalida);
	return 0;
}
