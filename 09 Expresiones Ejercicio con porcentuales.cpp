/*Calcular la media ponderada de 3 notas 1 que es el 30 de la nota
2 que seria el 69 y tres que seria el 10 porciento*/

#include<iostream>
using namespace std;
int main (){
	float practicas, teoria, participacion, notafinal = 0;
	
	cout<<"Digite la nota de prácticas del estudiante: "; cin>>practicas;
	cout<<"Digite la nota de teoría del estudiante: "; cin>>teoria;
	cout<<"Digite la nota de participación del estudiante: "; cin>>participacion;	
	
	//practicas = practicas * 0.30
	practicas *= 0.30;
	teoria *= 0.60;
	participacion *= 0.10;
	
	//nota final
	notafinal = practicas + teoria + participacion;
	//impresion
	cout<<"\nLa nota final del estudiante es: "<<notafinal<<endl;
	
	return 0;
}

