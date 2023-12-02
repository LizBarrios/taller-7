#include <stdio.h>
#include <string.h>
void ordenar(char *palabra[], int numero_de_palabras);
int main()
{
    int num_palabras = 0, i;
    char palabra[100][20];
    char *ptr[100];
    printf("INGRESA PALABRAS Y PARA ESCRIBIENDO |fin|\n");
    do
    {
        gets(palabra[num_palabras]);
        ptr[num_palabras] = palabra[num_palabras];
        num_palabras++;

    } while (strcmp(ptr[num_palabras - 1], "fin") != 0);
    printf("PALABRAS ORDENADAS\n");
    ordenar(ptr, num_palabras - 1);
    for (i = 0; i < num_palabras - 1; i++)
    {
        printf("%s\n", ptr[i]);
    }
    return 0;
}

void ordenar(char *palabra[], int numero_de_palabras)
{
    int i, j;
    char *temp;

    for (i = 0; i < numero_de_palabras - 1; i++)
    {
        for (j = i + 1; j < numero_de_palabras; j++)
        {
            if (strcmp(palabra[i], palabra[j]) > 0)
            {
                temp = palabra[i];
                palabra[i] = palabra[j];
                palabra[j] = temp;
            }
        }
    }
}