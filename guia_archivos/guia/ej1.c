/*
Dado un archivo de números enteros mayores o iguales que 0, generar otro
archivo que almacene los factoriales de cada número del registro
correspondiente del archivo de entrada.
*/

#include <stdio.h>

void cargarNumeros(){
	FILE *archivo;
	archivo=fopen("ej1.txt","wb");
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
void leerNumeros(){
	FILE *archivo;
	archivo=fopen("ej1.txt","rb");
	int i;
	int num;
	fread(&num,sizeof(int),1,archivo);

	for(i=0;i<11;i++){
		printf("El factorial de %i es: %i.\n",num,calcularFactorial(num));

		fread(&num,sizeof(int),1,archivo);
	}
	fclose(archivo);
}
int main(void){
	//cargarNumeros();
	leerNumeros();
}
