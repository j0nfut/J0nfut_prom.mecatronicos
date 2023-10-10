#include <stdio.h>
#include <stdlib.h>

/* Busqueda binaria. */

const int MAX=100;

void lectura(int, int);
int binaria (int *, int, int);

void main (void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tama�o del arreglo� ");
        scanf("%d", &TAM);

    }
    while (TAM>MAX || TAM <1);

    Lectura(VEC, TAM);
    printf("\nIngrese el elmento a buscar: ");
    RES = binaria(VEC, TAM, ELE);

    if (RES)
        printf("\nEl elemento se encuentra en la posicion: %d", RES);
    else

            printf("\nEl elemento no se encuentra en el arreglo:");
}


                void Lectura (int A[], int T)
                {
                    int I;
                    for (I=0 ; I<T; I++)
                    {
                        printf("Ingrese el elemento %d: ", I+1);
                        scanf("%d", &A[I]);
                    }
                }
                int binaria(int A[], int T, int E)
                {
                    int ELE, IZQ = 0, CEN, DER = T-1, BAN = 0;
                    while ((IZQ <= DER ) && (!BAN))
                    {
                        CEN = (IZQ + DER)/ 2;
                        if (E == A[CEN])
                            BAN = CEN;
                        else
                            if (E > A[CEN])
                                IZQ = CEN + 1;
                            else
                                DER = CEN - 1;

                    }
                    return (BAN);
                }




