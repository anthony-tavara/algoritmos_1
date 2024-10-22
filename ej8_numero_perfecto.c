/*Un número entero positivo se dice perfecto si es igual a la suma de todos su divisores
exceto el mismo. Ejemplo: los números (1+2+3), 28(1+2+4+7+14) son perfectos. Se pide:
a) Escribir una función booleana que llama desde un programa, permita discernir si
un número (único parámetro) es perfecto.
b) Dar un ejemplo de cómo se hace referencia a dicha función desde un programa o desde
otro subprograma.
Nota: no usar variables globales. */

#include <stdio.h>
#include <stdbool.h>

bool es_numero_perfecto(int num){
	int divisor,suma_divisores=0;
	for(divisor=1;divisor<num;divisor++)
		if(num%divisor==0)
			suma_divisores+=divisor;
	return (suma_divisores==num);
}
int validar_numero_positivo(){
	int num;
	do{
		scanf("%i",&num);
		if(num<=0)
			printf("El número debe ser entero positivo.\nIngrese un número: ");
	}while(num<=0);
	return num;
}

void main(){
	int num;
	printf("Ingrese un número: ");
	num=validar_numero_positivo();
	if(es_numero_perfecto(num))
		printf("El número %i es perfecto\n",num);
	else
		printf("El número %i no es perfecto\n",num);
}
