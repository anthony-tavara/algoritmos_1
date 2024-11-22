/*
Desarrollar una función recursiva para obtener el mayor valor en un vector de 
números enteros.
*/

#include <stdio.h>
#define MF 30
typedef int T_vec[MF];


int calcular_mayor_valor(T_vec vector,int pos,int mayor_valor,int ml){

	if(pos>ml){
		return mayor_valor;
	}
	else{
		if(mayor_valor<vector[pos])
			mayor_valor=vector[pos];
			
		return calcular_mayor_valor(vector,pos+1,mayor_valor,ml);			
	}
}

int main(){
	T_vec vector = {2,50,20,23,40,5};
	printf("Mayor valor en el vector: %i\n\n",calcular_mayor_valor(vector,0,0,6));
	return 0;
}
