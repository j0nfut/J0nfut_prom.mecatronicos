#include <stdio.h>
#include <stdlib.h>

/*Archivos y caracteres. el programa escribe caracteres en un archivo.*/

void main(void)
{
    char p1;
    FILE *ar;
    ar = fopen("arc.txt", "W");
    if (ar != NULL)
    {
        while ((p1=getchar())!= '\n')
            fputc(p1,ar);
        fclose (ar);
    }
    else
        printf("No se puede abrir el archivo");
}
