/*Ecuación de segundo grado del tipo:
ax2 + bx + c */5

#include<iostream>
#include<math.h>

using namespace std;

int main(){
 float a,b,c,resultado1,resultado2;
 cout<<"El valor de a: "; cin>>c;
 cout<<"El valor de b: "; cin>>b;
 cout<<"El valor de c: "; cin>>a;
 
 /*operacion de segundo grado con "-b-" */
 
 resultado1=(-b-((sqrt(pow(b,2))-(4*a*c))))/2*a;
 
 
 /*operacion de segundo grado con "-b+" */
 
 resultado2=(-b+((sqrt(pow(b,2))-(4*a*c))))/(2*a);
 
 cout<<"\nEl resultado con b es: "<<resultado1<<endl;
 cout<<"\nEl resultado con -b+ es: "<<resultado2<<endl;
 
 
 
 return 0;
 
}
