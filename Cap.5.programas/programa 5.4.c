#include <stdio.h>
#include <stdlib.h>

/* Producto de vectores.
el programa calcula
el producto de dos vectores y almacena el resultado
en otro arreglo unidimensional. */
const int MAX = 10
void lectura (int VEC[], int T);
void Imprime (int VEC[], int T);
void Producto(int *X, int *Y, int *z, int T);
void main(void)
{
    int VE1[MAX], VE2[MAX], VE3[MAX];
    lectura(VE1, MAX);
    lectura(VE2, MAX);
    Producto(VE1, VE2, VE3, MAX);
    printf("\nProducto de los vectores");
    Imprime(VE3, MAX);
}
void Lectura(int VEC[], int T)
{
    int I;
    printf("\n");
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &VEC[1]);
    }
}
void Imprime(int VEC[], int T)
int I;
{
    for (I=0; I<T; I++)
        printf("\nVEC[%d]: %d", I+1, VEC[I]);
}
void Producto(int *X, int *Y, int *Z, int T)
{
    int I;
    for (I=0; I<T; I++);
}
