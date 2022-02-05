/*Hacer un programa que realice la serie Fibonacci*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int n, x=0, y=1, z=1;
	
	cout<<"Digite el numero de elementos a ver de la seri Fibonacci: ";
	cin>>n;
	
	cout<<"1 ";
	
	for(int i=1; i<n; i++){
		z = x + y;
		cout<<z<<" ";
		x=y;
		y=z;
		
	}
	cout<<"\n";
	system ("pause");
	return 0;
}
