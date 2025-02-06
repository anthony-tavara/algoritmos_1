/*
Desarrollar un programa que solicite al usuario el ingreso de un numero
entero y calcule el máximo común divisor de forma recursiva.
*/
#include <stdio.h>

int calcular_mcd(int num1, int num2, int divisor){
	if(divisor<2)
		return 1;
	if(num1%divisor==0 && num2%divisor==0){
		return divisor;
	}
	return calcular_mcd(num1,num2,divisor-1);
}

int main(void){
	int num1 = 20;
	int num2,divisor;
	printf("Vamos a hallar el MCD de %i con el número que ingreses.\n",num1);
	printf("Ingrese un numero: ");
	scanf("%i",&num2);

	if(num1 < num2){
		divisor = num1;
	}else if(num2 < num1){
		divisor = num2;
	}
	
	int mcd = calcular_mcd(num1,num2,divisor);	

	printf("\nEl MCD es %i\n\n",mcd);
	return 0;
}

