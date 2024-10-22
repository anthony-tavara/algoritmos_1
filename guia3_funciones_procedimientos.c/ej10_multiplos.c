/*Escribir un programa que ingrese un listado de números e informe la cantidad de 
múltiplos de 2,3,5,7. Utilizar una función que dados 2 números devuelva una señal 
que indique si el primero es o no múltiplo del segundo.*/

#include <stdio.h>
#include <stdbool.h>

bool es_multiplo(int num1,int num2){
	return (num1%num2==0);
}

void main(){
	int num,cantMult2=0,cantMult3=0,cantMult5=0,cantMult7=0;
	printf("Ingrese números: (0 para terminar)\n");

	do{
		scanf("%i",&num);
		if(es_multiplo(num,2))
			cantMult2++;
		else if(es_multiplo(num,3))
			cantMult3++;
		else if(es_multiplo(num,5))
			cantMult5++;
		else if(es_multiplo(num,7))
			cantMult7++;
	}while(num!=0);
	
	printf("la cantidad de multiplos de 2 es: %i\n",cantMult2);
	printf("la cantidad de multiplos de 3 es: %i\n",cantMult3);
	printf("la cantidad de multiplos de 5 es: %i\n",cantMult5);
	printf("la cantidad de multiplos de 7 es: %i\n",cantMult7);
}
