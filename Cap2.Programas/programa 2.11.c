#include <stdio.h>
#include <stdlib.h>

/* Billete de ferrocaril. EL programa calcula el costo de un billete de ferrocarriil teniendo en cuenta
la distancia entre las dos ciudades y el tiempo de permanencia
del pasajero.
DIS y TIE: variables de tipo entero.
BIL: variable tipo real.*/
void main(void)
{
    int DIS, TIE;
    float BIL;
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");
    scanf("%d %d", &DIS, &TIE);
    if ((DIS*2 > 500)&& (TIE > 10))
        BIL = DIS * 2 *0.19;
    printf("\n costo del billete: %7.2f", BIL);
}
