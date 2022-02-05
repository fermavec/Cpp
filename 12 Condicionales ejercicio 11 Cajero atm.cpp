/*Hacer un programa que simule un cajero con un sald
inicial de 1000 usd*/
#include <iostream>
using namespace std;
int main (){
	float si = 1000, deposito, saldo = 0, retiro = 0;
	int opc;
	cout<<"\tBienvenido a su cajero virtual"<<endl;
	cout<<"1.Ingresar dinero en cuenta"<<endl;
	cout<<"2.Retirar dinero de la cuenta"<<endl;
	cout<<"3.Salir"<<endl<<endl;
	cout<<"Digite la opcion de menu deseada: "; cin>>opc;
switch (opc){
	case 1:
		cout<<"Digite la cantidad a ingresar deseada: ";
		cin>>deposito;
		saldo = si + deposito;
		cout<<"Su saldo actual es de: "<<saldo;
		break;
	case 2:
		cout<<"Digite la cantidad a retirar deseada: ";
		cin>>retiro;
	if(retiro>si){
		cout<<"No tiene fondos suficientes";
	}
	else{
		saldo = si - retiro;
		cout<<"Su saldo actual es de: "<<saldo;
		}
	case 3: break;
}
	return 0;
}
