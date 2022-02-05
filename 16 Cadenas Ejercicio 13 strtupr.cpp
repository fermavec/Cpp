#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main (){
	char c1[100];
	char c2[100];
//Solicitando palabras
	cout<<"Digite una palabra: ";
	cin.getline(c1,100,'\n');
	cout<<"Digite la misma palabra: ";
	cin.getline(c2,100,'\n');
//Convirtiendo ambas en mayusculas
	strupr(c1);
	strupr(c2);
//Comparando ambas
	if(strcmp(c1,c2)==0){
		cout<<c1<<" es igual a "<<c2<<endl;
	}else{
		cout<<c1<<" es diferemte de "<<c2<<endl;
	}
	
	
	getch();
	return 0;
}
