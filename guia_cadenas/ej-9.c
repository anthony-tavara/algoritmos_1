/*
Escribir una función que recibirá por parámetro, una palabra, que representa un sustantivo en singular.
La función deberá devolver, el plural de dicho sustantivo, aplicando las siguientes reglas:

- Agregar una 's' al final, si la palabra termica en vocal sin acento.
- Agregar una 's' al final, si la palabra termina con una 'é' (acentuada).
- Si la palbra termina en 'z', la reemplazamos por 'ces'.
- Agregamos 'es' al final, si la palabra termina con una consonante (a excepción de la 's', la 'z',
y la 'x'), ó si la palabra termina con las vocales acentuadas: á,í,ó,ú.
- Si el sustantivo termina en 's' ó 'x', entonces el plural es igual al singular, por lo tanto
la función deberá devolver lo mismo que recibió.
*/

#include <stdio.h>
#include <string.h>

#define MF 30
typedef char t_cad[MF];

void devolver_plural(t_cad sustantivo){
	int ml=strlen(sustantivo); //máximo logico ('\0')
	if( sustantivo[ml-1]=='a' || sustantivo[ml-1]=='e' || sustantivo[ml-1]=='i' || sustantivo[ml-1]=='o' || sustantivo[ml-1]=='u' || sustantivo[ml-1]=='é'){
		sustantivo[ml]='s';
		sustantivo[ml+1]='\0';
	}else if(sustantivo[ml-1]=='z'){
		sustantivo[ml-1]='c';
		sustantivo[ml]='e';
		sustantivo[ml+1]='s';
		sustantivo[ml+2]='\0';
		
	}
		
}
