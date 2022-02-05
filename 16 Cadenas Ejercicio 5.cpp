#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
	
	char cprincipal [30];
	char csecundaria[30];
	
//Solicitando al usuario
	cout<<"Digite una cadena de maximo 30 caracteres: ";
	cin.getline(cprincipal,30,'\n');
	
//Mostrando cadena al usuario
	cout<<"Su cadena original es: "<<cprincipal<<endl;
	
//Copiando
	strcpy(csecundaria,cprincipal);
	
//Mostrando cadena copiada
	cout<<"Su cadena se copio a cadena secundaria como: "
	<<csecundaria<<endl;
	
	getch();
	return 0;
}
