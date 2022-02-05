//Ordenamiento por seleccion
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int enteros[]={4,3,5,2,1};
	int i, j, aux, min;//para almacenar el numero minimo
//Algoritmo:
	for(i=0; i<5; i++){
		min = i;
	for(j=i+1;j<5;j++){
		if(enteros[j]<enteros[min]){
			min = j;
		}
	}
		aux = enteros[i];
		enteros[i] = enteros[min];
		enteros[min] = aux;
	}
//impresion en pantalla
	cout<<"Ascendente: ";
for(i=0; i<5; i++){
	cout<<enteros[i]<<" ";
}
	cout<<"\nDescendente: ";
for(i=4; i>=0; i--){
	cout<<enteros[i]<<" ";
}
	
	
	getch();
	return 0;
}
