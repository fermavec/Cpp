#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int matriz1 [3][3];
	int matriz2 [3][3];
	int msuma[3][3];
	
//Creando Matriz 1
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<"Digire un numero ["<<i<<"]["<<j<<"]:";
		cin>>matriz1 [i][j];
	}
	}
//Creando matriz 2
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<"Digire un numero ["<<i<<"]["<<j<<"]:";
		cin>>matriz2 [i][j];
	}
	}
//Imprimiento Matrices
cout<<"\nEsta es la matriz 1: "<<endl;
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<matriz1[i][j];
	}
	cout<<"\n";
	}
cout<<"\nEsta es la matriz 2: "<<endl;
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<matriz1[i][j];
	}
	cout<<"\n";
	}

//Matriz suma
cout<<"\nLa Matriz Suma es: "<<endl;
	for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){
		msuma[i][j] = matriz1 [i][j] + matriz2 [i][j];
		cout<<msuma;
	}
	cout<<"\n";
	}

	getch();
	return 0;
}
