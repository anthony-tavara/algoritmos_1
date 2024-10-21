#include <stdio.h>

int calcular_potencia(int num1,int num2){
	int i,potencia=1;
	if(num2==0)
		return potencia;
	for(i=1;i<=num2;i++)
		potencia=potencia*num1;
	return potencia;
}
int main(){
	int num1,num2;
	num1=6;num2=4;
	printf("El resultado de %i a la %i es: %i\n",num1,num2,calcular_potencia(num1,num2));
	return 0;
}
