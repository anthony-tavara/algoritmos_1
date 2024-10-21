#include <stdio.h>

float calcular_potencia(float num1,float num2){
	int i;
	float potencia=1;
	if(num2==0)
		return potencia;
	for(i=1;i<=num2;i++)
		potencia=potencia*num1;
	return potencia;
}
int main(){
	float num1,num2;
	num1=2.23;num2=2.3;
	printf("El resultado de %.2f a la %.2f es: %.2f\n",num1,num2,calcular_potencia(num1,num2));
	return 0;
}
