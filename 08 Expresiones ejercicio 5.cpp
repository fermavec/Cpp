/*Escriba un fragmento de programa que
cambie los valores de dos variables*/
#include<iostream>
using namespace std;
int main (){
	int x,y,aux;
	
	cout<<"Digite el valor de X: "; cin>>x;
	cout<<"Digite el valor de Y: "; cin>>y;
	
	/*X=valor 1 y Y=valor2
	entonces
	X=valor 2 y Y=valor 1*/
	
	aux = x;
	x = y;
	y = aux; 
	
	cout<<"\nEl nuevo valor de X es: "<<x<<endl;
	cout<<"El nuevo valor de Y es: "<<y<<endl;
	
		return 0;
}
