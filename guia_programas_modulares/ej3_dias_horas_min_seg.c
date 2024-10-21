/*Escribir un programa que solicite el ingreso de valores, que representarán una
cantidad de segundos. El programa deberá informar al usuario, el equivalente en días,
horas, minutos y segundos. 
Se debe validar que el valor ingresado sea entero y positivo, de lo contrario,
deberá mostrasrse el mensaje "Valor ingresado inválido".
El ingreso de valores finaliza cuando el usuario ingrese como valor, 0.*/
#include <stdio.h>

float convertir_seg_a_dias(int num){
	return (num/86400);
}
float convertir_seg_a_horas(int num){
	return (num/3600);	
}
float convertir_seg_a_min(int num){
	return (num/60);
}
void main(){
	int num;
	printf("Ingrese un número\n");
	scanf("%i",&num);
	printf("%i en dias es %.2f\n",num,convertir_seg_a_dias(num));
	printf("%i en horas es %.2f\n",num,convertir_seg_a_horas(num));
	printf("%i en minutos es %.2f\n",num,convertir_seg_a_min(num));
}
