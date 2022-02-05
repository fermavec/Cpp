/*Hacer un menu*/
#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int opc,n2;
	float n1, cubo, resultado;
	cout<<"\tBienvenido"<<endl;
	cout<<"1.Calcular el cubo de un numero"<<endl;
	cout<<"2.Definir si un numero es par o impar"<<endl;
	cout<<"3.Salir"<<endl;
	cout<<"Digite la opcion deseada: "; cin>>opc;
//condicionales
switch (opc){
	case 1:
		cout<<"Digite el numero que quiere elevar al cubo: ";
		cin>>cubo;
		resultado=pow(cubo,3);
		cout<<"El resultado es "<<resultado; break;
	case 2:
		cout<<"Digute el numero desado: ";
		cin>>n2;
	if(n2%2==0){
		cout<<"Tu numero es par";
	}
	else{
		cout<<"Tu numero es impar";
	}
	case 3: break;
}
	
	return 0;
}
