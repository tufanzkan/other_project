#include <stdio.h>

int main()
{
   int pi=3.14;
   float r;
   printf("dairenin yaricapini giriniz: ");
   scanf("%f",&r);

   float cevre=2*pi*r;
   float alan=pi*r*r;

   printf("cevre=%f \n",cevre);
   printf("alan=%f \n",alan);

   if (alan>cevre)
        printf("alan buyuk");
   if (alan<cevre)
        printf("cevre buyuk");
   if (alan==cevre)
        printf("birbirine esit");

    return 0;
}
