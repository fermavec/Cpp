#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char c1[100];
	char c2[]="B";
	
//Solicitando nombre
	cout<<"Digite su nombre en mayusculas: ";
	cin.getline(c1,100,'\n');
//Convirtiendo en caso de no cumplir condicion
	strupr(c1);
//condicional inicio A
	if(strcmp(c1,c2)>0){
		cout<<c1<<endl;
	}else{
		strlwr(c1);
		cout<<c1<<endl;
	}
	
	
	getch();
	return 0;
}
