#include <stdio.h>
#include <math.h>

/* Suma cuadrados. El programa, al recibir como datos un grupo de enteros positivos, obtiene el
cuadrado de los mismos y la suma correspondiente a dichos cuadrados. */

void main(void)
{
    int NUM;
    long CUA, SUC = 0;
    printf("\n Ingrese un numero entero -0 para terminar-:\t");
    scanf("%d", &NUM);
    while (NUM)
    /*Observe que la condicion es verdadera mientras el entero
    es diferente de cero.*/
    {
        CUA = pow(NUM,2);
        printf("%d al cubo es %ld", NUM, CUA);
        SUC = SUC + CUA;
        printf("\n Ingrese un numero entero -0 para terminar -:\t");
        scanf("%d", &NUM);
    }
    printf("\n La suma de los cuaudros es %ld", SUC);
}
