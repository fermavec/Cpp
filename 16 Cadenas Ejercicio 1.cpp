/*Cadenas de caracteres*/
#include <iostream>
#include <conio.h>
#include <string.h>//Biblioteca para cadenas
using namespace std;
int main (){

//Definiendo variable de cadena	
	char cadena1 [] = {'F','e','r','n','a','n','d','o'};//sintaxis 1
	char cadena2 [] = "Chavez"; //Sintaxis 2
	char cadena3 [20];

//Impresion de Cadenas	
	cout<<cadena1<<endl;
	cout<<cadena2<<endl;
	
//Solicitando info para cadena 3
	cout<<"\nDigite su nombre: ";
	//cin no se utiliizara porque corta con espacio
	//gets no se utilizara porque no respeta limitacion de caracteres
	cin.getline(cadena3,20,'\n');
	//Se utiliza cin.getline
	
	cout<<cadena3<<endl;
		
	getch ();
	return 0;
}
