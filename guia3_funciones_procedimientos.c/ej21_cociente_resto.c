/*Escribir un subprograma que dados a y b devuelva el cociente y el 
resto de la división entera, sin utilizar los operadores correspondientes
al lenguaje. Validar los tipos de datos de entrada.*/
#include <stdio.h>

void calcular_cociente_resto(int* a,int* b){
	int i,cociente=0;
	for(i=*b;i<=*a;*a-=*b)
		cociente++;
	*b=cociente;	
}

int main(){
	int a=17.2,b=2;
	calcular_cociente_resto(&a,&b);
	printf("El resto es %i\n",a);
	printf("El cociente es %i\n",b);
	return 0;
}
