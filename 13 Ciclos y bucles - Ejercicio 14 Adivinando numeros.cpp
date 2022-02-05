//Adivinando tu numero
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main (){
	int numero, aleatorio, conteo=0;

	//genera numero aleatorio
	srand(time(NULL));
	aleatorio = 1 + rand ()%(100);
	do{
		cout<<"Digite un numero del 1 al 100: ";
		cin>>numero;
		
		if (numero>aleatorio){
		cout<<"\Digite un numero menor\n";
	}
		if (numero<aleatorio){
		cout<<"\Digite un numero mayor\n";
}		conteo ++;
	}while(numero!=aleatorio);
		cout<<"\nFelicidades, has adivinado";
		cout<<"\nNumero de intentos: "<<conteo<<endl;
	system("pause");
	return 0;
}
