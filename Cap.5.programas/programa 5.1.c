#include <stdio.h>
#include <stdlib.h>
#define cat 10
/* Cuenta numeros.
EL programa, al recibir como datos un arreglo unidimensional de tipo
entero y  un numero entero, determina cuantas veces se encuentra el
numero en el arreglo.*/
void main(void)

{
    int I, NUM, CUE = 0;
    int ARRE[cat];
     int sum = 0;
    for (I = 0; I<cat; I++)


    for (I = 0; I<cat; I++)
    {
        printf("\n\nIngrese el elemento %d del arreglo: ", I+1);
        scanf("%d", &ARRE[I]);
        sum += ARRE[1];
    }
            printf("Ingrese el numero que se va a buscar en el arreglo: ");
            scanf("%d", &NUM);

    for (I= 0; I<cat; I++)
    {


            if (ARRE[1] == NUM)
                CUE++;


            }

             printf("\n\n El %d se encuentra %d veces en el arreglo", NUM, CUE);
            if (cat>0)
            {
                float promedio = (float)sum/cat;
                printf("EL promedio de los elementos en el arreglo es %.2f\n", promedio);


            }


        }


