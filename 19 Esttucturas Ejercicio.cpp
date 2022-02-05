//Estructura basica
#include<iostream>
#include<conio.h>
using namespace std;
struct main{
	char n[100];
	int e;
}
	p1;
int main (){
	cout<<"Nombre de usuario: ";
	cin.getline(p1.n,100,'\n');
	cout<<"Edad dle usuario: ";
	cin>>p1.e;
//Imprimiendo	
	cout<<"\nNombre: "<<p1.n<<endl;
	cout<<"Edad: "<<p1.e;
	
	getch();
	return 0;
}
