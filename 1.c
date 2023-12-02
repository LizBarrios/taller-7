#include <stdio.h>

int main()
{
    int i;
    char nom[]="LIZETH";
    char nom2[]="BARRIOS";
    char nom3[]="RETANA";
    char *ptr[3];
    ptr[0]=nom;
    ptr[1]=nom2;
    ptr[2]=nom3;
    for(i=0;i<3;i++)
    {
        printf("AREGLO %d == %s\n",i+1,ptr[i]);
    }
}