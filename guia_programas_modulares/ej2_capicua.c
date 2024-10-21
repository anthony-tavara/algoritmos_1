#include <stdio.h>
#include <stdbool.h>
#define MF 10
typedef int t_vec[MF];


bool es_capicua(t_vec vector,int ml){
	int i;
	for(i=0;i<ml/2;i++){
		if(vector[i]!=vector[ml-i-1]){
			return false; //no es capicua ya que no coincide
		}
	}
	return true; //si no hubo diferencias, es capicua
}

int main(){
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
	
	if (es_capicua(vector,pos))
		printf("Es capicua\n");
	else
		printf("No es capicua");
	return 0;
}
