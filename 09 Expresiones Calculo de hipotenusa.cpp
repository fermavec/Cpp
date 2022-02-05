/* Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo
y de como resultado de salida su hipotenusa */

 /*
 sqrt = RAIZ CUADRADA DE DICHA VARIABLE
 pow = ELEVAR UNA VARIABLE. Se divide en dos partes, 
 primero la variable que queremos elevar, (coma), hacia que exponente queremos elevarlo
 */
 
#include<iostream>/* Entradas y salidas COUT y CIN */
#include<math.h>/* Libreria Matematica y trigonometrica C++ */

using namespace std;

int main(){
 
 float a,b,c,h;
 
 cout<<"Digite el cateto A: "; cin>>a;
 cout<<"Digite el cateto B: "; cin>>b;

 c = (pow(a,2)) + (pow(b,2));
 h = sqrt(c);
 
 cout<<"\nLa Hipotenusa es: "<<h<<endl;
 
 return 0;

}
