	#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "3.cpp"
#include "4.cpp"
#include "5.cpp"
#include "6.cpp"
#include "11.cpp"


#define TRUE 1
#define FALSE 0

using namespace std;

using namespace std;


int opcion;
float primero=1;
float segundo=1;
float resultado;

int main(){
    int opcion;
    char repetir = TRUE;
    
    do {
        system("cls");
        
        // Texto del menú
        printf("\n\n\t\t\tMenu de Opciones\n");
        printf("\t\t\t----------------\n");
        printf("\n\t1. Suma, Resta, Multiplicacion y Division de dos numeros \n");
        printf("\t2. Determinar si un numero es par o impar \n");
        printf("\t3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa \n");
        printf("\t4. Determinar si una palabra o un numero es palindromo \n");
        printf("\t5.Conversion de numeros arabigos a romanos \n");
        printf("\t6. Conversion de numeros enteros a letras \n");
        printf("\t7. Conversion de numeros enteros con decimal a letras \n");
        printf("\t8. Una tabla de multiplicar \n");
        printf("\t9. Todas las tablas de multiplicar del 1 al 10 \n");
        printf("\t10. Conversion de numeros decimales a binario \n");
        printf("\t11. Conversion de numeros decimales a hexadecimales \n");
        printf("\t12. Crear Figuras Geometricas Basicas. \n");
        printf("\t13. Mover un punto en toda la pantalla \n");
        printf("\t14. Simular un Cajero Automatico \n");
        printf("\t15. Calcular la hipotenusa\n");
        printf("\t0. SALIR\n");
        
        printf("\n\tIngrese una opcion: ");
        scanf("%d", &opcion);
        
        int numero1, numero2;
		float resultado;
        switch (opcion) {
            case 1:
				cout << "Que operacion desea realizar Suma [1] Resta [2] Multiplicacion [3] Division [4]." <<endl;
				cin >> opcion;
				cout << "Ingrese un numero: ";
				cin >> primero;
				cout << "Ingrese un numero: ";
				cin >> segundo;
				
				if (opcion==1){
				    resultado = primero+segundo;
				}
				
				if (opcion==2){
				    resultado = primero-segundo;
				}
				
				if (opcion==3){
				    resultado = primero*segundo;
				}
				
				if (opcion==4){
				    resultado = primero/segundo;
				}
				
				cout << resultado;
				cin.ignore();
				cin.get();      
                
				system("pause>nul");
                break;
            
            case 2:
            	
            	int numero;

			    printf( "\n   Introduzca un n%cmero entero: ", 163 );
			    scanf( "%d", &numero );
			
			    if ( numero % 2 == 0 )
			        printf( "\n   ES PAR" );
			    else
			        printf( "\n   ES IMPAR" );
			
			    getch();
            	
            	system("pause>nul");
                break;
            
			case 3:	
			
				tres();
				
				system("pause>nul");
                break;
                
			case 4:	
			
				cuatro();
				
				system("pause>nul");
                break;
                
			case 5:	
			
				cinco();
				
				system("pause>nul");
                break;                
                
			case 6:	
			
				seis();
				
				system("pause>nul");
                break;                 
        
        
        	case 7:
			
				int x;
			    cout<<"ingrese un numero: ";
			    cin>>x;
			    
			    
			if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
			else
			 
			    {
			        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
			       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
			       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
			       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
			       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
			       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
			       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
			       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
			       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
			       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
			        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
			            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
			            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
			            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
			            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
			            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
			            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
			            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
			            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
			            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
			            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
			            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
			            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
			            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
			            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
			            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
			        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
			       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
			       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
			       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
			       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
			       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
			       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
			        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
			        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
			        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
			            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
			       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
			       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
			       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
			       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
			       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
			       }
			    cout<<endl;
				cin.ignore();return 0;
							
							
				system("pause>nul");
				break;	      
            
            
            
            case 10:
            	
            	diez();

  	          	system("pause>nul");
                break; 
                
                
            case 11:

			
			    
            case 12:
            	    int op;
			    for(;;){
			    cout<<"ingrese la opcion: \n";
			    cout<<"1.trigulo \n";
			    cout<<"2.cuadrado \n";
			    cout<<"3.rectangulo \n";cin>>op;
			    switch(op){
			        case 1:{
			            cout<<"      / \\ \n";
			            cout<<"     /   \\ \n";
			            cout<<"    /     \\ \n";
			            cout<<"   /       \\ \n"   ;
			            cout<<"  /_________\\ \n\n";
			            break;
			        }
			        case 2:{
			            cout<<"* * * * * * \n";
			            cout<<"*         * \n";
			            cout<<"*         * \n";
			            cout<<"*         * \n";
			            cout<<"*         * \n";
			            cout<<"* * * * * * \n\n";           
			            break;
			        }
			        case 3:{
			            cout<<"* * * * * * * * \n";
			            cout<<"*             * \n";
			            cout<<"*             * \n";
			            cout<<"*             * \n";
			            cout<<"* * * * * * * * \n\n";
			            break;
			        }
			    }
			    }
                
                
                
                
                
            
            case 0:
            	repetir = FALSE;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}

