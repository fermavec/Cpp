/*Cree un programa en el que se registre un numero entero
y este pueda determinar si es un valor par o impar*/
#include<iostream>
using namespace std;
int main(){
	float n1;
	cout<<"Digite un numero: ";
	cin>>n1;
if (n1==0){
	cout<<"El numero es cero";
}
else{
//La siguiente condicional se lee como en caso de la divisi�n entre 2, cu�l ser�a el residuo.	
if (n1>0){
	cout<<"El numero es positivo";
}
else{
	cout<<"El numero es negativo";
}
}
	
	return 0;
}
