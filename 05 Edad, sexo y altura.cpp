/*Realice un programa que lea de la entrada
estandar, los siguientes datos de una persona:
a)Edad. Dato de tipo entero.
b)Sexo. Dato de tipo carácter.
c)Altura. Dato de tipo real.
Tras leer los datos, el programa debe mostrarlos
en la salida estandar. */
#include<iostream>
using namespace std;
int main (){
	int edad;
	//sexo[numerodecaracteres]
	char sexo[10];
	float altura;
	
	cout<<"digite su edad: "; cin>>edad;
	cout<<"digite su sexo: "; cin>>sexo;
	cout<<"digite su altura: "; cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura: "<<altura<<endl;




	return 0;
}
