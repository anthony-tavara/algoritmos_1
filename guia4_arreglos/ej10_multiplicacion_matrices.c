/*escribir un programa que cargue 2 matrices y sus dimensiones, las multiplique en 
caso de ser posible o devuelva una señal si la operacion no puede realizarze.*/

#include <stdio.h>

#define MAX_FIL 4
#define MAX_COL 4

typedef int t_mat[MAX_FIL][MAX_COL];

void multiplicar_matrices(t_mat matriz_1,t_mat matriz_2,int mlf,int mlc){
	int i,j;
	t_mat multi_matrices;
	for(i=0;i<=mlf;i++)
		for(j=0;j<=mlc;j++)
			multi_matrices[i][j]=matriz_1[i][0]*matriz_2[0][j]+matriz_1[i][1]*matriz_2[1][j]+matriz_1[i][2]*matriz_2[2][j];
}

void cargar_matriz(t_mat matriz,int mlf,int mlc){
	int i,j,num;
	for(i=0;i<=mlf;i++)
		for(j=0;j<=mlc;j++){
			printf("Ingrese num en fila %i Col %i\n",i+1,j+1);
			scanf("%i",&num);
			matriz[i][j]=num;
	}
}
int main(){
	t_mat matriz_1,matriz_2,multi_matrices;
	int i,j;
	cargar_matriz(matriz_1,1,1);
	cargar_matriz(matriz_2,1,1);	
	multiplicar_matrices(matriz_1,matriz_2,1,1);
	for(i=0;i<=1;i++)
			for(j=0;j<=1;j++)
				printf("%i\t",multi_matrices[i][j]);
	return 0;
}
