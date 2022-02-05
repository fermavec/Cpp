/*Escribe un programa que
lea de la entrada estandar 
dos numeros y  en la salida
estandar su suma, resta, 
multiplicacion y division */

#include<iostream>
using namespace std;
//Variables
int main (){
/*la variable siguiente
puede ser int, float
o double, dependiendo
de la exactitud que
se busque */
	double n1, n2, suma = 0, resta = 0, 
	multiplicacion = 0, division = 0;	
//Ingreso de datos	
	cout<<"Digita un numero: "; cin>>n1;
	cout<<"Digita otro numero: "; cin>>n2;
//operaciones
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
//impresion de resultados
	cout<<"\nLa suma es "<<suma<<endl;
	cout<<"La resta es "<<resta<<endl;
	cout<<"La multiplicacion es "<<multiplicacion<<endl;
	cout<<"La division es "<<division<<endl;
//Adicionales finales de siempre
	cout<<"\n";
	return 0;
}

