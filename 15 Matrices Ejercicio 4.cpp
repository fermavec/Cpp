#include<iostream>
#include<conio.h>
using namespace std;
int main (){
	int mprincipal[100][100], f, c;
	int msecundaria[100][100];
	cout<<"Digite el numero de filas: ";
	cin>>f;
	cout<<"Digite el numero de columnas: ";
	cin>>c;
cout<<"\n";	
//Registro de numeros
	for (int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>mprincipal [i][j];
}
cout<<"\n";
}
//Copia a matriz secundaria
	for(int i=0; i<f; i++){
	for(int j=0; j<c; j++){
	msecundaria [i][j] = mprincipal [i][j];
	}
}
//Impresion de matriz secundaria
	for(int i=0; i<f; i++){
	for(int j=0; j<c; j++){
		cout<<msecundaria [i][j];
	}
	cout<<"\n";
	}
	
	getch ();
	return 0;
}
