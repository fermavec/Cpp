#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de funcion
void pedirdatos();
void mult(float x, float y);
float num1, num2;
int main (){
	
	pedirdatos();
	mult(num1,num2);	
	
	
	
	getch ();
	return 0;
}
//Definiendo funcion
void pedirdatos(){
	cout<<"Ingrese 2 numeros: ";
	cin>>num1>>num2;
}
void mult(float x, float y){
	float multiplicacion = x * y;
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}
