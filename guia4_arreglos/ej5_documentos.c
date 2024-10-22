/*Carga un conjunto de números de documento en un vector. No se conoce la cantidad de datos válidos
Informar el número de documento más alto del conjunto y la posición que ocupa. Puede haber repetición,
en este caso informar todas las posiciones que ocupa.*/

#include <stdio.h>

#define MF 20
typedef int t_vec[MF];

int documento_mayor(t_vec vector,int ml){
	int i,doc_mayor;
	doc_mayor=vector[0];
	for(i=0;i<ml;i++)
		if(vector[i]>=doc_mayor){
			doc_mayor=vector[i];
			printf("El documento mayor se en encuentra en %i\n",i);
		}
	return doc_mayor;
}

void cargar_documentos_vector(t_vec vector,int ml){
	int i,documento;
	for(i=0;i<ml;i++){
		printf("Ingrese num en pos%i: ",i);
		scanf("%i",&documento);	
		vector[i]=documento;
	}
}
int main(){
	int ml;
	t_vec vector;
	printf("Ingrese la cantidad de docs que quiere ingresar: ");
	scanf("%i",&ml);
	cargar_documentos_vector(vector,ml);	
	printf("El documento mayor es: %i\n",documento_mayor(vector,ml));
	return 0;
}
