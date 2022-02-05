/*Un programa qie lea los numeros de un vector
y entregue en la salida los indices asociados-*/
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int numeros[100],n;
	cout<<"\nDigite el numero de elementos que tendra el arreglo: ";
	cin>>n;
	
	for (int i=0; i<n; i++){
		cout<<"Digite un numero: ";
		cin>>numeros[i];
		//guardando elementos del vector
	}
		//mostrando elementos e indices asociados
	for (int i=0; i<n; i++){
		cout<<numeros[i]<<" esta en la posicion "<<i<<endl;
	}
	
	
	getch ();
	return 0;
}
