/*Realice un programa que muestre en la salida estandar
la suma de los cuadrados de los 10 primeros numeros despues de cero*/
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int suma = 0, cuadrado;
	
	for (int i = 1; i <= 10; i++){
	cuadrado = i * i;
	suma += cuadrado;//suma = suma + cuadrado
	}
	cout<<"El resultado de la suma es: "<<suma<<endl;
	
	getch();	
	return 0;
}
