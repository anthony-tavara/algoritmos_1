/*
Desarrollar un programa que muestre la suma de los primeros N números
naturales. El número N lo debe ingresar el usuario.
*/

#include <stdio.h>

int suma_n_naturales(int n){
	if(n==1)
		return 1;		
	else
		return n + suma_n_naturales(n-1);
	
		
}


int main(){
	int n;
	printf("Mostraré la suma de los primeros N números naturales!\n");
	printf("Por favor, ingrese N para continuar...\n");
	scanf("%i",&n);
	if(n>0){
		printf("\nLa suma es: %i\n",suma_n_naturales(n));
	}else
		printf("Solo se permite números naturales\n");
	return 0;
}
