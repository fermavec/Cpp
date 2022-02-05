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
}a[100];
int main(){
	int n, posM=0;
	float pa[100];
	float mayor=0;
//Solicitando cantidad de alumnos
	cout<<"Digite el numero de alumnos: ";
	cin>>n;
	cout<<"\n";
//Solicitando datos del alumno
	for (int i=0; i<n; i++){
		fflush(stdin);
		cout<<"Nombre: ";
		cin.getline(a[i].nombre,100,'\n');
		cout<<"Sexo: ";
		cin.getline(a[i].sexo,10,'\n');
		cout<<"Edad: ";
		cin>>a[i].edad;
		cout<<"\n Notas \n";
		cout<<"Matematicas: ";
		cin>>a[i].prom.math;
		cout<<"Ciencias: ";
		cin>>a[i].prom.science;
		cout<<"Historia: ";
		cin>>a[i].prom.history;
		
	pa[i]=(a[i].prom.math + a[i].prom.science + a[i].prom.history)/3;
	if(pa[i]>mayor){
		mayor = pa[i];
		posM = i;
	}
	cout<<"\n\n";
}
//Imprimiendo el resultado
cout<<"El promedio mas alto fue\n"<<endl;
	cout<<"Nombre: "<<a[posM].nombre<<endl;
	cout<<"Sexo: "<<a[posM].sexo<<endl;
	cout<<"Edad: "<<a[posM].edad<<endl;
	cout<<"Promedio: "<<pa[posM]<<endl;
	
	
	getch();
	return 0;
}
