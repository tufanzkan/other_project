#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
    int d[10];
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
        d[i]=rand()%100;
        printf("%d ",d[i]);
    }
    printf("\n\n");
    int aranan;
    printf("aranacak sayiyi giriniz: ");
    scanf("%d",&aranan);
    for(int j=0;j<10;j++)
    {
        if(d[j]==aranan)
        {
            printf("aranan sayi %d. indiste",j);
            goto loop;
        }
    }
    printf("dizide boyle bi sayi yoktur");

    loop:
    return 0;
}