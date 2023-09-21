#include <stdio.h>
#include <stdlib.h>

/* Nomina de profesores. El programa, al recibir
 como datos los salarios de los profesores de una
universidad, obtiene la nomina y el promedio de los salarios.
I: variable de tipo entero.
SAL, NOM y PRO: variables de tipo real. */
void main(void)
{
    int I = 0;
    float SAL, PRO, NON = 0;
    printf("ingrese el salario del profesor:\t");
    /*Observa que al menos se necesita ingresar el salario de un
    profesor para que no ocurra un error de ejecucion del programa.*/
    scanf("%f", &SAL);
    do
    {
        NON = NON + SAL;
        I = I + 1;
        printf("ingrese el salario del profesor -0 para terminar -:\t");
        scanf("%f", &SAL);
    }


            while (SAL);
            PRO = NON/ I;
            printf("\n Nomina: %.2f \t PRomedio de salarios: %.2", NON, PRO);



}
