//Estructuras basicas
#include<iostream>
#include<conio.h>
using namespace std;
//Estructura antes de variable principal
struct datos1{
	char n[100];
	int e;
}
	u1;

int main (){
//Solicitando info
	cout<<"Nombre de usuario: ";
	cin.getline(u1.n,100,'\n');
	cout<<"Edad del usuario: ";
	cin>>u1.e;
	
//montrando info	
	cout<<"El nombre del usuario 1 es: "<<u1.n<<endl;
	cout<<"La edad del usuario 1 es: "<<u1.e<<endl;
		
	getch ();
	return 0;
}
