/*Escribir una función para validar una nueva clave de acceso.
La función deberá recibir una cadena de caracteres, que contendrá la clave candidata,
ingresada previamente por el usuario. 
Devolverá true o false, dependiendo de si cumple o no con las siguientes condiciones:

- La clave debe estar formada únicamente por, entre 4 y 8 caracteres numéricos.
- Los caracteres no pueden ser todos iguales. */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MF 30 
typedef char t_cad[MF]; 

bool validar(t_cad clave){
	bool cant_caracteres=false;
	bool caracteres_iguales=true;	
	int i=0;
	
	if(strlen(clave)>=4 && strlen(clave)<=8)
		cant_caracteres=true;

	while(clave[i]!='\0'){
		if(clave[i]!=clave[i+1])
			caracteres_iguales=false;
		i++;
	}
	
	return (cant_caracteres && !caracteres_iguales);
}

int main(){
	t_cad cad1 = "j2020";
	t_cad cad2 = "2021a";
	t_cad cad3 = "20X21";
	t_cad cad4 = "2220";
	t_cad cad5 = "23445776";
	t_cad cad6 = "089";
	t_cad cad7 = "027845321";
	t_cad cad8 = "02784532";
	t_cad cad9 = "33333";
	
	printf("%i\n",validar(cad1));
	printf("%i\n",validar(cad2));
	printf("%i\n",validar(cad3));
	printf("%i\n",validar(cad4));
	printf("%i\n",validar(cad5));
	printf("%i\n",validar(cad6));
	printf("%i\n",validar(cad7));
	printf("%i\n",validar(cad8));
	printf("%i\n",validar(cad9));

	return 0;
}
