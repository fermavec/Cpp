//Estructura anidada
#include<iostream>
#include<conio.h>
using namespace std;

struct informacion{
	char direccion [100];
	char estado [100];
	char provincia [100];
};
struct empleado{
	char nombre [100];
	struct informacion informacion;
	double sueldo;
}empleados[2];

int main (){
	
//Solicitando informacion del empleado
	for(int i=0; i<2; i++){
		fflush(stdin);//Vacia el Bufer para no sobre carga de informacion basura
		cout<<"Nombre del empleado: ";
		cin.getline(empleados[i].nombre,100,'\n');
		cout<<"Direccion: ";
		cin.getline(empleados[i].informacion.direccion,100,'\n');
		cout<<"Estado: ";
		cin.getline(empleados[i].informacion.estado,100,'\n');
		cout<<"Provincia: ";
		cin.getline(empleados[i].informacion.provincia,100,'\n');
		cout<<"Sueldo: ";
		cin>>empleados[i].sueldo;
		cout<<"\n";

	}
	
//Imprimiendo informacionb
	for(int i=0; i<2; i++){
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Direccion: "<<empleados[i].informacion.direccion<<endl;
		cout<<"Estado: "<<empleados[i].informacion.estado<<endl;
		cout<<"Provincia: "<<empleados[i].informacion.provincia<<endl;
		cout<<"Sueldo: "<<empleados[i].sueldo<<endl;
		cout<<endl;
		cout<<"\n";//Tuve que poner varios endline o saltos
	}
/*Extras para linux
        cin.clear();
        cin.ignore(256,'\n');
*/

	getch();
	return 0;
}
