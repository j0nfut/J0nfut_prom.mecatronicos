#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main()
{
    FILE *archivo = NULL;
    char jugada[20];
    int opcion;
    float dineroApostado = 0.0;

    do
    {
        printf("Menu:\n");
        printf("1. Para Jugar\n");
        printf("2. Tirar\n");
        printf("3. historial de tiradas\n");
        printf("4. Revisar la jugada y tirada\n");
        printf("5. Cerrar la loteria \n");
        printf("6. borrar historial y salir\n");
        printf("Escoja la opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1)
        {
            if (archivo == NULL)
            {

                printf("No se puede leer el archivo.\n");
            }
            else
            {
                printf("Opcion no valida");
            }
        }
        else if (opcion == 2)
        {
            srand((unsigned int)time(NULL));
            int numeros[3];
            for (int i = 0; i < 3; i++)
            {
                numeros[i] = rand() % 20 + 1;
            }

            time_t tiempoActual;
            struct tm *infoTiempo;

            time(&tiempoActual);
            infoTiempo = localtime(&tiempoActual);

            printf("Fecha y hora actual: %04d-%02d-%02d %02d:%02d:%02d\n",
                   infoTiempo->tm_year + 1900, infoTiempo->tm_mon + 1, infoTiempo->tm_mday,
                   infoTiempo->tm_hour, infoTiempo->tm_min, infoTiempo->tm_sec);

            printf("Numeros generados: %d, %d, %d\n", numeros[0], numeros[1], numeros[2]);

            archivo = fopen("numeros_y_fecha.txt", "a");

            if (archivo == NULL)
            {
                fprintf(stderr, "Error al abrir el archivo.\n");
                return 1;
            }

            fprintf(archivo, "Fecha y hora actual: %04d-%02d-%02d %02d:%02d:%02d\n",
                    infoTiempo->tm_year + 1900, infoTiempo->tm_mon + 1, infoTiempo->tm_mday,
                    infoTiempo->tm_hour, infoTiempo->tm_min, infoTiempo->tm_sec);

            fprintf(archivo, "Numeros generados: %d, %d, %d\n", numeros[0], numeros[1], numeros[2]);

            fclose(archivo);
        }
        else if (opcion == 3)
        {
            archivo = fopen("numeros_y_fecha.txt", "r");

            if (archivo == NULL)
            {
                fprintf(stderr, "Error al abrir el archivo.\n");
                return 1;
            }

            printf("Historial de tiradas:\n");
            int c;
            int newLineCount = 0;

            while ((c = fgetc(archivo)) != EOF)
            {
                putchar(c);

                if (c == '\n')
                {
                    newLineCount++;
                    if (newLineCount % 2 == 0)
                    {
                        // Imprimir una línea de separación después de cada segunda línea (después de cada tirada)
                        printf("----------------------------------------\n");
                    }
                }
            }

            fclose(archivo);
        }


        else if (opcion == 4)
        {


            printf("Opcion no valida");
        }
        else if (opcion == 5)
        {
            // Cerrar la loteria, borrar historial y salir
            printf("Cerrando la loteria, borrando historial y saliendo.\n");

            archivo = fopen("numeros_y_fecha.txt", "w");
            if (archivo == NULL)
            {
                fprintf(stderr, "Error al abrir el archivo para eliminar el historial.\n");
                return 1;
            }
            fclose(archivo);
        }
        else
        {
            printf("Opcion no válida. Por favor, selecciona una opcion valida.\n");
        }
    }
    while (opcion != 4 && opcion != 5);

    return 0;
}
