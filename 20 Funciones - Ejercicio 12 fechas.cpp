#include<iostream>

#include<conio.h>



using namespace std;



void calc_anos(int,int&,int&,int&);



int main(){

 

 int dias;

 int ano;

 int mes;

 int dia;

 

 cout<<"Escriba el numero de dias despues de 01/01/2000: ";

 cin>>dias;

 

 cout<<"\n";

 

 cout<<"Hoy es el dia: ";

 

 calc_anos(dias,ano,mes,dia);

 

 cout<<(dia + 1)<<" de ";

 

 switch(mes){

  case 1: cout<<"Enero"; break;

  case 2: cout<<"Febrero"; break;

  case 3: cout<<"Marzo"; break;

  case 4: cout<<"Abril"; break;

  case 5: cout<<"Mayo"; break;

  case 6: cout<<"Junio"; break;

  case 7: cout<<"Julio"; break;

  case 8: cout<<"Agosto"; break;

  case 9: cout<<"Septiembre"; break;

  case 10: cout<<"Octubre"; break;

  case 11: cout<<"Novemibre"; break;

  case 12: cout<<"Diciembre"; break;

 }

 

 cout<<" de "<<(ano + 2000);

 

getch();

return 0;

}



void calc_anos(int dias,int& ano,int& mes,int& dia){

 

 ano = dias / 365; //Esto me da cuanto años son 

 dias = dias - (ano * 365);

 

 mes = dias / 30; // esto me da cuantos meses son

 dias = dias - (mes * 30);

 

 dia = dias / 1;

 dia = dias - (dia * 1);

}
