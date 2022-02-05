//Funciones
#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de la funcion
int encontrarMax(int x, int y);

int main (){
	int n1, n2;
	int mayor;

cout<<"Digite dos numeros: ";
cin>>n1>>n2;

mayor = encontrarMax(n1,n2);

cout<<"El mayor de ambos numeros es: "<<mayor;
	
	getch();
	return 0;
}
//Definicion de la funcion
int encontrarMax(int x, int y){
	int numMax;

if(x>y){
	numMax = x;
}else{
	numMax = y;
}
return numMax;
}
