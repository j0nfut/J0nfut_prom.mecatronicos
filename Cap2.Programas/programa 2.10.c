#include <stdio.h>
#include <stdlib.h>

/* Par, impar o nulo. Num: variable de tipo entero. */
void main(void)
{


int NUM;
printf("Ingrese el numero: ");
scanf("%d", &NUM);
if (NUM == 0)
    printf("\n Nulo");
else
    if (pow(-1, NUM)> 0)
        printf("\n Par");
    else
        printf("\nImpar");

}
