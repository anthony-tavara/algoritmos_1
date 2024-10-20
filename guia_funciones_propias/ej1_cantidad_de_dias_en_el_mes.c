#include <stdio.h>
#include <stdbool.h>

bool año_es_bisiesto(int año){
	if (año%4==0){
		return true;
	}else{
		return false;
	}
}

int cantidad_de_dias(int año, int mes){
	switch (mes) {
		case 1:
		case 3:
		case 5:
		case 7: 
		case 8:
		case 10:
		case 12:
			return 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			if (año_es_bisiesto){
				return 29;
			}else{
				return 28;
			}
		default:
			printf("No ingreso un valor válido.\n");
			return -1;
			break;				 
	}
}

void main(){
	int año, mes;
	
	printf("Ingrese un año: ");
	scanf("%i", &año);
	printf("Ingrese un mes: ");
	scanf("%i", &mes);
	
	año_es_bisiesto(año);
	printf("La cantidad de dias en el año %i, mes %i es: %i.\n\n",año,mes,cantidad_de_dias(año,mes));
}
