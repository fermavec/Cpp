/*Escribe un programa que
lea de la entrada estandar 
el precio de algo y  en la salida
estandar su precio mas iva */

#include<iostream>
using namespace std;
//Variables
int main (){
/*la variable siguiente
puede ser int, float
o double, dependiendo
de la exactitud que
se busque */
	double n1, Precio = 0,
	Iva = 0, Total = 0;	
//Ingreso de datos	
	cout<<"Digita el precio del producto: "; cin>>n1;
//operaciones
	Precio = n1;
	Iva = n1 * .16;
	Total = n1 + Iva;
//impresion de resultados
	cout<<"\nEl precio unitario es "<<Precio<<endl;
	cout<<"El Iva es "<<Iva<<endl;
	cout<<"El precio total es "<<Total<<endl;
//Adicionales finales de siempre
	cout<<"\n";
	return 0;
}
