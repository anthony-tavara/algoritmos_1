/*Escribir una función para validar una nueva clase de acceso. La función deberá recibir una cadena
de caracteres, que contendrá la clave candidata, que ya fue ingresada previamente por el usuario.
Devolverá true o false, dependiendo de si cumple o no, con las siguientes condiciones:
- La clave debe estar formada únicamente por, (6-12 caracteres numéricos)
- La cantidad de dígitos pares debe ser mayor a la de los impares.
- A lo sumo debe recorrer una vez la cadena.
- Evite realizar ciclos innecesarios.

Compruebe el correcto funcionamiento, incluyendo los siguientes casos de prueba:

validar("j20803") //devuelve false
validar("20893a") //devuelve false
validar("208X930")//devuelve false
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MF 15
typedef char t_cad[MF];

bool validar(t_cad clave){
	bool clave_numerica=false;
	bool cant_caracteres=false;
	bool cant_pares_mayor_impares=false;
	unsigned int i=0,cant_pares=0,cant_impares=0;
	
	while( clave[i]!='\0' || (clave[i]>0 && clave[i]<9) ){
		if(clave[i]%2==0)
			cant_pares++;
		else
			cant_impares++;
		i++;
	}
	if(i==(strlen(clave))){
		clave_numerica=true;
		printf("Es numerica\n");
	}	
	if(strlen(clave)>6 && strlen(clave)<13)
		cant_caracteres=true;
		
	if(cant_pares>cant_impares)
		cant_pares_mayor_impares=true;

	return (clave_numerica && cant_caracteres && cant_pares_mayor_impares); 
}

int main(){
	t_cad clave1 = "j20803";
	t_cad clave2 = "20893a";
	t_cad clave3 = "208X930";
	t_cad clave4 = "20201";
	t_cad clave5 = "23445776";
	t_cad clave6 = "089010";
	t_cad clave7 = "0278452132567";
	t_cad clave8 = "027845320011";
	
	printf("%b\n",validar(clave1)); //devuelve false
	printf("%b\n",validar(clave2)); //devuelve false
	printf("%b\n",validar(clave3)); //devuelve false
	printf("%b\n",validar(clave4)); //devuelve false
	printf("%b\n",validar(clave5)); //devuelve false
	printf("%b\n",validar(clave6)); //devuelve true
	printf("%b\n",validar(clave7)); //devuelve false
	printf("%b\n",validar(clave8)); //devuelve true
	return 0;
}
