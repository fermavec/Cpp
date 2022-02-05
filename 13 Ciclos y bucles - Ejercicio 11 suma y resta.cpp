
#include <iostream>

#include <stdlib.h>

using namespace std;

int main(){

 int sum=0,n,sign=1;

 cout<<"Digite el numero de elementos: ";
 cin>>n;

 for (int i=1;i<=n;i++){

  sum+=i*sign;

  sign*=-1;

  

 }

 cout<<"el resultado es: "<<sum<<endl;

 system("pause");

 return 0;

}


/*Explicacion: en cada iteracion se suman los elementos pero ademas se multiplican por sign, 
sign cambia su valor en cada iteracion porque se multiplica por (-1) esto cambia la suma por resta en cada bucle
suma=suma+ i*sign                        
suma=0+(1*1)=1                               sign=    1
suma=1+(2*-1)=-1                           -sign=  - 1
suma=-1+(3*1)=2                              sign=     1
suma=2+(4*-1)=-2 */   
