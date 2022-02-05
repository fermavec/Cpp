//Estructuras basicas
#include<iostream>
#include<conio.h>
using namespace std;
//Estructura antes de variable principal
struct datos{
	char nombre[100];
	int edad;
}
	usuario1 = {"Fernando",33},
	usuario2 = {"Patricia",59}
	;

int main (){
	cout<<"El nombre del usuario 1 es: "<<usuario1.nombre<<endl;
	cout<<"La edad del usuario 1 es: "<<usuario1.edad<<endl;
	
	cout<<"\nEl nombre del usuario 2 es: "<<usuario2.nombre<<endl;
	cout<<"La edad del usuario 2 es: "<<usuario2.edad<<endl;
	
	getch ();
	return 0;
}
