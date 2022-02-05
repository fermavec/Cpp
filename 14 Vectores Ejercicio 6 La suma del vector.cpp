#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){

 int num[100], n, suma=0, a=0;

 cout<<"Ingrese la cantidad de numeros que tendra el arreglo: "; cin>>n;

 

 for(int i=0; i<n; i++){

  cout<<"n"<<i+1<<" : "; cin>>num[i];

  suma+=num[i];

 }

 for(int i=0; i<n; i++){

  

  if(num[i] == suma-num[i]){

   

   cout<<"El numero "<<num[i]<<" es igual a la suma de los demas."<<endl;

   

   a=1;

    

      }

    }

    if (a==0){

     cout<<"Al sumar los numeros, no coincide con ninguno";

 }    

 

 system("pause");

 return 0;

} 
