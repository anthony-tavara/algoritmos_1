#include <stdio.h>

typedef int t_vec[10];

void devolver_capicua(int t_vec){
	printf("%i",t_vec);
}

void main(){
	t_vec vector; 
	int num,posicion=0;
	do{	
		printf("Ingrese número: ");
		scanf("%i",&num);
		vector[posicion]=num;
		posicion++;
	}while(num!=0);
	devolver_capicua(vector);

	
}
