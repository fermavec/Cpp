/*1. Realice un programa que solicite de la entrada estándar un entero del 1 al 
10 y muestre en la salida estándar su tabla de multiplicar.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n1;
	
	
	do{
		cout<<"Digite un numero[1-10]: "; 
		cin>>n1;
	}while((n1<1) || (n1>10));
	
	
	for(int i=1;i<=20;i++){
		cout<<n1<<" * "<<i<<" = "<<n1*i<<endl;
	}
	
	getch();	
	return 0;
}
