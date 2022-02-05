//medicion de temperaturas
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int menor=9999,mayor=-9999;
 float tempe,suma=0,cuatro;
 
 for(int hora=0;hora<=24;hora++){
     cout<<"la hora es  "<<hora<<":00"<<endl;
     switch(hora){
         case 4:cuatro=hora; break;
         case 8:cuatro=hora; break;
         case 12:cuatro=hora; break;
         case 16:cuatro=hora; break;
         case 20:cuatro=hora; break;
         case 24:cuatro=hora; break;
     }
     if((cuatro/hora)==1){  cout<<"introducir temperatura: "<<endl; cin>>tempe;
         suma+=tempe;
                  if(tempe>mayor){
                     mayor =tempe;}                      
                    
                    if(tempe<menor){
                        menor=tempe;
                                    }
                            }
      }
 cout<<"La temperatura media es: "<<suma/6<<" grados"<<endl;
 cout<<"La temperatura menor es:  "<<menor<<" grados"<<endl;
 cout<<"La temperatura mayor es:  "<<mayor<<" grados"<<endl;
 cout<<menor;
 getch();
 return 0;
}
