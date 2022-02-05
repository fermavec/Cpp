/*2. Realice un programa que lea de la entrada estándar números hasta que se 
introduzca un cero. En ese momento el programa debe terminar y mostrar en la 
salida estándar el número de valores mayores que cero leídos.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n1,conteo=0; 
	
	do{
		cout<<"Digite un numero: "; 
		cin>>n1;
		if(n1>0){
			conteo++; //aumentamos el conteo cada vez que encuentra un numero mayor a 0	
		}
	}while(n1 != 0);
	
	
	cout<<"\nEl total de numeros mayores que 0 es: "<<conteo;
	cout<<endl;
	
	system("pause");
	return 0;
}
