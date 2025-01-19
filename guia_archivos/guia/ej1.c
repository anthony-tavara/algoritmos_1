/*
Dado un archivo de números enteros mayores o iguales que 0, generar otro
archivo que almacene los factoriales de cada número del registro
correspondiente del archivo de entrada.
*/

#include <stdio.h>

void cargarNumeros(){
	FILE *archivo;
	archivo=fopen("ej1.txt","wb");
	if(archivo==NULL)
		printf("Archivo no encontrado.");
	int i;
	for(i=0;i<11;i++){
		fwrite(&i,sizeof(int),1,archivo);
	}
	fclose(archivo);
}


int calcularFactorial(int num){
	if(num == 0 || num == 1 )
		return 1;
	return ( num * calcularFactorial(num-1) );
}
void almacenarNum(int num){
	FILE *archivoSalida;
	archivoSalida = fopen("ej1-factoriales.txt","ab");
	if(archivoSalida==NULL)
		printf("Archivo no encontrado");
	
	fwrite(&num,sizeof(int),1,archivoSalida);
	fclose(archivoSalida);
}

void leerNumeros(){
	FILE *archivo;
	archivo=fopen("ej1.txt","rb");
	if(archivo==NULL)
		printf("Archivo no encontrado");
	int i=0;
	int num;
	fread(&num,sizeof(int),1,archivo);

	while(!feof(archivo)){
		int factorial = calcularFactorial(num);
		printf("El factorial de %i es: %i.\n",i,factorial);	
		almacenarNum(factorial);
		i++;

		fread(&num,sizeof(int),1,archivo);
	}
	fclose(archivo);
}

int main(void){
	cargarNumeros();
	leerNumeros();
}
