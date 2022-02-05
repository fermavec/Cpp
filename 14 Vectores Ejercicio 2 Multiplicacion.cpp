/*Escriba un programa que defina un array
y calcule la multiplicacion de sus elementos*/
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	
	int numeros[5]={1,2,1,1,3};
	int mult=1;
	//bucle:
	for(int i=0; i<5; i++){
		mult *= numeros[i];
	}	
	cout<<"El producto del vector es: "<<mult<<endl;	
	
	getch();
	return 0;
}
