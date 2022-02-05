/*Mattiz de 3x3 y Matriz traspuesta*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int mprincipal [3][3];
	
//Creando Matriz
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<"Digire un numero ["<<i<<"]["<<j<<"]:";
		cin>>mprincipal [i][j];
	}
	}
//impresion de matriz principal
cout<<"\nEsta es la matriz principa: "<<endl;
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<mprincipal[i][j];
	}
	cout<<"\n";
	}

//Matriz transpuesta
cout<<"\nLa Matriz Transpuesta es: "<<endl;
	for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){
		cout<<mprincipal[j][i];
	}
	cout<<"\n";
	}

	getch();
	return 0;
}
