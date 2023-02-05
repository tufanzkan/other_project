#include <stdio.h>

int main()
{
    // Tufan ÖZKAN 210201078 Q4
    //  a= girilen sayi  b= yüzler bas c= onlar bas d= birler bas e= karesi
    int a,b,c,d,e;
    int toplam;
    printf("girilen sayilar toplami karesinin sayilar toplamina esit mi? \n");

    while(1)
    {
        printf("bir sayi giriniz(cikis icin -1i tuslayin) : ");
        scanf("%d",&a);
        e=a*a;
        d=e%10;
        c=(e/10)%10;
        b=e/100;
        toplam=b+c+d;

        if(a==-1)
        {
            printf("cikis yapildi");
            break;
        }
        if(toplam==a)
        {
            printf("%d esit %d \n",toplam,a);
        }
        else
            printf("%d esit degil %d \n",toplam,a);
    }
    return 0;
}
