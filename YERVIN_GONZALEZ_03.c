#include<stdio.h>
#include<conio.h>

int main()
{
    float x, y, z;
    float Res;

    printf("Este es un Programa que te Permitirá Hallar la Suma de los Cuadrados de 2 Números, más la Suma del Cubo de un Tercer Número.\n");

    printf("Ingrese un Valor para el Primer Número que se Elevará al Cuadrado: ");
    scanf("%f", &x);
    
    printf("Ingrese un Valor para el Segundo Número que También se Elevará al Cuadrado: ");
    scanf("%f", &y);
    
    printf("Por Último, Ingrese un Valor para el Tercer Número que será Elevado al Cubo: ");
    scanf("%f", &z);

    Res=(x*x)+(y*y)+(z*z*z);

    printf("El Resultado de la Operación es %.2f", Res);

    return(0);
}