/*Programa en el que se definiran 2 vectores diferentes y
lo almacenaran en uno nuevo*/
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	char letras1[] = {'a', 'b', 'c', 'd', 'e'};
	char letras2[] = {'f', 'g', 'h', 'i', 'j'};
	char juntas[10];
	
	//Copiando Letras1 a juntas con bucle
	for(int i=0; i<5; i++){
		juntas[i]=letras1[i];
	}
	//copiando letras2 en juntos
	for(int i=5; i<10; i++){
		juntas[i]=letras2[i-5];
	}	
	//imprimiendo vector
	for (int i=0;i<10;i++){
		cout<<juntas[i];
	}
	
	getch ();
	return 0;
}
