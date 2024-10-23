/*Escribir un subprograma que dada una matriz de números reales, de n X m devuelva un
vector que en cada posicion i almacene el mínimo de cada fila i de la matriz */

#include <stdio.h>

#define MAX_FIL 5
#define MAX_COL 5
typedef int t_mat[MAX_FIL][MAX_COL]; 
typedef int t_vec[MAX_FIL];

void minimo_en_fila(t_mat matriz,int mlf,int mlc,t_vec vector){
	int i,j,minimo;
	for(i=0;i<mlf;i++)
		for(j=0;i<mlc;i++){
			if(matriz[i][j+1]<matriz[i][j])
				minimo=matriz[i][j];
			else
				minimo=matriz[i][j+1];
			}
	vector[i]=minimo;			
				
}

void cargar_matriz(t_mat matriz,int mlf, int mlc){
	int i,j,num;
	for(i=0;i<mlf;i++)
		for(j=0;j<mlc;j++){
			printf("Ingrese el número para %i%i",i,j);
			scanf("%i",&num);
			matriz[i][j]=num;
		}	
}

int main(){
	int mlf,mlc,i;
	t_mat matriz;
	t_vec vector;
	printf("Ingrese las dimensiones de la matriz(max 5x5)");
	scanf("%i",&mlf);
	scanf("%i",&mlc);
	cargar_matriz(matriz,mlf,mlc);
	minimo_en_fila(matriz,mlf,mlc,vector);	

	for(i=0;i<mlf;i++)
		printf("%i\t",vector[i]);
	return 0;
}
