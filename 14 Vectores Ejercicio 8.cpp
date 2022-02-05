
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(){
    int Pletras[5];
    int Vnumeros = 0;
    int Gletras[5];
    //Copiando los elementos de Pletras a Gletras
        for (int i = 0; i < 5; i++){
        cout << "INGRESE 5 NUMEROS" << endl;    
        cin >> Vnumeros;
        Pletras[i] = Vnumeros;
        Gletras[i] = Pletras[i]*2;
    }
    //Mostramos el total de caracteres del arreglo Gletras
    for (int i = 0; i < 5; i++){
        cout << Gletras[i] << endl;
    }
    system("pause");
    return 0;
}
