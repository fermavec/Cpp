/*7ise�e un programa que arroje la suma de 1+2+3+4...2n-1*/
//8. Escriba un programa que calcule el valor de: 1+3+5+7+9+11+13+....+2n-1

/* donde 2n-1 es a donde queremos llegar en #de terminos
tercer termino: 2(3)-1=5
4to termino: 2(4)-1=7
5to termino: 2(5)-1=9     */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
 int n,suma=0;

 cout<<"Digite la cantidad de elementos que desea sumar: ";
 cin>>n;

 for(int i=1;i<=2*n-1;i+=2){ /*1 porque es suma; 2n-1 por formula manda a la posici�n donde queramos
    llegar por ejemplo posicion 6 esta el valor 11: 2(6)-1=11 que conduce al limite del ciclo; por ultimo recorremos de 2 en 2
    a partir de 1 hasta donde nos marca el limite (de la f�rmula) y lo guardamos en una variable*/              
  suma += i;
 }

 cout<<"La suma es: "<<suma<<endl;
//Resumen, se va a sumar de 2 en 2 a partir de 1 delimitando el ciclo por la formula cuantos numeros se van a sumar
 system("pause");
 return 0;
}
