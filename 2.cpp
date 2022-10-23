// Determinar si un número es par o impar

#include <conio.h>
#include <stdio.h>

int main()
{
    int numero;

    printf( "\n   Introduzca un n%cmero entero: ", 163 );
    scanf( "%d", &numero );

    if ( numero % 2 == 0 )
        printf( "\n   ES PAR" );
    else
        printf( "\n   ES IMPAR" );

    getch(); 

    return 0;
}
