#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main (){
	char c1[100];
	int a=0, e=0, i=0, o=0, u=0;
//Solicitando frase
	cout<<"Escriba una frase: ";
	cin.getline(c1,100,'\n');
//Convirtiendo a minusculas
	strlwr(c1);
//Contabilizando vocales
	for(int t=0; t<100; t++){
		switch (c1[t]){
			case 'a': a++; break;
			case 'e': e++; break;
			case 'i': i++; break;
			case 'o': o++; break;
			case 'u': u++; break;
		}
	}
//Imprimiendo resultados en pantalla
			cout<<"Letras a: "<<a<<endl;
			cout<<"Letras e: "<<e<<endl;
			cout<<"Letras i: "<<i<<endl;
			cout<<"Letras o: "<<o<<endl;
			cout<<"Letras u: "<<u<<endl;
	
//Fin de programa	
	getch();
	return 0;
}
