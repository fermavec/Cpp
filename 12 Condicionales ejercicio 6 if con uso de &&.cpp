/*Escriba un programa que solicite en la entrada estandard una edad
y en la salida no diga si esta en el rango entre 18 y 25*/
#include <iostream>
using namespace std;
int main(){
	int edad;
	cout<<"Digite su edad: ";
	cin>>edad;
//&& uso de los "y ademas"
if ((edad>=18)&&(edad<=25)){
	cout<<"Su edad esta en el rango solicitado";
}
else{
	cout<<"Su edad no esta en el rango solicitado";
}
	return 0;
}
