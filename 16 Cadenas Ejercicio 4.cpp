#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
	
	char cprincipal[]= "Fernando";
	char ccopia [20];
	
//Copiando caracter principal a caracter copia
	strcpy(ccopia, cprincipal);
	
//Imprimiendo en pantalla
	cout<<"Su cadena principal es: "<<cprincipal<<endl;
	cout<<"Su cadena copia es: "<<ccopia<<endl;
	
	getch();
	return 0;
}
