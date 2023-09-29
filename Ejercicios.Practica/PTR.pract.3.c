#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("punteros!\n");
    int a=10;
    int b= 500;
    int *ptr=&b;

   printf("\n Ingrese numero entero: %d",a);
   printf("\nIngrese numero entero: \n");
   scanf("%d",ptr);
printf("\nValor de a: %d",b);
}
