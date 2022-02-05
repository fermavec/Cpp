//Alumnos estructura anidada
#include<iostream>
#include<conio.h>
using namespace std;
struct promedio{
	float math;
	float science;
	float history;
};

struct alumno{
	char nombre[100];
	char sexo[10];
	int edad;
	struct promedio prom;
}a1;
int main (){
	double pa1=0;
//Solicitando datos estructura alumno
	cout<<"Nombre: ";
	cin.getline(a1.nombre,100,'\n');
	cout<<"Sexo: ";
	cin.getline(a1.sexo,10,'\n');
	cout<<"Edad: ";
	cin>>a1.edad;	
//Solicitando notas del alumno para estructura promedio
	cout<<"\n ::::Notas del Alumno:::: "<<endl;
	cout<<"Matematicas: ";
	cin>>a1.prom.math;
	cout<<"Ciencias: ";
	cin>>a1.prom.science;
	cout<<"Historia: ";
	cin>>a1.prom.history;
//Calculo del promedio
	pa1 = (
	a1.prom.math +
	a1.prom.science +
	a1.prom.history
	)/3;
//Imprimiendo informacion
	cout<<"\n ::::Datos del Alumno:::: \n";
	cout<<a1.nombre<<endl;
	cout<<a1.sexo<<endl;
	cout<<a1.edad<<endl;
	cout<<"Matematicas "<<a1.prom.math<<endl;
	cout<<"Ciencias "<<a1.prom.science<<endl;
	cout<<"Historia "<<a1.prom.history<<endl;
	cout<<"Promedio general "<<pa1<<endl;
	
	
	getch ();
	return 0;
}
