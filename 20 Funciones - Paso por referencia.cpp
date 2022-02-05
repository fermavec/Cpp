//Paso por referencia
#include<iostream>
#include<conio.h>
using namespace std;
void valNum (int&, int&);
int main (){
	int x, y;
	
	cout<<"Digite un numero: ";
	cin>>x;
	cout<<"Digite otro numero: ";
	cin>>y;
	
	valNum(x,y);
	
	cout<<"Los siguientes valores los asigne desde el codigo."<<endl;
	cout<<"El nuevo valor de x es: "<<x<<endl;
	cout<<"El nuevo valor de y es: "<<y<<endl;
	
	getch();
	return 0;
}
void valNum (int& xnum, int& ynum){
	cout<<"El primer numero es: "<<xnum<<endl;
	cout<<"El segundo numero es: "<<ynum<<endl;	
	
	xnum = 85;
	ynum = 103;
}
