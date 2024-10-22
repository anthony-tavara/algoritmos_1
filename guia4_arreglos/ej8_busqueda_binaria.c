//Idem que el anterior pero el vector esta ordenado ascendente

#include <stdio.h>
#define MF 10
typedef int t_vec[MF];

int buscar_posicion(t_vec vector,int p,int ml){
	int inf=0,mitad,posicion;
	while(inf<=ml){
		mitad=(inf+ml)/2;
		if(vector[mitad]==p){
			posicion=mitad;
			return posicion;
		}else if(mitad<p){
			inf=mitad;
			mitad=(ml+inf)/2;			
		}else if(mitad>p){
			ml=mitad;
			mitad=(ml+inf)/2;
		}
	}	
}
int main(){
	int ml,p;
	t_vec vector={1,2,3,4,5,6,7};
	p=5;
	ml=6;
	printf("%i se encuentra en la posición %i.\n",p,buscar_posicion(vector,p,ml));
	return 0;
}
