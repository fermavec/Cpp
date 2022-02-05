
#include<iostream>
#include<conio.h>
using namespace std;

int main () { 
int num[100], n;

cout<<"Digite el numero de elementos: "; 
cin>>n;
for(int i = 0; i < n; i++) { 
cout<<"Digite un numero "; 
cin>>num[i]; 
}
for(int i = n-1; i >= 0; i--) { 
cout<<"El numero "<<num[i]<<" esta en la posicion "<<i<<endl; 
} 
cout<<"\n"; 
getch(); 
return 0; 
}
