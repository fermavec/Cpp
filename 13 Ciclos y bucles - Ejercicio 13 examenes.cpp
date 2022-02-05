#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
 int examen3,examen2,examen1;
 int todos = 0,uno = 0,ultimo = 0;

  for(int i=1;i<=5;i++){
   	cout << "\n *Alumno " << i << endl;
	
	cout<<"Digite el examen 1 del alumno";
	cin>>examen1;

	cout<<"Digite el examen 2 del alumno";
	cin>>examen2;

	cout<<"Digite el examen 3 del alumno";
	cin>>examen3;

if ((examen1>=6)&&(examen2>=6)&&(examen3>=6)){

	todos++;

  }

  if ((examen1>=6)||(examen2>=6)||(examen3>=6)){

            uno++;

  }

  if ((examen1<=6)&&(examen2<=6)&&(examen3>=6)){

   ultimo++;

  }

}
cout<<"Alumnos que aprobaron todos los examenes: "<<todos<<endl;
cout<<"Alumnos que aprobaron al menos un examen: "<<uno<<endl;
cout<<"Alumnos que aprobaron unicamente el ultimo examen: "<<ultimo<<endl<<endl;

 getch();
 return 0;

}
