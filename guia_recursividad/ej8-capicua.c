/*
Desarrollar una función recursiva que compruebe si un número pasado como parámetro
es capicúa.
*/

#include <stdio.h>
#include <stdbool.h>

bool es_capicua(int num){
	int aux = sizeof(num);
	
	if(num<10)
		return true;
	else if(num<100)
		return (num/10 == num%10);
	else{
		if((num/((aux-1)*10))==num%10){
			return es_capicua(num/100);
		}
		else
			return false;	
	}
}
int main(){
	int num=2345432;
	if(es_capicua(num))
		printf("%i es capicua",num);
	else
		printf("%i no es capicua",num);
}
