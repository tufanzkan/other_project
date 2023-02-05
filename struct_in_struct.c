#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct
{
    float x,y;
}nokta;

typedef struct
{
    float yaricap;
    nokta merkez;
}daire;

int main()
{
    daire daire;

    printf("daire merkez koordinatlarini giriniz(x-y): ");
    scanf("%f %f",&daire.merkez.x,&daire.merkez.y);

    daire.yaricap=sqrt((daire.merkez.x*daire.merkez.x)+(daire.merkez.y*daire.merkez.y));
    printf("daire yaricapi: %f",daire.yaricap); 
    
    return 0;
}