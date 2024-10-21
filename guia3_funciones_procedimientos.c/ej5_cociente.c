/*Escrbir una funcción que dados a y b devuelva el cociente de la división entera,
sin utilizar el operador correspondiente del lenguaje. Validar los tipos de datos 
de entrada.*/

#include <stdio.h>

int calcular_cociente(int num1,int num2){
	int cociente=0,i;
	for(i=num2;i<=(num1);i+=num2){
		cociente++;
	}
	return cociente;
}
int validar_divisor(){
	int num2;
	printf("Ingrese el divisor: ");
	do{
		scanf("%i",&num2);
		if(num2==0)
			printf("El divisor debe ser distinto de cero.\nIngrese el divisor: ");
	}while(num2==0);
	return num2;
}
int main(){
	int dividendo,divisor;
	printf("~ Vamos a calcular el cociente entre dos números!\n");
	printf("Ingrese el dividendo: ");
	scanf("%i",&dividendo);
	divisor=validar_divisor();
	printf("El cociente entre %i y %i es: %i",dividendo,divisor,calcular_cociente(dividendo,divisor));
	return 0;	
}
