/*Escribir un subprograma que dado un tiempo expresado en
segundos, devuelva los parámetros numéricos horas, minutos
y segundos.*/

#include <stdio.h>

void horas_min_seg(int* num,int* seg,float* horas,float* min){
	*horas=*num/3600;
	*min=*num/60;
	*seg=*num;
}

int main(){
	int num,seg;
	float horas,min;
	printf("Ingrese un tiempo expresado en segundos: ");
	scanf("%i",&num);
	horas_min_seg(&num,&seg,&horas,&min);
	printf("El tiempo en horas: %.2f\n",horas);
	printf("El tiempo en minutos: %.2f\n",min);
	printf("El tiempo en segundos: %i\n",seg);
	
	return 0;
}
