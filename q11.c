#include<stdio.h>
#include<stdlib.h>

// Tufan Özkan 210201078 Q3

void gun_cevir(int giris, int *yil, int *ay, int *hafta, int *gun)
{
    int y,a,h,g,t;
        
    if((giris/365)%4==0 && (giris/365)%100!=0 || (giris/365)%400==0)
    {
        t=366;
    }
    else
    {
        t=365;
    }

    y = giris/t;
    a = (giris-(365*y))/30;
    h = (giris-(365*y)-(30*a))/7;
    g = giris-(365*y)-(30*a)-(7*h);

    *yil=y;
    *ay=a;
    *hafta=h;
    *gun=g;
}

int main()
{
    while (1)
    {
        int yil, ay, hafta, gun ;
        int giris;
        printf("sayi girin: ");
        loop:
        scanf("%d", &giris);
        if(giris<=0)
        {
            printf("lutfen pozitif bir sayi giriniz: ");
            goto loop;
        }
        gun_cevir(giris, &yil, &ay, &hafta, &gun);
        printf("%d yil %d ay %d hafta %d gun \n\n",yil,ay,hafta,gun);
    }

    return 0;
}