/*Escriba un programa que lea dos numeros
y determione cuál de ellos es el mayor*/
#include <iostream>
using namespace std;
int main (){
	float n1, n2;
	cout<<"Digite dos numeros: ";
	cin>>n1>>n2;
//Condicional
if(n1 == n2){
		cout<<"Ambos numeros son iguales";
}else
//borré los "{ }" porque, al juntar "else if", no son necesarios	
	if(n1>n2){
		cout<<"El mayor es: "<<n1;
			}
	else{
		cout<<"El mayor es: "<<n2; 
		}
	return 0;
}
