/*
2) Dado un archivo de números enteros, generar otro archivo que contenga
aquellos que son primos en el primero.
*/
#include <stdio.h>
#include <stdbool.h>

void verificarArchivo(FILE *archivo){
	if(archivo==NULL){
		printf("Archivo no encontrado.");
	}
}

void generarArchivoConNumeros(){
	FILE *archivoBinario;
	archivoBinario = fopen("numeros.txt","ab");
	int i;
	for(i=0;i<=10;i++){
		fwrite(&i,sizeof(int),1,archivoBinario);
	}
	fclose(archivoBinario);
}

bool esPrimo(int num){
	return (num%2==0);
}

void almacenarPrimo(int primo){
	FILE *archivo;
	archivo = fopen("primos.txt","ab");
	fwrite(&primo,sizeof(int),1,archivo);
}

void leerArchivoNumeros(){
	FILE *archivoBinario;
	archivoBinario = fopen("numeros.txt", "rb");
	verificarArchivo(archivoBinario);
	int num;
	fread(&num,sizeof(int),1,archivoBinario);
	while(!feof(archivoBinario)){
		if(esPrimo(num)){
			almacenarPrimo(num);
			printf("%i es primo.\n",num);

		}
		fread(&num,sizeof(int),1,archivoBinario);
		
	}
	
	fclose(archivoBinario);
}

int main(void){
	//generarArchivoConNumeros();
	leerArchivoNumeros();
	return 0;
}
