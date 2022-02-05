//Valor absoluto de un numero
#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de funcion
template <class TIPOD>
void mostrarABS(TIPOD numero);

int main(){
	
	int num1 = -85;
	double num2 = -468.487;
	float num3 = -485.66554654588;
//Llamando a la funcion
	mostrarABS(num1);
	mostrarABS(num2);
	mostrarABS(num3);
		
	getch();
	return 0;
}
//Definicion de funcion
template <class TIPOD>
void mostrarABS(TIPOD numero){
	if(numero<0){
		numero = numero * -1;
	}
	cout<<"El numero es: "<<numero<<endl;
}
