/*Escriba un programa que calcule lo siguiente:
	2'1, 2'2, 2'3,... 2'm*/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main (){
	int n, suma=0, elevacion=0;
	cout<<"Digite el numero de veces a las que desea elevar 2 y obtendra su suma: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		elevacion = pow (2,i);
		suma += elevacion; //suma = suma + elevacion 
	}
	cout<<"\nEl resultado es: "<<suma<<endl;
	
	getch ();
	return 0;
}
