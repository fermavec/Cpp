#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
	char cadena1[]= "Fernando";
	int longitud = 0;	
	
	longitud = strlen(cadena1);
	
	cout<<cadena1;
	cout<<"\nCon un total de caracteres de: "<<longitud;
	
	getch ();
	return 0;
}
