/*Escriba un programa que lea tres numeros
y determione cuál de ellos es el mayor*/

#include <iostream>
using namespace std;
int main(){

     

    float n1,n2,n3;

    

    cout<<"Escriba tres numeros: "<<endl;

    cin>>n1>>n2>>n3;

 if (n1==n3 && n2==n3){

  cout<<"los tres son iguales";

 }else if(n1>=n2 && n1>=n3){

  cout<<"el mayor es: "<<n1;

 }else if(n2>=n1 && n2>=n3){

  cout<<"el mayor es: "<<n2;

 }else{

  cout<<"El mayor es: "<<n3;

 }



return 0;

}
