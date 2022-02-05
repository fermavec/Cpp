/*Empleado de nebir y 
de nayor salario*/
#include<iostream>
#include<conio.h>
using namespace std;
	struct empleado{
		char nombre[100];
		float salario;
	}emp[100];
int main(){
	int n_emp, posM, posm;
	float mayor=0, menor=9999999.99;
//Solicitando numero de empleados
	cout<<"Digite el numero de empleados: ";
	cin>>n_emp;
//Solicitando informacion de cada empleado
	for(int i=0; i<n_emp; i++){
	fflush(stdin);	
	cout<<i+1<<" Nombre: ";
	cin.getline(emp[i].nombre,100,'\n');
	cout<<i+1<<" Salario: ";
	cin>>emp[i].salario;
//Calculando mayor
	if(emp[i].salario > mayor){
		mayor = emp[i].salario;
		posM = i;
	}
//Calculando menor
	if(emp[i].salario < menor){
		menor = emp[i].salario;
		posm = i;
	}
	cout<<"\n";
}
//Imprimiendo resultados
	cout<<"El empleado con mayor salario"<<endl;
	cout<<"Nombre: "<<emp[posM].nombre<<endl;
	cout<<"Salario: "<<emp[posM].salario<<endl;
	cout<<"\n";
	cout<<"El empleado con menor salario"<<endl;
	cout<<"Nombre: "<<emp[posm].nombre<<endl;
	cout<<"Salario: "<<emp[posm].salario<<endl;
	
	
	getch ();
	return 0;
}
