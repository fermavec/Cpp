/*funcion de (xy) igual a la raiz
cuadrada de x sobre y al cuadrado menos 1 */
#include <iostream>
#include <math.h>

using namespace std;
int main (){
	float x, y, resultado = 0;
	
	cout<<"Digite el valor de X: "; cin>>x;
	cout<<"Digite el valor de Y: "; cin>>y;
	//sqrt es raiz cuadrada
	//pow es exponer (variable,potencia)
	//La libreria que los contiene es math.h
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"\nEl resultado es: "<<resultado<<endl;	
	
	return 0;
}
