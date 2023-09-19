#include <stdio.h>
#include <stdlib.h>

/* Incremento de salario.
EL programa en funcion de la tabla 2.3.
NIV: variable de tipo entero.
SAL: variable de tipo real.*/
void main (void)
{
    float SAL;
    int NIV;
    printf("ingrese el nivel academico del profesor: ");
    scanf("%d", &NIV);
    printf("%d", &NIV);
    printf("ingrese el salrio: ");
    scanf("%f", &SAL);
    switch(NIV)
    Printf("ingrese el salario: ");
    scanf("%f", &SAL);
    switch(NIV)
    {
        case 1: SAL = SAL * 1.0035; break;
        case 2: SAL = SAL * 1.0041; break;
        case 3: SAL = SAL * 1.0048; break;
        case 4: SAL = SAL * 1.0053; break;
    }
    printf("\n\nNivel: %d \Nuevo salario: %8.2f", NIV, SAL);
}
