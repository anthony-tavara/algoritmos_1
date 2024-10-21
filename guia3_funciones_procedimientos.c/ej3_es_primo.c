#include <stdio.h>
#include <stdbool.h>

bool es_primo(int num){
	int i,divisores=0;
	if(num!=2 && num%2==0)
		return false;
	else
		for(i=1;i<=num;i++)
			if(num%i==0)
				divisores++;
	return (divisores<=2);
}

void main(){
	int num;
	printf("Ingrese un número: ");
	scanf("%i",&num);
	if(es_primo(num))
		printf("%i es primo.\n",num);
	else
		printf("%i no es primo.\n",num);	
}
