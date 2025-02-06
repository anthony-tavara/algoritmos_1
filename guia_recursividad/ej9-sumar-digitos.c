/*
Desarrollar un programa que solicite al usuario el ingreso de un numero
entero y lo muestre el resultado de sumar sus dígitos.
*/
#include <stdio.h>

int sumar_digitos(int num){
	if(num < 10)
		return num;
	int digito = num%10;
	num = (num - (num%10))/10;
	
	return ( digito +  sumar_digitos(num) );
}
int main(void){
	int num = 1974;
	int suma = sumar_digitos(num);
	printf("La suma de los digitos del número %i es %i.", num,suma);
	return 0;
}
