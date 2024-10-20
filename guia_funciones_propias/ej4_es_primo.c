#include <stdio.h>
#include <stdbool.h>

bool es_primo(int num){
	int i=1,divisores;
	divisores=0;
	if(num!=2 && num%2==0){
		return false;
	}
	else{
		while(divisores<=3 && i<=num ){
			if(num%i==0)
				divisores++;
			i++;
		}
		return (divisores<=2);
	}
}

void main(){
	int num;
	printf("Ingrese un número, para saber si es primo: ");
	scanf("%i",&num);
	printf("%i \n",es_primo(num));
}
