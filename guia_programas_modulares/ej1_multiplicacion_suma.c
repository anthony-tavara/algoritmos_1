#include <stdio.h>

int multiplicar(int num1,int num2){
	//multiplico mediante sumas sucesivas
	int i,multiplicacion;
	multiplicacion=0;
	for(i=1;i<=num2;i++){
		multiplicacion+=num1;	
	}
	return multiplicacion;
}

void main(){
	int num1,num2;
	printf("Ingrese el primer número: ");
	scanf("%i",&num1);
	printf("Ingrese el segundo número: ");
	scanf("%i",&num2);	
	printf("la multiplicacion entre %i y %i es igual a %i\n",num1,num2,multiplicar(num1,num2));
}
