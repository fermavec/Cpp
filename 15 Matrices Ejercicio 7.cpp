#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	
	int matrizp[100][100];
	int f, c;
	char band = 'f';
	
//Solicitando numero de f y c
	cout<<"Digite numero de filas: ";
	cin>>f;
	cout<<"Digite numero de columnas: ";
	cin>>c;
//Definiendo numeros de matrizp
	for(int i=0; i<f; i++){
	for(int j=0; j<c; j++){
		cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
		cin>>matrizp [i][j];
	}
	}
//Comprobando simetria de matriz
	if(f==c){
		for (int i=0; i<f; i++){
		for (int j=0; j<c; j++){
			if (matrizp[i][j]==matrizp[j][i]){
			band = 'v';
		}
		}
		}
	if (band=='v'){
		cout<<"\nLa matriz es simetrica";
	}else{
	cout<<"\nLa matriz no es simetrica";
	}
	}
	
	
	getch();
	return 0;
}
