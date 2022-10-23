
//  Todas las tablas de multiplicar del 1 al 10
#include <iostream>
using namespace std;
main(){

int inicio=0,fin=0,res=0;
cout <<"Ingrese tabla inicial: ";
cin>>inicio;
cout <<"Ingrese tabla final: ";
cin>>fin;
for (int rango=inicio; rango<=fin;rango++){
cout<<"tabla del: "<<rango<<endl;
for (int i=1;i<=10;i++){
res =rango * i;
  cout<<rango<<" X "<< i <<" = "<<res<<endl;
}
cout<<endl;
}
   
   
    int i = 5;
while(i<5){
cout<<"while: "<<i<<endl;
i++;
}
char respuesta= 's';
while(respuesta=='s' || respuesta=='S' ){
cout<<"desea ingresar otro valor (s/n) ";
cin>>respuesta;
} 
   
system("pause");
}



