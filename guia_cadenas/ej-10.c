/*Escribir un programa modular que solicite el ingreso de dos palabras y luego muestre las mismas
según la longitud de cada una de ellas, mostrando primero la de menor longitud.
A igualdad de longitud, mostrar primero la menor de las dos, en términos de orden alfabético.
Las palabras tienen una longitud máxima de 15 caracteres.     */

#include <stdio.h>
#include <string.h>
#define MF 15
typedef char t_cad[MF];

void mostrar(t_cad palabra1, t_cad palabra2){
	if(strlen(palabra1)<strlen(palabra2))
		printf("1:%s\n2:%s\n",palabra1,palabra2);
	else if(strlen(palabra1)>strlen(palabra2))
		printf("1:%s\n2:%s\n",palabra2,palabra1);
	else
		if(palabra1[0]<palabra2[0])
			printf("1:%s\n2:%s\n",palabra1,palabra2);
		else			
			printf("1:%s\n2:%s\n",palabra2,palabra1);
}

void cargar_datos(t_cad palabra1,t_cad palabra2){
	fgets(palabra1,MF,stdin);
	fflush(stdin);
	fgets(palabra2,MF,stdin);
	fflush(stdin);	
}
int main(){
	t_cad palabra1;
	t_cad palabra2;
	cargar_datos(palabra1,palabra2);
	mostrar(palabra1,palabra2);
	return 0;
}
