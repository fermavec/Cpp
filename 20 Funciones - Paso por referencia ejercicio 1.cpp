#include<iostream>
#include<conio.h>
using namespace std;
//Protocolo
void intercambio(int&, int&);

int main(){
	int x=10, y=5;
	
	cout<<"El valor de x es: "<<x<<endl;
	cout<<"El valor de y es: "<<y<<endl;
//Llamando a la funcion
	intercambio(x,y);
	
	cout<<"\nEl nuevo valor de x es: "<<x<<endl;
	cout<<"El nuevo valor de y es: "<<x<<endl;
	
	getch();
	return 0;
}
void intercambio(int& x, int& y){
	int aux;
	
	aux = x;
	x = y;
	y = aux;
}
