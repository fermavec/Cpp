//escroba origrama que regrese kis factiruakes de un numero
#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
	int n, factorial = 1;
	cout<<"Digite el numero del cual quiere conocer su factorial: ";
	cin>>n;
	
	for(int i = 1; i <= n; i++){
	factorial = factorial * i;	
	}	
	cout<<"\nEl resultaddo es: "<<factorial<<endl;
	
	system("pause");
	return 0;
}

