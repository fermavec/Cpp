/*Escriba un programa que lea la nota
final de cuatro alumnos y entregue el 
promedio de los mismos*/
#include<iostream>
using namespace std;
int main (){
	float fer,alejandro,carlos, aldo,resultado = 0;
	
	cout<<"Digite la nota de Fer: "; cin>>fer;
	cout<<"Digite la nota de Alejandro: "; cin>>alejandro;
	cout<<"Digite la nota de Carlos: "; cin>>carlos;
	cout<<"Digite la nota de Aldo: "; cin>>aldo;
	
	resultado = (fer + carlos + alejandro + aldo)/4;
	
	cout<<"\nEl promedio final de los cuatro es: "<<resultado<<endl;
	
		return 0;
}
