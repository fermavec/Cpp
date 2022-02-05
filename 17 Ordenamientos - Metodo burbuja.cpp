/*Ordenamiento a traves del metodo
burbuja*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int enteros []={5,2,1,4,3};
	int i, j, aux;//variables iterantes
for(i=0; i<5; i++){
for(j=0; j<5; j++){
	if(enteros[j] > enteros[j+1]){
		aux = enteros[j];
		enteros[j] = enteros[j+1];
		enteros[j+1] = aux;
		
	}
}
}
cout<<"Numeros ascendentes: ";
for(i=0; i<5; i++){
	cout<<enteros[i];
}
cout<<"\nNumeros descendentes: ";
for(i=4; i>=0; i--){
	cout<<enteros[i];
}
	
	getch();
	return 0;
}
