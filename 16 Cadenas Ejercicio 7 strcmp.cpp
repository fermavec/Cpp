#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){
	char cadena1[20];
	char cadena2[20];
	cout<<"Digite una palabra: ";
	cin.getline(cadena1,20,'\n');
	cout<<"Digite la misma palabra: ";
	cin.getline(cadena2,20,'\n');
	
//Comparando cadenas
if(strcmp(cadena1,cadena2)==0){
	cout<<"Perfecto, ambas cadebas son iguales"<<endl;
}else{
	if(strcmp(cadena1,cadena2)<0){
		cout<<cadena1<<" es primero alfabeticamente que "<<cadena2<<endl;
	}else{
		cout<<cadena1<<" es despues alfabeticamente que "<<cadena2<<endl;
	}
}
	
	getch ();
	return 0;
}
