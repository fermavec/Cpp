/*Cree un programa en el que se registre un numero entero
y este pueda determinar si es un valor par o impar*/
#include<iostream>
using namespace std;
int main(){
	int n1;
	cout<<"Digite un numero: ";
	cin>>n1;
if (n1==0){
	cout<<"El numero es cero";
}
else{
//La siguiente condicional se lee como en caso de la división entre 2, cuál sería el residuo.	
if (n1%2==0){
	cout<<"El numero es par";
}
else{
	cout<<"El numero es impar";
}
}
	
	return 0;
}
