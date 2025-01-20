/*
4) Dados dos archivos de números enteros de 5 dígitos ordenados en forma
creciente, generar un archivo que contenga todos los números, ordenado de
igual forma. No hay números repetidos
*/

#include <stdio.h>
#include <string.h>

typedef int t_vec[30]; 
typedef char nombre[50];

void generarNumeros5Digitos(){
	int i, num=10000;
	FILE *archivo;
	archivo = fopen("numeros1.txt", "wb");
	for(i=0;i<=10;i++){
		fwrite(&num,sizeof(int),1,archivo);
		num+=333;
	}
	fclose(archivo);
}
void listarNumeros(nombre nombre_archivo, t_vec numeros, int *pos){
	FILE *archivo;
	archivo = fopen(nombre_archivo, "rb");
	int num;
	
	fread(&num,sizeof(int),1,archivo);
	while(!feof(archivo)){
		numeros[*pos] = num;
		fread(&num, sizeof(int), 1, archivo);	
		(*pos)++;
	}
	fclose(archivo);
}

void ordenarVector(t_vec numeros, int ml){
	int i,j,aux;
	for(i = 0; i < ml-1; i++){
		for(j=0;j<ml -1 -i;j++){
			if(numeros[j]>numeros[j+1]){
				aux=numeros[j+1];
				numeros[j+1]=numeros[j];
				numeros[j]=aux;
			}
		}
	}
}

int main(){
	t_vec numeros;	
	nombre nombre_archivo1 = "numeros1.txt";
	nombre nombre_archivo2 = "numeros2.txt";
	int pos = 0;
	
	//generarNumeros5Digitos();
	
	listarNumeros(nombre_archivo1, numeros, &pos);
	listarNumeros(nombre_archivo2, numeros, &pos);
	ordenarVector(numeros,pos);
	int i;
	for(i=0;i<=20;i++){
		printf("Num: %i\n", numeros[i]);
	}
	
	return 0;
}
