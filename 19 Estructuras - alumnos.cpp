#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
	struct alumno {
 char nombre[10];
 int edad;
 double promedio;  
}alum[0];

int main ()
{
int n=0;
int mayor=0;

cout<<"Digite el número de alumnos :";cin>>n; 
alum[n];

for (int i=1;i<=n;i++)
    {
     fflush(stdin); 
     cout<<"Digite el nombre del alumno "<<i<<" :"; cin.getline (alum[i].nombre,10,'\n');
     cout<<"Digite la edad :"; cin>>alum[i].edad;
     cout<<"Digite el promedio :"; cin>>alum[i].promedio;   
    }
 
for (int i=1;i<=n;i++) 
      {
          for (int j=1;j<=n;j++) 
                 {
                   if(alum[i].promedio >= alum[j].promedio ){ mayor++; if (mayor==n) 
                      {cout<<" Mayor promedio : "<<alum[i].nombre<<endl;    
                cout<<" Edad : "<<alum[i].edad<<endl;  
         cout<<" Promedio : "<<alum[i].promedio<<endl;
         } 
                                                                 }
          }
       }
 
	getch ();
	return 0;
}
