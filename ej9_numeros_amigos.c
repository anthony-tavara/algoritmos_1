/*Dos números se dicen amigos cuando uno de ellos es igual a la suma de todos los divisores del otro
excepto el mismo. Ej: Los números 220 (1+2+4+5+10+11+20+22+44+55+110=284) y 284 (1+2+4+71+142=220)
son amigos. Se pide:
a) escribir una función booleana que llamada desde un programa, permita discernir si dos números
(paráetros) son amigos.
b) Usar otra función para calcular la suma de los divisores de un número determinado.
c) Hacer referencia a dichas funciones desde un programa o desde otro subprograma.*/

#include <stdio.h>
#include <stdbool.h>

int suma_divisores(int num){
	int i,suma_divisores;
	suma_divisores=0;
	for(i=1;i<num;i++)
		if(num%i==0)
			suma_divisores+=i;
	return suma_divisores;
}

bool son_numeros_amigos(int num1,int num2){
	if(suma_divisores(num1)==num2 && suma_divisores(num2)==num1)
		return true;
	else
		return false;
}
void main(){
	int num1,num2;
	printf("Ingrese el primer número: ");
	scanf("%i",&num1);
	printf("Ingrese el segundo número: ");
	scanf("%i",&num2);
	if(son_numeros_amigos(num1,num2))
		printf("%i y %i son amigos.\n",num1,num2);
	else
		printf("%i y %i no son amigos.\n",num1,num2);
}
