/*
Escribir una función en C, que reciba una cadena que representa una palabrea y 
devuelva si la misma es o no un palíndromo.
Una palabra es un palíndromo, si se lee igual en ambos sentidos.

Probar la función con los siguientes casos de prueba:
- anilina (es palindromo)
- ojo (es palíndromo)
- radar (Es palíndromo)
- reconocer (Es palíndromo)
- algoritmos (No es palíndromo)
- programas (no es palíndromo)                    

Evitar realizar ciclos innecesarios.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MF 30
typedef char t_cad[MF];

bool es_palindromo(t_cad cadena){
	int i,ml,j;
	
	ml=strlen(cadena);
	
	for(i=0;i<ml/2;i++)
		if(cadena[i]==cadena[ml-i])
			j++;	

	return (j=ml/2);
}
int main(){
	t_cad cadena = "ojo";
	printf("%b",es_palindromo(cadena));
}
