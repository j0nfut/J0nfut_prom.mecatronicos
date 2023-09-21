#include <stdio.h>
#include <stdlib.h>

/* Suma pagos.
El programa, al recibir como datos un conjunto
de pagos realizados en el ultimomes, obtiene la suma de los mismos.
PAG y SPA: variables de tipo real. */
void main(void)
{
    float PAG, SPA;
    SPA = 0;
    printf("Ingrese el primer pago: \t");
    scanf("%f", &PAG);
    while (PAG)
    /* Pbserva que la condicon es verdadera mientras el pago es diferente a cero.*/
    {
        SPA = SPA + SPA;
        printf("ingrese el siguiente pago:\t");
        scanf("%f", &PAG);
        /*Observa que la propocicion que modifica la condicion es una lectura.*/

    }
    printf("\n EL total de pagos del mes es: %.2f", SPA);
}
