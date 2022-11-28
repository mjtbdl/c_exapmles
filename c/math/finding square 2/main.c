#include <stdio.h>
#include <stdlib.h>

#define pi 3.14

int main()
{
    float CemberinYariCapi;

    printf("Cemberin yaricapini giriniz \n");
    scanf("%f" ,&CemberinYariCapi);

    printf("cemberin alani %.2f cm \n", CemberinYariCapi * CemberinYariCapi * pi);

    return 0;
}

