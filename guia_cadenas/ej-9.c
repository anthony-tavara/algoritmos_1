/*Escribir una función que recibirá por parámetro, una palabra, que representa un sustantivo en singular.
La función deberá devolver, el plural de dicho sustantivo, aplicando las siguientes reglas:

- Agregar una 's' al final, si la palabra termica en vocal sin acento.
- Agregar una 's' al final, si la palabra termina con una 'é' (acentuada).
- Si la palbra termina en 'z', la reemplazamos por 'ces'.
- Agregamos 'es' al final, si la palabra termina con una consonante (a excepción de la 's', la 'z',
y la 'x'), ó si la palabra termina con las vocales acentuadas: á,í,ó,ú.
- Si el sustantivo termina en 's' ó 'x', entonces el plural es igual al singular, por lo tanto
la función deberá devolver lo mismo que recibió.                                            */


#include <stdio.h>
#include <string.h>

#define MF 30
typedef char t_cad[MF];

void devolver_plural(t_cad sustantivo,t_cad sustantivo_plural){
	int ml=strlen(sustantivo); //máximo logico ('\0')

	if( sustantivo[ml-1]=='a' || sustantivo[ml-1]=='e' || sustantivo[ml-1]=='i' || sustantivo[ml-1]=='o' || sustantivo[ml-1]=='u'){
		strcat(sustantivo_plural, sustantivo);
		strcat(sustantivo_plural,"s");
	}
	//intente meter el caso de las vocales con acento pero me tira error por alguna razón.
	else if(sustantivo[ml-1]=='z'){
		strcat(sustantivo_plural,sustantivo);
		sustantivo_plural[ml-1]='\0';
		strcat(sustantivo_plural,"ces");
	}	
	else{
		strcat(sustantivo_plural,sustantivo);		
		strcat(sustantivo_plural,"es");
	}
}
int main(void){
	t_cad sustantivo1 = "Casa";
	t_cad sustantivo2 = "Raiz";
	t_cad sustantivo3 = "Monitor";

	t_cad sustantivo_plural1;
	t_cad sustantivo_plural2;
	t_cad sustantivo_plural3;

	devolver_plural(sustantivo1,sustantivo_plural1);
	devolver_plural(sustantivo2,sustantivo_plural2);
	devolver_plural(sustantivo3,sustantivo_plural3);
	
	printf("Sustantivo Singular\tSustantivo Plural\n");
	printf("-----------------------------------------\n");
	printf("%s\t\t\t%s\n",sustantivo1,sustantivo_plural1);
	printf("%s\t\t\t%s\n",sustantivo2,sustantivo_plural2);
	printf("%s\t\t\t%s\n",sustantivo3,sustantivo_plural3);

	return 0;
}
