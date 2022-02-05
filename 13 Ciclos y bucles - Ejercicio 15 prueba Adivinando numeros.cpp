//Adivinando tu numero
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main (){
	int numero, player1, conteo=0;

	cout<<"\nDigite un numero entre 1 y 100: ";
	cin>>player1;
	
	if(player1>100){
		cout<<"Numero fuera de rango"<<endl;
	}
	
	do{
		cout<<"Digite un numero del 1 al 100: ";
		cin>>numero;
		
		if (numero>player1){
		cout<<"\Digite un numero menor\n";
	}
		if (numero<player1){
		cout<<"\Digite un numero mayor\n";
}		
	if (player1>=101){
		cout<<"\Digite un numero dentro del rango\n";
}
	if (player1<=0){
		cout<<"\Digite un numero dentro del rango\n";
}
		conteo ++;
	}while(numero!=player1);
		cout<<"\nFelicidades, has adivinado";
		cout<<"\nNumero de intentos: "<<conteo<<endl;
	system("pause");
	return 0;
}
