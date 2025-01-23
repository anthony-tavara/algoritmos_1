/*
8) Leer un archivo de caracteres que representa un texto formado por
oraciones terminadas en punto. Calcular la cantidad de monosílabos que
hay en el texto, la longitud promedio de las palabras y la cantidad de
palabras.
*/
#include <stdio.h>
#include <string.h>

void procesarTexto(FILE *archivo, int *cantPalabras, int *promedioLongPalabras){
	char palabra[100];
	int longitudPalabra;
	fscanf(archivo,"%s",palabra);
	while(!feof(archivo)){
		//printf("%s\n",palabra);
		longitudPalabra = strlen(palabra) - 1;
		printf("%i\n",longitudPalabra);
		(*promedioLongPalabras)+=longitudPalabra;
		(*cantPalabras)++;
		fscanf(archivo,"%s",palabra);
	}
	(*promedioLongPalabras)/=(*cantPalabras);
}

int main(void){
	FILE *archivoEntrada;
	archivoEntrada = fopen("texto.txt","r");
	int cantPalabras=0;
	int promedioLongPalabras=0;
	procesarTexto(archivoEntrada,&cantPalabras, &promedioLongPalabras);

	FILE *archivoSalida;
	archivoSalida = fopen("salida.txt","w");
	fprintf(archivoSalida,"\nLa cantidad de palabras es de %i.\nPromedio de longitud de las palabras es de %i caracteres.\n",cantPalabras,promedioLongPalabras);
	return 0;
}
