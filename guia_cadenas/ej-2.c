/*Escribir una función que reciba como parámetro una cadena de caracteres y
devuelva la cantidad de dígitos numéricos que hay en la cadena. 
No tener en cuenta la ñ, ni las vocales acentuadas.*/

#include <stdio.h>
#include <string.h>
#define MF 15
typedef char string[MF];

int cant_enteros_en_cadena(string cadena,int* ml){
	int i,cantidad_enteros=0;
	
	for(i=0;i<*ml;i++)
		if(cadena[i]>='0' && cadena[i] <= '9')
			cantidad_enteros++;
	return (cantidad_enteros);
}
int main(){
	int ml;
	string cadena;
	fgets(cadena,15,stdin);
	fflush(stdin);
	ml=strlen(cadena);
	printf("La cantidad de enteros en la cadena es %i.\n",cant_enteros_en_cadena(cadena, &ml));
	return 0;
}
