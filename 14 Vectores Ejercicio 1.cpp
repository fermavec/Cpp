/*Escriba un programa que defina un array
y calcule la suma de sus elementos*/
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	
	int numeros[5]={1,2,3,4,5};
	int suma=0;
	//bucle:
	for(int i=0; i<5; i++){
		suma += numeros[i];
		cout<<"La suma del vector es: "<<suma<<endl;
	}	
	
	
	getch();
	return 0;
}
