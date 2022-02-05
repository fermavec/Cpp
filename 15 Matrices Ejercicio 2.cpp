/*Programa que muestra la diagonal
principal de una matriz 3X3*/
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
 int numeros[100][100], filas, columnas;

 cout << "Digite el numero de filas: "; cin >> filas;
 cout << "Digite el numero de columnas: "; cin >> columnas;

 for (int i = 0; i < filas; i++) {
  for (int j = 0; j < columnas; j++) {
   cout << "Digite un numero [" << i << "][" << j << "]: ";
   cin >> numeros[i][j];
  }
 }
 
 cout << "\n\nMostrando diagonal principal de la matriz\n";
 for (int i = 0; i < filas; i++) {
  for (int j = 0; j < columnas; j++) {
   if (i == j) {
    cout << numeros[i][j];
   }
   else
    cout << " ";
  }
  cout << "\n";
 }
 _getch();
 return 0;
}
