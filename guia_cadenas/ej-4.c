/*
Escribir una función en C que reciba como primer parámetro, una cadena de tipo t_cadena, 
y devuelva como segundo parámetro, la misma cadena pero invertida, sin considerar los blancos.
Sólo se deben invertir las posiciones con caracteres ciertos, y no aquellas posiciones potenciales
a ser utilizadas pero que podrían contener caracteres incierto.
- Recorrer la cadena a lo sumo una vez.
- Declare un tipo t_cadena acorde.
- Escribir el programa que incluya a la función y la invocaciones con los siguientes casos y las
impresiones para comprobar que devuelven lo correcto.     

Casos:
invertir_cadena("Hola, me llamo Ana.",cad_invertida) ==> cad_invertida: ".anAomallem,aloH"
invertir_cadena("234561",cad_invertida) ==> cad_inverida: "165432"
inverti_cadena("   ",cad_invertida) ==> cad_invertida: ""
invertir_cadena("Somos o No somos", cad_invertida) ==> cad_invertida: "somosoNsomoS"
*/

#include <stdio.h>
#include <string.h>

#define MF 30
typedef char t_cadena[MF];

void invertir_cadena(t_cadena cad, t_cadena cad_invertida,int ml){
	int i=0;
	for(;ml>=0;ml--){
//		printf("%i",ml);
		if(cad[ml]!=' '){
			cad_invertida[i]=cad[ml];
			i++;
			printf("%s",cad_invertida);

		}
		printf("%s",cad_invertida);
	}	
}
int main(){
	int ml;
	t_cadena cad = "Hola, me llamo Ana.";
	t_cadena cad_invertida;
	ml=strlen(cad);
	invertir_cadena(cad,cad_invertida,ml);
//	printf("cadena\t cadena invertida\n");
//	printf("%s %s",cad,cad_invertida);
}
