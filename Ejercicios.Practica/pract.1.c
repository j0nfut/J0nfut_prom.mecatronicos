#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero = 0;
    float flotante = 0.0;
    double decimal = 0.0;
    char letra ='a';
    long int lentero = 0;

    printf("\n menoria ocupada en byte de entero %i", sizeof(entero));
    printf("\n menoria ocupada en byte de flotante %i", sizeof(flotante));
    printf("\n  menoria ocupada en byte de double %i", sizeof(decimal));
    printf("\n  de menoria ocupada en byte de caracter %i", sizeof(letra));
    printf("\n  de menoria ocupada en byte de long %i", sizeof(lentero));
    printf ("\ndireccion de memoria de decimal %p", &decimal );
    return 0;
}
