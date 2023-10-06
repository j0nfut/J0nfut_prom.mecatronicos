#include <stdio.h>
#include <stdlib.h>

/* Prueba de variables globales, locales y estaticas.
El programa utiliza funciones en las que se usan
diferentes tipos de
variables. */

int f1(void);
int f2(void);
int f3(void);
int f4(void);

int K=3;
 void main (void)
 {
     int I;
     for (I = 1; I <= 3; I++)
     {
         printf("\nEl resultado de la funcion f1 es: %d\n", f1());
         printf("\nEl resultado de la funcion f2 es: %d\n", f2());
         printf("\nEl resultado de la funcion f3 es: %d\n", f3());
         printf("\nEl resultado de la funcion f4 es: %d\n", f4());
     }
 }
 int f1(void)
 /* La función f1 utiliza la variable global. */
 {
    K += K;
    return(K);
 }
 int f2(void)
 /* La función f1 utiliza la variable local. */
 {
     int K = 1;
     K++;
     return(K);
 }
 int f3 (void)
  /* La función f1 utiliza la variable estatica. */
  {
 static int K = 8;
 K+= 2;
 return (K);
  }
  int f4(void)
  /* la funcion f4 utiliza dos variables con el mismo nombre: locale
  y global.*/
  {
      int K = 5;
      K = K + K;
      return(K);
  }
