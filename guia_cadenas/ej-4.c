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
	for(ml=ml-1;ml>=0;ml--){
//		printf("%i",ml);
		if(cad[ml]!=' '){
			cad_invertida[i]=cad[ml];
			i++;
		}
	}	
	cad_invertida[i+1]='\0';
}
int main(){
	int ml;
	t_cadena cad1 = "Hola, me llamo Ana.";
	t_cadena cad2 = "234561";
	t_cadena cad3 = "   ";
	t_cadena cad4 = "Somos o Nos somos";

	t_cadena cad_invertida1;
	t_cadena cad_invertida2;
	t_cadena cad_invertida3;
	t_cadena cad_invertida4;

	ml=strlen(cad1);
	invertir_cadena(cad1,cad_invertida1,ml);
	printf("Cadena: '%s'\t\tINV: '%s'\n",cad1,cad_invertida1);

	ml=strlen(cad2);
	invertir_cadena(cad2, cad_invertida2,ml);
	printf("Cadena: '%s'\t\t\tINV: '%s'\n",cad2,cad_invertida2);	

	ml=strlen(cad3);
	invertir_cadena(cad3, cad_invertida3,ml);
	printf("Cadena: '%s'\t\t\t\tINV:  '%s'\n",cad3,cad_invertida3);	

	ml=strlen(cad4);
	invertir_cadena(cad4, cad_invertida4,ml);
	printf("Cadena: '%s'\t\tINV: '%s'\n",cad4,cad_invertida4);	
}
