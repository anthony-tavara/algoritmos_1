#include <stdio.h>

int max_comun_divisor(int num1,int num2){
	int max_comun_div,divisor,menor;
	max_comun_div=0;
	divisor=1;
	if(num1<num2){
		menor=num1;
	}else if(menor<num1){
		menor=num2;
	}
	while(divisor<=menor){
		if(num1%divisor==0 && num2%divisor==0){
			max_comun_div=divisor;
		}
		divisor++;
	}
	return max_comun_div;
}

void main(){
	int num1,num2;
	printf("Ingrese el primer número: ");
	scanf("%i",&num1);
	printf("Ingrese el segundo número: ");
	scanf("%i",&num2);
	printf("El máximo común divisior entre %i y %i es: %i",num1,num2,max_comun_divisor(num1,num2));
}
