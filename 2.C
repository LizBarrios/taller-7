#include <stdio.h>

int main()
{
    int i;
    char nom[3][20];
    char *ptr[3];
    for (i = 0; i < 3; i++)
    {
        printf("PALABRA %d\n", i + 1);
        gets(nom[i]);
        ptr[i] = nom[i];
    }
    for (i = 0; i < 3; i++)
    {
        printf("\nAREGLO %d == %s\n", i + 1, ptr[i]);
    }
}