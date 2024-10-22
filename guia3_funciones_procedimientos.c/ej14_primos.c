/*Dado un listado de números enteros informar aquellos que sean primos, la cantidad
y la sumatorio de los mismos.*/

#include <stdio.h>
#include <stdbool.h>

bool es_primo(int num){
	int i;
	if(num!=2 && num%2==0)
		return false;
	for(i=2;i<num;i++)
		if(num%i==0)
			return false;
	return true;
}

int main(){
	int num,cant_primos=0,suma_primos=0;
	printf("Vamos a ver cual numero es primo (0 para salir)\n");
	do{
		printf("Ingrese un número: ");
		scanf("%i",&num);
			if(num!=0){
				if(es_primo(num)){
					printf("%i es primo.\n",num);
					cant_primos++;
					suma_primos+=num;
				}else
					printf("%i no es primo.\n",num);
			}
	}while(num!=0);
	printf("La cantidad de números primos fue de %i.\n",cant_primos);
	printf("La suma de los números primos fue de %i.\n",suma_primos);
	return 0;
}
