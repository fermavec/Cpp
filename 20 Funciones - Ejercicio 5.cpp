#include<iostream>
#include<conio.h>
using namespace std;
//prototipo
float fun(float x);
int main(){
 float n; 
 cout<<"Digite un numero con decimales: ";
 cin>>n; 
 cout<<"El fraccional es: "<<fun(n)<<endl;   
 
 getch();
 return 0;
}
float fun(float x){
 int nEntero=x; 
 return x-nEntero;
}
