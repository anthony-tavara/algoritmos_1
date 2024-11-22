/*
Desarrollar un programa que solicite al usuario el ingreso de un número entero y
lo muestre invertido. No se puede usar vectores.
*/

#include <stdio.h>

void calcular_inv(int num){
	if(num<10)
		printf("%i",num);
	else{
		printf("%i",num%10);
		return calcular_inv(num/10);
	}
}

int main(){
	int num = 456;
	printf("El invertido de %i es : ",num);
	calcular_inv(num);
	printf("\n");
}
