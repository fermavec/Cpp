/*Escribir un programa que lea de la entrada estandar
un caracter  y en la salida nos diga si es vocal o no*/
#include <iostream>
using namespace std;
int main (){
	char letra;
	cout<<"Digite una vocal: ";
	cin>>letra;
	
switch(letra){
	case 'a':
	case 'e': 
	case 'i':
	case 'o': 
	case 'u': cout<<"Es una vocal minuscula"; break; 
	default : cout<<"No es una vocal minuscula"; break;
}
	return 0;
}
