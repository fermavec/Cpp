#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
	char cadena1[20];
	int caracteres = 10;
	
//Solicitando info al usuario
	cout<<"Digite una serie de 10 caracteres: ";
	cin.getline(cadena1,20,'\n');
	caracteres = strlen(cadena1);
//Montrando al usuarui
	if(caracteres <= 10){
		cout<<"Su cadena dice: "<<cadena1;
	}else{
		cout<<"Su cadena excede los 10 caracteres";
	}	
	
	getch ();
	return 0;
}
