/*
Desarrollar una función recursiva que compruebe si un número pasado como parámetro
es capicúa.
*/

#include <stdio.h>
#include <stdbool.h>

bool es_capicua(int num){
//	if(num>10)
//		return true;
	
	if(num%10==num/100){
		return true;
	}else{
		return (es_capicua(num/100));
	}
	
}
int main(){
	int num=23454312;
	if(es_capicua(num))
		printf("%i es capicua",num);
	else
		printf("%i no es capicua",num);

}
