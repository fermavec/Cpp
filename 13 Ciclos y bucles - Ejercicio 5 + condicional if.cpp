/*El programa debe entregarte la suma de todos los valores maypres a cero
introducidos y debe árar en el rango de los 25-30 o al 0*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
	int numero, suma = 0;
	do{
		cout<<"Digite un numero: "; cin>>numero;
		if(numero>0){
			suma += numero;
		}
		
	}while(((numero<20) || (numero>30)) && (numero!=0));
	
	cout<<"\nLa suma es: "<<suma<<endl; 
	
	system("pause");
	return 0;
}
