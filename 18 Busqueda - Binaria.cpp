//Busqueda Binaria
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int enteros[]={1,2,3,4,5};
	int inferior, superior, mitad, dato;
	char bandera = 'F';
	dato = 4;
//Algoritmo de Busqueda Binaria
	inferior = 0;
	superior = 5;//Total de elementos
	while(inferior <= superior){
		mitad = (inferior+superior)/2;
		
		if (enteros[mitad] == dato){
			bandera = 'V';
			break;
		}
		if (enteros[mitad] > dato){
			superior = mitad;
			mitad = (superior+inferior)/2;
		}
		if (enteros[mitad] < dato){
			inferior = mitad;
			mitad = (superior+inferior)/2;
		}
	}
	if (bandera = 'V'){
		cout<<"El numero fue encontrado en la posicion "<<mitad<<endl;
	}else{
		cout<<"El numero no fue encontrado"<<endl;
	}
		
	
	getch();
	return 0;
}
