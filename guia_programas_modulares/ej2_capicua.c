#include <stdio.h>
#include <stdbool.h>
#define MF 10
typedef int t_vec[MF];


bool es_capicua(t_vec vector,int ml){
	int i;
	int coincidencias=0;
	for(i=0;i<ml;i++){
		if(vector[i]==vector[ml-i]){
			coincidencias++;
		}
	}
	return (coincidencias==((ml-1)/2));
}

void main(){
	t_vec vector; 
	int num,pos=0;
	do{	
		
		printf("Ingrese número: ");
		scanf("%i",&num);
		if (num!=0){
			vector[pos]=num;
			pos++;
		}
	}while(num!=0);
	printf("%i",es_capicua(vector,pos));
}
