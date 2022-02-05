/* Condicionales multiples:
la sentencia SWITCH.
	switch(expresión){
	case literal1:
	conjunto de instrucciones1;
	break;
	case literal2:
	conjunto de instrucciones2;
	break;
	case literaln:
	conjunto de instruccionesn;
	break;
	default:
	conjunto de instrucciones por defecto;
	break;
}
*/
#include <iostream>
using namespace std;
int main(){
	int numero;
	cout<<"Digite un número entre 1 y 5: ";
	cin>>numero;
	
//Condicional multiple switch
	switch(numero){
		case 1: cout<<"El numero que digito es 1"; break;
		case 2: cout<<"El numero que digito es 2"; break;
		case 3: cout<<"El numero que digito es 3"; break;
		case 4: cout<<"El numero que digito es 4"; break;
		case 5: cout<<"El numero que digito es 5"; break;
		default: cout<<"El numero digitado no esta en el rango solicitado"; break;
	}
	
	
	
	
	
	
	return 0;
}
