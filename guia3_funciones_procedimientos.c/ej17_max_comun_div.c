/*Escribir un programa que determine el máximo común divisor entre dos números.*/

#include <stdio.h>

int calcular_max_comun_div(int num1, int num2){
	int i,max_comun_div=0;
	for(i=1;i<=num1 && i<=num2;i++)
		if(num1%i==0 && num2%i==0)
			max_comun_div=i;
	return max_comun_div;
}
int main(){
	int num1,num2;
	printf("Vamos a hallar el máximo común divisor entre 2 números!\nIngrese el primer número: ");
	scanf("%i",&num1);
	printf("Ingrese el segundo número: ");
	scanf("%i",&num2);
	printf("El máximo común divisor entre %i y %i es: %i\n",num1,num2,calcular_max_comun_div(num1,num2));
	return 0;
}
