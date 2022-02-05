//Busqueda secuencial
#include<iostream>
#include<conio.h>
using namespace std;
int main (){
	int a[]={1,5,4,2,3};
	int i, dato;
	char bandera ='F';
	dato = 4;
//Algoritmo para busqueda secuencial
	i=0;
	while((bandera=='F') && (i<5)){
		if(a[i]==dato){
			bandera ='V';
		}
	i++;
	}
//Mostrando el resultado
	if(bandera=='F'){
		cout<<"El numero no fue encontrado en el arreglo"<<endl;
	}else if(bandera=='V'){
		cout<<"Su numero fue encontrado en la posicion "<<i-1<<endl;
	}
	
	
	getch();
	return 0;
}
