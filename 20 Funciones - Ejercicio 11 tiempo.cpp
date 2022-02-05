#include<iostream>
#include<conio.h>
using namespace std;

void tiempo(int, int&, int&, int&);

int main(){
	
	int total, h, m, s;
	
	cout<<"Digite el numero total de segundos: ";
	cin>>total;
	
	tiempo(total, h, m, s);
	
	cout<<"\nEl tiempo es de "<<h<<":"<<m<<":"<<s<<endl;
	
	getch();
	return 0;
}
void tiempo(int total, int& h, int& m, int& s){
	h = total/3600;
	total = total%3600;
	m = total/60;
	s = total%60;
}
