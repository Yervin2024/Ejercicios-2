#include<stdio.h>
#include<conio.h>

int main()
{
    float Número;
    float Resultado;

    printf("Este es un Programa que Calculará la Mitad de Cualquier Número más su Quinta Parte.\n");

    printf("Por Favor, Ingresa un Valor Numérico: ");
    scanf("%f", &Número);

    Resultado=(Número/2)+(Número/5);

    printf("El Resultado es %.2f", Resultado);

    return(0);
}