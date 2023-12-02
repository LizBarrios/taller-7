#include <stdio.h>
#include <string.h>

void imprimirNombre(char *ptr[], int num);
int main()
{
    int num_palabras = 0;
    char palabra[100][20];
    char *ptr[100];
    printf("INGRESA PALABRAS Y PARA ESCRIBIENDO |fin|\n");
    do
    {
        gets(palabra[num_palabras]);
        ptr[num_palabras] = palabra[num_palabras];
        num_palabras++;

    } while (strcmp(ptr[num_palabras - 1], "fin") != 0);
    imprimirNombre(ptr, num_palabras-1);
}

void imprimirNombre(char *ptr[], int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        printf("AREGLO %d == %s\n", i + 1, ptr[i]);
    }
}