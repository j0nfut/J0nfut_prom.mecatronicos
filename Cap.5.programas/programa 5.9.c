#include <stdio.h>
#include <stdlib.h>

/* Búsqueda secuencial en arreglos desordenados. */

const int MAX = 100;

void Lectura(int, int);
int Busca(int *, int, int);

void main (void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);

    }
    while (TAM>MAX || TAM<1);
    Lectura(VEC, TAM);
    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);
    RES = Busca(VEC, TAM, ELE);

    if (RES)
        printf("\n El elemento de encuentra en la posicion %d", RES);
        else
            printf("\nEl elemento no se encuentra en el arreglo");
}
void lectura (int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}
int Busca(int A[], int T, int K)
{
    int I = 0, BAM = 0, RES;
    while (I < T && !BAN)
        if (A[I] == K)
            BAN ++;
        else
            I++;
    if (BAM)
        RES = I + 1;
    else
        RES = BAM;
    return (RES);

}
