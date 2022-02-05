#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de funcion
void datos();
void potencia(int x, int y);
int numero, exponente;

int main (){
	
	datos();
	potencia(numero, exponente);
	
	getch();
	return 0;
}
void datos(){
	cout<<"Digite un numero: ";
	cin>>numero;
	cout<<"A qué potencia: ";
	cin>>exponente;	
}
void potencia(int x, int y){
	long multiplicacion=1;
	for(int i=1; i<=y; i++){
		multiplicacion *= x;
	}
	cout<<"EL numero "<<numero<<" elevado a la "<<y<<
	" potencia da como reultado "<<multiplicacion<<endl;
}
