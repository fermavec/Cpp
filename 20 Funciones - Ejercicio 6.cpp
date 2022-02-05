#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de funcion
template <class TIPOD>
void despliegue (TIPOD dato);

int main (){
	
	int dato1 = 4;
	float dato2 = 12.25;
	double dato3 = 128.2874;
	char dato4 = 'o';
	
	despliegue (dato1);
	despliegue (dato2);
	despliegue (dato3);
	despliegue (dato4);
	
	
	
	getch();
	return 0;
}
//Definicion de la funcion
template <class TIPOD>
void despliegue (TIPOD dato){
	cout<<"El dato es: "<<dato<<endl;
}
