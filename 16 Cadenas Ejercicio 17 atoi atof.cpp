#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(){
	char c1[100];
	char c2[100];
	int enteroc1;
	float flotantec2, flotantesuma;
//Solicitando al usuario
	cout<<"Digite un numero entero: ";
	cin.getline(c1,100,'\n');
	cout<<"Digite un nuero real: ";
	cin.getline(c2,100,'\n');
//Convirtiendo caracteres en VARIABLES DIF
	enteroc1 = atoi(c1);
	flotantec2 = atof(c2);
//Entregando info ingresada
	cout<<"Su numero entero es: "<<enteroc1<<endl;
	cout<<"Su numero real es: "<<flotantec2<<endl;
//Calculando suma	
	flotantesuma = flotantec2 + enteroc1;
//Entrehando suma
	cout<<"La suma de ambos numeros es: "<<flotantesuma<<endl;
//Fin de programa	
	getch();
	return 0;
}
