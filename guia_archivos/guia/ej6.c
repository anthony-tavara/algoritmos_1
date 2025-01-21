/*
6) Se tiene un archivo de números telefónicos cuyos registros son de la forma:
Característica de localidad (4 dígitos)
Característica central (3 dígitos)
Número (4 dígitos)
Dado un número que representa una característica de localidad, listar
todos los números telefónicos con dicha característica.
Suponer los siguientes casos:
a) El archivo no cabe en memoria y está desordenado.
b) El archivo no cabe en memoria y está ordenado según números
telefónicos crecientes.
*/

#include <stdio.h>

typedef struct{
	int localidad;				// 4 digitos
	int caracteristica_central; // 3 digitos
	int numero; 				// 4 digitos
}numero_telefonico;

void ordenarRegistros(numero_telefonico numeros[]){
	int i,j;
	numero_telefonico aux;

	for(i=0;i<2-1;i++){
		for(j=0;j<2-i-1;j++){
			if(numeros[j].numero>numeros[j+1].numero){
				aux=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
				printf("a");
			}
		}
	}
}
	
void generarArchivoRegistro(FILE *archivo){
	numero_telefonico numeros[4] = {
		{1111,834,5222},
		{2222,555,2423},
		{1111,234,4222},
		{2324,234,2322}
	};
	
	fwrite(&numeros,sizeof(numeros),1,archivo);
	fclose(archivo);
}

void listarRegistros(FILE *archivo){
	numero_telefonico numero;
	numero_telefonico numeros[20];

	int i=0;
	
	fread(&numero,sizeof(numero),1,archivo);

	while(!feof(archivo)){
		if(numero.localidad == 1111){
			numeros[i]=numero;
			//printf("Localidad %i\nCaracteristica_central %i\nNumero %i\n",numeros[i].localidad,numeros[i].caracteristica_central,numeros[i].numero);
			i++;
		}
		fread(&numero,sizeof(numero),1,archivo);
	}
	fclose(archivo);
	
	ordenarRegistros(numeros);

	for(i=0;i<2;i++){
		printf("Localidad %i\nCaracteristica_central %i\nNumero %i\n\n\n",numeros[i].localidad,numeros[i].caracteristica_central,numeros[i].numero);
	}
}

int main(void){
	FILE *archivo1, *archivo2;
	archivo1 = fopen("numeros_telefonicos.txt","wb");
	archivo2 = fopen("numeros_telefonicos.txt", "rb");
	
	generarArchivoRegistro(archivo1);
	listarRegistros(archivo2);
	return 0;
}
