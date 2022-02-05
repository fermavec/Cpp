#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
	char c1[]="¡Hola!";
	char c2[100];
	char c3[]="Bienvenido ";
	char c4[100];
	
//Mostrando bienvenida
	cout<<c1<<endl;
//Solicitando nombre
	cout<<"¿Como te llamas?: ";
	cin.getline(c2,100,'\n');
	
//Copiando c3 en c4
	strcpy(c4,c3);
//Concatenando c2 en c4
	strcat(c4,c2);
//imprimiendo c4
	cout<<c4<<endl;
	
	
	getch();
	return 0;
}
