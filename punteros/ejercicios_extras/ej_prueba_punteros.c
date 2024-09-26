#include <stdio.h> 

int multiplicar(int* pnum1,int* pnum2){
	int producto;
	producto=(*pnum1)*(*pnum2);
	*pnum1=producto;
}
int suma(int* pnum1, int* pnum2){
	int suma;
	suma=*pnum1+*pnum2;
	printf("\n%i + %i = %i\n\n",*pnum1,*pnum2,suma);
	multiplicar(pnum1,pnum2);
}
int main(){
	int num1=5,num2=10;
	suma(&num1,&num2);
	printf("\n%i + %i\n\n",num1,num2);
	return 0;
}
