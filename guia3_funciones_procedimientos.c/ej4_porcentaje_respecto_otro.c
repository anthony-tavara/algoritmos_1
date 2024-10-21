/*
Escrbir una función que dados 2 números, calcule el porcentaje que el primero
representa respecto del segundo.
*/

#include <stdio.h>

float porcentaje_respecto(float num1,float num2){
	return ((num1/num2)*100);
}

int main(){
	float num1,num2;
	printf("Ingrese el primer número: ");
	scanf("%f",&num1);
	printf("Ingrese el segundo número: ");
	scanf("%f",&num2);
	printf("El porcentaje que representa %.2f respecto de %.2f es: %.2f\n",num1,num2,porcentaje_respecto(num1,num2));
	return 0;	
}
