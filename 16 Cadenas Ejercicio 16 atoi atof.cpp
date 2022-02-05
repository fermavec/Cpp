#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(){
	char c1[]="123";
	char c2[]="123.456";
	int enteroc1;
	float flotantec2;
	
	enteroc1 = atoi(c1);
	flotantec2 = atof(c2);
	
	cout<<c1<<" es igual a "<<enteroc1<<" variable entera"<<endl;
	cout<<c2<<" es igual a "<<flotantec2<<" variable flotente"<<endl;
	
	getch();
	return 0;
}
