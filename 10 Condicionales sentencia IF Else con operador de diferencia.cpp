/*Condicionales:
sentencia if
if(condición){
	instrucciones 1;
}
else{
	instrucciones 2;
}
*/
#include<iostream>
using namespace std;
int main(){
	float numero, dato = 5;
	
	cout<<"Digite un numero: "; cin>>numero;

//sentencia IF/ekse
// != es el operador de diferencia comparada
	if(numero != dato){
		cout<<"El número no es igual a 5";
	}else{
		cout<<"El número es 5";
	}
	return 0;
}
