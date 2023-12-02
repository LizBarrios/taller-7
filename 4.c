#include <stdio.h>
#include <string.h>
void inv(char *cadena);
int main()
{
    char cadena[10] = {"DANIEL"};
    printf("%s\n", cadena);
    inv(cadena);
    printf("%s ", cadena);
}
void inv(char *cadena)
{
    int size = strlen(cadena);
    int i, n = 0;
    char temp;
    for (i = size - 1; i >= n; i--)
    {
        temp = cadena[i];
        cadena[i] = cadena[n];
        cadena[n] = temp;
        n++;
    }
}