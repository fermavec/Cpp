#include <iostream>
#include <conio.h>

using namespace std;

void cambio(int dolares, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno);

int main(){
 int dolares=0;
 int cien=0;
 int cincuenta=0;
 int veinte=0;
 int diez=0;
 int cinco=0;
 int uno=0;
 
 cout << "Ingrese cantidad de dolares: ";
 cin >> dolares;
 
 cambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);
 
 getch();
 return 0;
}

void cambio(int dolares, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno){
 if(dolares >= 100){
  cien = dolares / 100;
  dolares = dolares % 100;
 }
 if(dolares >= 50){
  cincuenta = dolares / 50;
  dolares = dolares % 50;
 }
 if(dolares >= 20){
  veinte = dolares / 20;
  dolares = dolares % 20;
 }
 if(dolares >= 10){
  diez = dolares / 10;
  dolares = dolares % 10;
 }
 if(dolares >= 5){
  cinco = dolares / 5;
  dolares = dolares % 5;
 }
 if(dolares >= 1){
  uno = dolares;
 }
 
 cout << "\nEl cambio es de: \n" << endl;
 cout << cien << " billetes de $100" << endl;
 cout << cincuenta << " billetes de $50" << endl;
 cout << veinte << " billetes de $20" << endl;
 cout << diez << " billetes de $10" << endl;
 cout << cinco << " billetes de $5" << endl;
 cout << uno << " billetes de $1" << endl;
 
}
