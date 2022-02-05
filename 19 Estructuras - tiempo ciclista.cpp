#include<iostream>
#include<conio.h>
using namespace std;
struct time{
	int h;
	int m;
	int s;
}et[100];
int main(){
	int n, ht=0, mt=0, st=0;
cout<<"Digite el numero de etapas: ";
cin>>n;
cout<<"\n";
	for (int i=0; i<n; i++){
//Solicitando info
		cout<<"Etapa "<<i+1<<" Horas: ";
		cin>>et[i].h;
		cout<<"Etapa "<<i+1<<" Minutos: ";
		cin>>et[i].m;
		cout<<"Etapa "<<i+1<<" Segundos: ";
		cin>>et[i].s;
//Calculando 
		ht = ht + et[i].h;
		mt = mt + et[i].m;
		if (mt >= 60){
			mt -= 60;
			ht++;
		} 
		st = st + et[i].s;
		if (st >= 60){
			st -= 60;
			mt ++;
		}
	cout<<"\n";
}
cout<<"Tiempo "<<ht<<":"<<mt<<":"<<st;
	
	getch();
	return 0;
}
