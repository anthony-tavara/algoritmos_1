/*Dados 2 vectores a y b de logitudes n y m, el primero ordenado
ascendente y el segundo ordenano descenente, crerar un nuevo vector
c de (n + m) elementos intercalando los elementos de a y b de modo que
c quede ordenado ascendente.*/

#include <stdio.h>

void ordenar_par_vectores(int vector_a[],int vector_b[],int vector_c[]){
	int i=0,j=4,k=0;
	while (i<6 && j>=0){
		if(vector_a[i]<=vector_b[j]){
			vector_c[k]=vector_a[i];
			i++;
		}else{
			vector_c[k]=vector_b[j];
			j--;
		}
		k++;
	}
}

int main(){
	int vector_a[]={1,3,5,7,9,11};
	int vector_b[]={10,8,6,4,2};
	int i,n=6,m=5;
	int vector_c[n+m];
	ordenar_par_vectores(vector_a,vector_b,vector_c);
	for(i=0;i<11;i++)
		printf("%i xd",vector_c[i]);		
	return 0;
}
