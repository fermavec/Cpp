//Numeros coincidentes
#include<iostream>
using namespace std;
int main(){
 
 int a, b, c, d;
 cout<<"digite 3 numeros: ";cin>>a>>b>>c;
 cout<<"digite otro numero: ";cin>>d;
 if((d!=a)&&(d!=b)&&(d!=c)){
  cout<<"el cuarto numero no coincide con ninguno de los 3";
 }
 else{
  cout<<"hay minimo una coincidencia entre los numeros";
 }
 return 0;
}
