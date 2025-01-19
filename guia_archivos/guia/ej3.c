/*
3) Dado un archivo de números enteros entre 0 y 255, imprimir los caracteres
correspondientes según el código ASCII.
*/

#include <stdio.h>

int main(void){
	FILE *archivo;
	archivo = fopen("numeros.txt","rb");
	int num;
	fread(&num,sizeof(int),1,archivo);
	while(!feof(archivo)){
		char caracter = num;
		printf("Num: %c\n",caracter);
		fread(&num,sizeof(num),1,archivo);	
	}
	return 0;
}
