/*
Escribir un programa modular en C, que solicite el ingresos de 1 oración, 
de no más de 100 caracteres.
Luego informar la cantidad de vocales minúsculas no acentuadas, que hay en la oración.
*/

#include <stdio.h>
#include <string.h>

#define MF 100
typedef char t_cad[MF];

void cargar_oracion(t_cad oracion){
	fgets(oracion,MF,stdin);
	fflush(stdin);	
}

int cantidad_vocales(t_cad oracion){
	int cantidad=0,i=0;
	while(oracion[i]!='\0'){
		if(oracion[i]=='a' || oracion[i]=='e' || oracion[i]=='i' || oracion[i]=='o' || oracion[i]=='u')
			cantidad++;
		i++;
	}	
	return cantidad;
}

int main(){
	t_cad oracion;
	cargar_oracion(oracion);
	printf("La cantidad de vocales en la oración es: %i\n",cantidad_vocales(oracion));
	return 0;
}
