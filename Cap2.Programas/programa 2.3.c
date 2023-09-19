#include <stdio.h>
#include <stdlib.h>


/* Promedio de curso.
el programa, al recibir como dato el promedio de un curso universiterio,
escribe aprobado si su promedio es mayor o igual a 6, o
reprobado en caso contrario.*/
void main(void)
{
    float PRO;
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &PRO);
    if (PRO >= 6.0)
        printf("\n Aprobado");
    else
        printf("\nReprobado");
}
