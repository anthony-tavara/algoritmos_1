/*Escribir un programa que solicite el ingreso de dos números, y luego informe los números primos que
hay entre esos dos números. Se debe validar que los números ingresados sean enteros y además que el 
primer número sea menor o igual que el segundo.       */
#include <stdio.h>
#include <stdbool.h>

bool es_primo(int num1){
	int i,divisores=0;
	//Si el número es para, distinto de 2, no va a ser primo.
	if (num1!=2 && num1%2==0)
		return false;
	else{
		for(i=1;i<=num1;i++)
			if(num1%i==0)
				divisores++;			
	}
	return (divisores<=2);
}

void primos_entre(int num1,int num2){
	while(num1<=num2){
		if(es_primo(num1))
			printf("%i es primo.\n",num1);
		else
			printf("%i no es primo\n",num1);
		num1++;
	}
}

int main(){
	int num1,num2;
	printf("Ingrese un rango para mostrar los numeros primos que se encuentran dentro de este:");
	printf("\nIngrese el primer número: ");
	scanf("%i",&num1);
	printf("Ingrese el segundo número: ");
	scanf("%i",&num2);
	if (num1<num2)
		primos_entre(num1,num2);	
	else
		printf("num1 no es menor que num2");
	return 0;
	
}

