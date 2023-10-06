#include <stdio.h>
#include <stdlib.h>

/* Prototipo de función. */
void parimp(int, int *, int *);

int main(void)
{
    int I, N, NUM, PAR = 0, IMP = 0;
    printf("Ingresa el numero de datos: ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
        printf("Ingresa el numero %d:", I);
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP);
        /* Llamada a la funcion. Paso de parametros por valor y por
➥ referencia. */
}
printf("\nNúmero de pares: %d", PAR);
printf("\nNúmero de impares: %d", IMP);
}
void parimp(int NUM, int *P, int *I)
/* La funcion incrementa el parametro *P o *I, según sea el numero par
➥ o impar. */
{
int RES;
RES = pow(-1, NUM);
if (RES > 0)
*P += 1;
else
if (RES < 0)
*I += 1;
}
