#include <stdio.h>
#include "../include/aritmetica.h"
#include "../include/area.h"

int main()
{
    //DEFINICION
    int a,b;
    //ENTRADA VALORES
    printf("\nIntroduce un numero: ");
    scanf("%d", &a);
    printf("Introduce otro numero: ");
    scanf("%d", &b);
    //RESULTADOS
    printf("\n\tLa suma de estos numeros es: %d",suma(a,b));
    printf("\n\tEl area del rectangulo formado por ambos numeros es: %d\n",rectangulo(a,b));
    //END
    return 0;
}