#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n,factorial=1, sumaF=0;
    cout<<"ingrese numero: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        factorial=factorial*i;
        sumaF=sumaF+factorial;

    }
    cout<<"La suma de factorial es: "<<sumaF<<endl;
    return 0;
    getch();
}
