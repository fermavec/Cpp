//Ordenamiento por insercion
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int enteros[]={4,3,1,2,5};
	int i, posicion, aux;
	
//Algotitmo de ordenamiento por insercion
for (i=0; i<5; i++){
	posicion = i;
	aux = enteros[i];
		while ((posicion > 0) && (enteros[posicion-1] > aux)){
		enteros[posicion] = enteros[posicion-1];
		posicion--;
		}
		enteros[posicion] = aux;
}
//Impresion en pantalla
cout<<"Numeros ascendentes: ";
for(i=0; i<5; i++){
	cout<<enteros[i]<<" ";
}	
cout<<"\nNumeros descendentes: ";
for(i=4; i>=0; i--){
	cout<<enteros[i]<<" ";
}
		
	getch();
	return 0;
}
