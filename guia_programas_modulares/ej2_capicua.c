#include <stdio.h>

#define MF 10
typedef int t_vec[MF];

void devolver_capicua(t_vec vector,int ml){
	int i;
	for(i=0;i<ml;i++){
		printf("%i\n",vector[ml]);		
	}
}

void main(){
	t_vec vector; 
	int num,pos=0;
	do{	
		printf("Ingrese número: ");
		scanf("%i",&num);
		printf("%i",num);
		vector[pos]=num;
		pos++;
	}while(num!=0);
	devolver_capicua(vector,pos);
}
