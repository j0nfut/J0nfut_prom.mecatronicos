#include <stdio.h>
#include <stdlib.h>

/* Archivos y cadenas de caracteres. EL programa escribe
 cadenas de caracteres en un archivo.*/

 void main(void)
 {
     char cad[50];
     int res;
     FILE *ar;
     if ((ar = fopen("arc.txt", "W")) != NULL)
     {
         printf("\nDesea ingresar una cadena de caracteres? Si-1 No-0:");
         scanf("%d", &res);
         while(res)
         {
             fflush(stdin);
             printf("infrese la cadena: ");
             gets(cad);
             fputs(cad, ar);

             printf("\n Desea ingresar otra cadena de caracteres? Si-1 No-0:");
             if (res)
                fputs("\n", ar);

         }
         fclose(ar);

     }
     else
        printf("No se puede abrir el archivo");

 }
