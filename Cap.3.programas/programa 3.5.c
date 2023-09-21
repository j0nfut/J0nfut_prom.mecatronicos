#include <stdio.h>
#include <stdlib.h>

/* Suma pagos.El programa obtiene la suma de los pagos
 realizados el ultimo mes.
PAG y SPA: variables de tipo real.*/
void main(void)
{
    float PAG, SPA = 0;
    printf("%f", &PAG);
    scanf("%f", &PAG);
    /*observa que al utilizar la estructura do-while al menos se necesita un apago.*/
    do
    {
        SPA = SPA + PAG;
        printf("ingrese el siguiente pago -0 para terminar -:\t ");
        scanf("%t", &PAG);
    }
    while (PAG);
    printf("\nEL total de pagos del mes es: %.2f", SPA);
}
