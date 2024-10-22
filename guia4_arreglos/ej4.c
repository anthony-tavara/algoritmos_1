/*Cargar una serie de números reales en un vector. No se conoce la cantidad exacta de 
datos, pero se sabe que no superan los 100. No se conocen cotas para los datos. Informar
el valor máximo, la cantidad de veces que aparece la/s posición/es que ocupa.*/

#include <stdio.h>

#define MF 100

typedef float t_vec[MF];

int veces_se_encuentra_max(t_vec vector,int maximo,int ml){
	int i,cant_veces_max=0;
	for(i=0;i<ml;i++)
		if(vector[i]==maximo){
			cant_veces_max++;
			printf("La posicion en que se encuentra %i es: %i\n",maximo,i);
	}
}

int valor_max(t_vec vector,int ml){
	int i,maximo=0;
	for(i=0;i<ml;i++)
		if(vector[i]>maximo)
			maximo=vector[i];	
	return maximo;
}

void cargar_datos(t_vec vector,int ml){
	int i;
	float real;
	for(i=0;i<=ml-1;i++){
		printf("Ingrese num real, posición %i: ",i);
		scanf("%f",&real);
		vector[i]=real;
	}
}

int main(){
	int ml,maximo;
	t_vec vector;	
	printf("Ingrese la cantidad de caracteres: ");
	scanf("%i",&ml);	
	cargar_datos(vector,ml);
	maximo=valor_max(vector,ml);
	printf("El máximo es %i y se encuentra %i veces.\n",maximo,veces_se_encuentra_max(vector,maximo,ml));	
	return 0;		
}
