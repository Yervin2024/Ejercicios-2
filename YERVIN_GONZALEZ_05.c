#include<stdio.h>
#include<conio.h>

int main()
{
    float Num1, Num2;
    float Resta;

    printf("Este es un Programa que Calculará el Cuadrado de la Resta de 2 Números.\n");

    printf("Por Favor, Ingresa un Valor Numérico: ");
    scanf("%f", &Num1);
    
    printf("Por Favor, Ingrese otro Valor Numérico: ");
    scanf("%f", &Num2);
    
    Resta=(Num1-Num2)*(Num1-Num2);

    printf("El Resultado del Cuadrado de la Resta es %.2f", Resta);

    return(0);
}