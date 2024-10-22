/*Dado un vector a de longitud n y un elemento p del mismo tipo que los elementos del
vector, buscar p en el vector a y delvolver la posicion que ocupa en caso de 
encontrarlo o una señal en caso contrario. Suponer que no hay repeticions.*/

#include <stdio.h>
#define MF 10
typedef int t_vec[MF];

int buscar_posicion(t_vec vector,int p,int ml){
	int i,posicion;
	for(i=0;i<ml;i++)
		if(vector[i]==p)
			posicion=i;
	return posicion;
}
int main(){
	int ml,p;
	t_vec vector={2,4,6,5,3,2,8};
	p=5;
	ml=7;
	printf("%i se encuentra en la posición %i.\n",p,buscar_posicion(vector,p,ml));
	return 0;
}
