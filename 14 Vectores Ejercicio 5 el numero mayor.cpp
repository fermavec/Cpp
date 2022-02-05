/*Programa que lea un vector de enteros
y determine a la salida el mayor*/
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
int numeros[100], n, mayor=0;
cout<<"Digite el numero de elementos del vector: ";
cin>>n;

for(int i=0; i<n; i++){
	cout<<i+1<<"Digite el numero correspondiente: ";
	cin>>numeros[i];
if(numeros[i] > mayor){
mayor= numeros[i];
}
}
cout<<"\nEl elemento mayor es: "<<mayor<<endl;
getch ();
return 0;
}
