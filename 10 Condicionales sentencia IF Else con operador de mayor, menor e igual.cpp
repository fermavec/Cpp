/*Condicionales:
sentencia if
if(condici�n){
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
// > < o <>= es el operador de igualdad comparada
	if(numero >= dato){
		cout<<"El n�mero es mayor o igual a 5";
	}else{
		cout<<"El n�mero es menor a 5";
	}
	return 0;
}
