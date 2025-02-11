/*
Implementar una funcion que retorna un puntero a struct del tipo t_alumno, el cual
apunta a un bloque de memoria dinamica, respetando la siguiente declaracion. En caso
de no poder reservar la memoria, retornar NULL.
*/

#include <stdio.h>
#include <sdtlib.h>

typedef struct{
	int padron;
	char nombre[30];
	char apellido[30];
}t_alumno;

t_alumno* crear_alumno(){
	
}


