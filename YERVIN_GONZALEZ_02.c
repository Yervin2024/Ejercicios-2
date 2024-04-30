#include<stdio.h>
#include<conio.h>

int main()
{
    float Num;
    float Res;

    printf("Este es un Programa que te Permitirá Calcular el Cuadrado de Cualquier Número Disminuido en 25 Unidades.\n");

    printf("Introduzca un Valor Numérico: ");
    scanf("%f", &Num);

    Res=(Num-25)*(Num-25);

    printf("El Resultado de esa Operación es %.2f", Res);

    return(0);
}