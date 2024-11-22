/*
Desarrollar una función recursiva para obtener el mayor valor en un vector de 
números enteros.
*/

#include <stdio.h>
#define MF 6
typedef int T_vec[MF];


int calcular_mayor_valor(T_vec vector,int pos,int ml){

	if(pos==ml)
		return vector[pos];
	else{
		if(vector[pos]>calcular_mayor_valor(vector,pos+1,ml))
			return vector[pos];
		else 
			return calcular_mayor_valor(vector,pos+1,ml);			
	}
}

int main(){
	T_vec vector = {22,50,200,230,40,23};
	int ml=6;
	
	printf("Mayor valor en el vector: %i\n\n",calcular_mayor_valor(vector,0,ml-1));

	return 0;
}
