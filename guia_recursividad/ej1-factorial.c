/*
Desarrollar un programa que calcule el factorial de un número en forma recursiva.
*/

#include <stdio.h>

int calcular_factorial(int num){
	if(num==0 || num == 1)
		return 1;
	else
		return num*calcular_factorial(num-1);
}
int main(){
	int i;
	for(i=5;i>0;i--){
		printf("El factorial de %i es: %i.\n",i,calcular_factorial(i));
	}
}
