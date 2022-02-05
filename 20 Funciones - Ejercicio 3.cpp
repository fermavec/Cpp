#include<iostream>
#include<conio.h>
#include<math.h> //para segunda version
using namespace std;
//Prototipo de funcion
void pedirdatos();
void mult(float x);
float num1;
//Segunda version
void PedirCuadrado();
void al_cuadrado (float x);
float n;

int main (){
	
	pedirdatos();
	mult(num1);	
	PedirCuadrado();
    al_cuadrado(n);
	
	getch ();
	return 0;
}
//Definiendo funcion
void pedirdatos(){
	cout<<"Ingrese un numero: ";
	cin>>num1;
}
void mult(float x){
	float multiplicacion = x * x;
	cout<<"El cuadrado es: "<<multiplicacion<<endl;
}
void PedirCuadrado(){
    cout << "Digite un numero : ";
    cin >> n;
}
void al_cuadrado (float x){
    float cuadrado = pow(x,2);
    cout << "El cuadrado de ese numero es : "<< cuadrado << endl;
}
