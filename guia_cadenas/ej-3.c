/*Escribir una función en C, que reciba como parámetro una cadena de 
tipo t_cadena y devuelva la cantidad de palabras que hay en la cadena.
Considerar que una palabra está separada de otra, por uno o más blancos.
No recorrer la cadena más de una vez.
Declare un tipo t_cadena acorde.
Escribir el proggrama que incluya a la función y las invocaciones
con los siguientes casos de prueba:

cant_palabras("El sol es amarillo.") //devuelve 4
cant_palabras(" Hoy es 30 de Junio de  2021 ") //devuelve 7
cant_palabras("30/06/2021") //devuelve 1
cant_palabras("El precio es   $2000.-  ") //devuelve 4
cant_palabras("      ") //devuelve 0                 */

#include <stdio.h>
#include <string.h>

#define MF 20
typedef char t_cadena[MF];

int cant_palabras(t_cadena cadena){
	int i;
	int cant_palabras=0;
	while(cadena[i]!='\0'){
		if(cadena[i]!=' ' && cadena[i+1]==' ' ){
			cant_palabras++;
			}
		i++;
	}
	return cant_palabras;
}
int main(){
	t_cadena cadena;
	fgets(cadena,20,stdin);
	fflush(stdin);
	printf("%i",cant_palabras(cadena)); //devuelve 4
//	printf("%i",cant_palabras(" Hoy es 30 de Junio de  2021 ")); //devuelve 7
//	printf("%i",cant_palabras("30/06/2021")); //devuelve 1
//	printf("%i",cant_palabras("El precio es   $2000.-  ")); //devuelve 4
//	printf("%i",cant_palabras("      ")); //devuelve 0                 */
	
	return 0;
}
