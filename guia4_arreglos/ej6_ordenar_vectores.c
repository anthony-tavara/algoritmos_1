/*Dados 2 vectores a y b de logitudes n y m, el primero ordenado
ascendente y el segundo ordenano descenente, crerar un nuevo vector
c de (n + m) elementos intercalando los elementos de a y b de modo que
c quede ordenado ascendente.*/

#include <stdio.h>

void ordenar_par_vectores(){
	int vector_a[]={1,3,5,7,9,11};
	int vector_b[]={10,8,6,4,2};
	int vector_c[11];
	int i,j,pos;
	pos=0;
	for(i=0;i<6;i++){
		vector_c[pos]=vector_a[i];
		pos+=2;
	}
	pos=10;
	for(j=5;j>0;j--){
		vector_c[pos]=vector_b[j];
		pos-=2;
	}
	for(i=0;i<12;i++){
		printf("%i",vector_c[i]);
	}
}
int main(){
	ordenar_par_vectores();
	return 0;
}
