/*Programa en el que la variable de entrada sera un numero
entre el 1 y el 12, entregando como resultado
el mes dela año correspondiente*/
#include <iostream>
using namespace std;
int main (){
	int mes;
	cout<<"Digite su mes de naciomiento en numnero: ";
	cin>>mes;
//Condicional switch
switch (mes){
	case 1: cout<<"Enero"; break;
	case 2: cout<<"Febrero"; break;
	case 3: cout<<"Marzo"; break;
	case 4: cout<<"Abril"; break;
	case 5: cout<<"Mayo"; break;
	case 6: cout<<"Junio"; break;
	case 7: cout<<"Julio"; break;
	case 8: cout<<"Agosto"; break;
	case 9: cout<<"Septiembre"; break;
	case 10: cout<<"Octubre"; break;
	case 11: cout<<"Noviembre"; break;
	case 12: cout<<"Diciembre"; break;
	default: cout<<"Solo existen 12 meses"; break;
}
	return 0;
}
