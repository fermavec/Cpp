/*Ciclos o Bucles:
La sentencia while
	while(expresion logica){
	conjunto de instrucciones;
	}
*/
#include <iostream>
#include <conio.h>

using namespace std;
int main (){
	int i;
	i = 1;
	
//bucle
	while (i<=10){
		cout<<i<<endl;
		i++;
	}
	getch();	
	return 0;
}
