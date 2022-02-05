//Expresiones
/*Escriba la siguiente expresión (a sobre b 
mas 1)como expresión de C++*/
#include<iostream>
using namespace std;
int main (){
	float a, b, resultado = 0;
	
	cout<<"digite el valor de a: "; cin>>a;
	cout<<"digite el valor de b: "; cin>>b;
	
	resultado = (a/b) + 1;
//cout.precision es para redondear decimales	
	cout.precision (2):
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	cout<<"\n";
	return 0;
}
