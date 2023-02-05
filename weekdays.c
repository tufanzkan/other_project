#include <stdio.h>

int main()
{
   int gun;
   printf("lutfen haftadaki gun numarasi giriniz: ");
   scanf("%d",&gun);
   switch (gun)
   {
     case 1: printf("haftanin birinci gunu: PZT");
     break;
     case 2: printf("haftanin ikinci gunu: SALI");
     break;
     case 3: printf("haftanin ücüncü gunu: ÇRŞ");
     break;
     case 4: printf("haftanin dördüncü gunu: PRŞ");
     break;
     case 5: printf("haftanin besinci gunu: CUMA");
     break;
     case 6: printf("haftanin altinci gunu: CMT");
     break;
     case 7: printf("haftanin yedinci gunu: PAZR");
     break;
     default: printf("bir haftada 7 gun vardir");
   }

    return 0;
}
