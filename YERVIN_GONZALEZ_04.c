#include<stdio.h>
#include<conio.h>

int main()
{
    float Num1, Num2;
    float Suma;

    printf("Este es un Programa que Calculará el Cuadrado de la Suma de 2 Números.\n");

    printf("Por Favor, Ingresa un Valor Numérico: ");
    scanf("%f", &Num1);
    
    printf("Por Favor, Ingrese otro Valor Numérico: ");
    scanf("%f", &Num2);
    
    Suma=(Num1+Num2)*(Num1+Num2);

    printf("El Resultado del Cuadrado de la Suma es %.2f", Suma);

    return(0);
}