/*
#include<conio.h>
#include <stdio.h>
main ( )
{
float M, K;
      printf ("Introduce Los Kilometros A Convertir:\n");
       scanf ("%f", &K);
       M= K*0.623;
       printf ("El Total De Millas Son: = %.5f", M);
       getch ( );

}
*/


/*
#include <iostream>
 
using namespace std;
 
int main() {
  int i=1;
  float j;
  float const libras = 2.20462;
 
  cout << "Kilos" << "      ";
  cout << "Libras" << endl;
  while (i <= 20) {
    cout << i << "         ";
    j = i * libras;
    cout << j;
    i++;
    cout << endl;
  }
 
  return 0;
}
*/


#include<stdio.h>
#include<conio.h>
#define km 0.6214
#define milla 1.6093
float km_mi(float cantidad){
	return cantidad*km;
}
float mi_km(float cantidad){
	return cantidad*milla;
}
main(){
	int op;
	float cantidad;
	printf(" CONVERTIR\n  1.-Km a Millas\n  2.-Millas a Km\n   Respuesta: ");
	scanf("%d",&op);
	printf(" Introduce la cantidad de millas o km: ");
	scanf("%f",&cantidad);
	switch(op){
		case 1:
			printf(" %.2f km equivale a %.2f millas",cantidad,km_mi(cantidad));
		break;
		case 2:
			printf(" %.2f millas equivale a %.2f km",cantidad,mi_km(cantidad));
		break;
		default:
			printf(" opcion introducidad incorrecta");
	}
	getch();
	return 0;
}





