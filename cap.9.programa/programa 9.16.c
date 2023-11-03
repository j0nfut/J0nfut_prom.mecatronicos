#include <stdio.h>
#include <stdlib.h>

/* Suma reales. EL programa lee cadenas de carracteres de un archivo, detecta aquellas que comienza con
numeros los suma y calcula el promedio de los mismos.*/

#include <stdio.h>
#include <stdlib.h>

void sumypro(FILE *);

void main(void) {
    FILE *ap;
    if ((ap = fopen("arc2.txt", "r")) != NULL) {
        sumypro(ap);
        fclose(ap);
    } else {
        printf("No se puede abrir el archivo");
    }
}

void sumypro(FILE *ap1) {
    char cad[30];
    int i = 0;
    float sum = 0.0, r;

    while (!feof(ap1)) {
        fgets(cad, 30, ap1);
        r = atof(cad);

        if (r) {
            i++;
            sum += r;
        }
    }

    printf("\nSuma: %.2f", sum);

    if (i) {
        printf("\nPromedio: %.2f", sum / i);
    }
}
