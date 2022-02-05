#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
	char c1[100];
	char c2[100];
	
//Solicirabdo palabra
	cout<<"Ingrese una palabra: ";
	cin.getline(c1,100,'\n');

//Copiando c1 a c2
	strcpy(c2,c1);
//inviertiendo c2
	strrev(c2);
//Comprobando capicua de palabras
	if(strcmp(c2,c1)==0){
		cout<<"Su palabra es capicua ya que es igual en su forma reversiva"<<endl;
	}else{
		cout<<"Su palabra no es capicua ya que NO es igual en su forma regresiva"<<endl;
	}
//Ejemplo: reconocer
	getch();
	return 0;
}
