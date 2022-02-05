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
//Dos iguales es el operador de igualdad comparada
	if(numero == dato){
		cout<<"El número es igual a 5";
	}else{
		cout<<"El número es diferente de 5";
	}
	return 0;
}
