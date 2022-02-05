/*Escribir un programa que lea de la entrada estandar
un caracter  y en la salida nos diga si es vocal minuscula 
o mayuscula o no es vocal*/
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
	case 'A':
	case 'E': 
	case 'I':
	case 'O': 
	case 'U': cout<<"Es una vocal mayuscula"; break;
	default : cout<<"No es una vocal"; break;
}
	return 0;
}
