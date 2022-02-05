/*Ciclos y bucles.
Sentencoa do/while:
	do{
	conjunto de interacciones;
}
	while(expresion logica);
	*/
	#include <iostream>
	#include <stdlib.h>//similar que conio.h
	using namespace std;
	int main (){
	//i se refiere a iterador
		int i;
		i=10;
	//do/while
		do{
		cout<<i<<endl;
	/*++ es para ir aumentando 
	de 1 en 1 y -- para la disminucion*/	
		i--;
		}
		while(i>=1);	
		
		system("pause");//similar a getch();
		return 0;
	}
