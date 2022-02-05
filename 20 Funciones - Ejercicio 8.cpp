#include<iostream>
#include<conio.h>
using namespace std;
void calculo(int x, int y, int&, int &);
int main (){
	int x, y, suma=0, producto=0;
	
	cout<<"Digite un numero: ";
	cin>>x;
	cout<<"Digite otro numero: ";
	cin>>y;
	
	calculo(x, y, suma, producto);
	
	cout<<"El valor de la suma es: "<<suma<<endl;
	cout<<"El valor de la multiplicacion es: "<<producto<<endl;
	
	getch();
	return 0;
}
void calculo(int x, int y, int& suma, int & producto){
	suma = x + y;
	producto = x * y;
}
