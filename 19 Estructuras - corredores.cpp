/*Estructura que asigna categorias*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

	struct corredor{
		char nombre[100];
		int edad;
		char sexo[10];
		char club[100];
	}c1;

int main (){
	
	char categoria[100];//Variable para categoria
	
	//Solicitando informacion
	cout<<"Nombre: ";
	cin.getline(c1.nombre,100,'\n');
	cout<<"Edad: ";
	cin>>c1.edad;
	fflush(stdin);
	cout<<"Sexo: ";
	cin.getline(c1.sexo,10,'\n');
	cout<<"Club: ";
	cin.getline(c1.club,100,'\n');
	cout<<endl;
	
	//Comparando categoria con edad
	if(c1.edad <= 18){
		strcpy(categoria, "Juvenil");
	}else 
	if(c1.edad <= 40){
		strcpy(categoria, "Adulto");
	}else{
		strcpy(categoria, "Veterano");
	}		
	
	//Imprimiendo informacion
	cout<<"Datos del corredor"<<endl;
	cout<<"Nombre: "<<c1.nombre<<endl;
	cout<<"Edad: "<<c1.edad<<endl;
	cout<<"Sexo: "<<c1.sexo<<endl;
	cout<<"Club: "<<c1.club<<endl;
	cout<<"Su categoria es: "<<endl<<categoria<<endl;
	
	getch();
	return 0;
}
