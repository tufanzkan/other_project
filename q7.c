#include <stdio.h>
#include <math.h>

// Tufan ÖZKAN Q7 210201078

float orta_nokta_bulma_x(float x1,float x2)
{
    float a;
    a=((x1+x2)/2);
    return a;
}

float orta_nokta_bulma_y(float y1,float y2)
{
    float b;
    b=((y1+y2)/2);
    return b;
}

float oklit_uzaklik(float x1,float x2,float y1,float y2)
{
    float c;
    c=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return c;
}

int main() 
{
    float x1,x2,y1,y2;
    printf("x1 degerini giriniz: ");
    scanf("%f",&x1);
    printf("y1 degerini giriniz: ");
    scanf("%f",&y1);
    printf("x2 degerini giriniz: ");
    scanf("%f",&x2);
    printf("y2 degerini giriniz: ");
    scanf("%f",&y2);

    printf("orta noktanin degeri: (%.2f,%.2f)\n",orta_nokta_bulma_x(x1,x2),orta_nokta_bulma_y(y1,y2));
    printf("Oklit uzakligi degeri: %.2f",oklit_uzaklik(x1,x2,y1,y2));

    return 0;
}