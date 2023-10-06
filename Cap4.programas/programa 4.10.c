#include <stdio.h>
#include <stdlib.h>

/* Multiplo. El programa, al recibir como datos dos numeros enteros
determina si el segundo es multiplo del primero.*/
int multiplo (int, int);

void main(void)
{
    int NU1, NU2, RES;
    printf("\nIngresar los dos numeros: ");
    scanf("%d %d", &NU1, &NU2);
    RES = multiplo(NU1, NU2);
    if (RES)
        printf("\nEl segundo es multiplo del primero");
    else
        printf("\nEl segundo numero no es multiplo del primer");

}
int multiplo(int N1, int N2)
/* Esta funcion determina si N2 es multiplo de N1. */
{
    int RES;
    if ((N2 % N1) == 0)
        RES = 1;
    else
        RES = 0;
    return (RES);
}
