#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
	char cadena1[]="Carlos";
	char cadena2[]=" está gordo";
	char cconcaten[100];
	
//Copiando c1 en cc
	strcpy(cconcaten,cadena1);
	
//Concatenando
	strcat(cconcaten,cadena2);
	
//Imprimiendo
	cout<<cconcaten<<endl;
	
	getch();
	return 0;
}
