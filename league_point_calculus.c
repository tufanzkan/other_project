#include <stdio.h>

int main()
{
    int a;
    int y;
    int b;
    int atop=0;
    int ytop=0;
    int puan=0;

    while(1)
    {
loop:
        printf("atilan gol sayisini giriniz: ");
        scanf("%d",&a);
        printf("yedigi gol sayisini giriniz: ");
        scanf("%d",&y);
        atop+=a;
        ytop+=y;

        if(a>y)
        {
            puan+=3;
        }
        if(a==y)
        {
            puan+=1;
        }
        if(a<y)
        {
            puan+=0;
        }
        printf("devam etmek icin 1i tuslayin ");
        scanf("%d",&b);

        if(b==1)
        {
            goto loop;
        }
        else
            printf("takimin attigi toplam gol: %d \n",atop);
        printf("takimin yedigi toplam gol: %d \n",ytop);
        printf("takim puani: %d ",puan);
        break;
    }
    return 0;
}
