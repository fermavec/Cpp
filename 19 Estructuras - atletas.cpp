#include<iostream>
#include<conio.h>
using namespace std;
struct atletas{
	char nombre[100];
	char pais[20];
	int medallas;
}atl[1000];
//Vatioable principal
int main(){
	int n=0, mayor=0, posM=0;
	
//Solicitando numero de atletas
	cout<<"Digite el numero de atletas: ";
	cin>>n;
//Solicitando la informacion de los atletas
	for(int i=0; i<n; i++){
		fflush(stdin);
		cout<<"Nombre: ";
		cin.getline(atl[i].nombre,100,'\n');
		cout<<"Pais: ";
		cin.getline(atl[i].pais,100,'\n');
		cout<<"Medallas ganadas: ";
		cin>>atl[i].medallas;
//Calculando maximo ganador
	if(atl[i].medallas > mayor){
		mayor = atl[i].medallas;
		posM = i;	
	}
	cout<<"\n";
	}
//Imprimiendo resultados
	cout<<"El mejor atleta fue: "<<endl;
	cout<<atl[posM].nombre<<" de "<<atl[posM].pais<<" con "<<atl[posM].medallas<<" medallas."<<endl;
		
	getch ();
	return 0;
}
