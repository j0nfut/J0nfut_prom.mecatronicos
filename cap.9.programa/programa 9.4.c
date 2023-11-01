#include <stdio.h>
#include <stdlib.h>

/* Archivo y cadenas de carracteres. El programa lee cadenas
de caracteres de un archivo.*/

void main(void)
{
    char cad[50];
    FILE *ap;
    if ((ap = fopen("arc.txt", "r")) != NULL)
    {
        while (!feof(ap))
        {
            fgets(cad,50, ap);
            puts(cad);
        }
        fclose(ap);

    }
    else printf("No de puede abrir el archivo");
}
