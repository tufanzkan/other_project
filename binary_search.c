#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int dizi[25];
    int target;
    int solindis=0;
    int sagindis=24;
    int ortaindis=0;
    int bul=0;
    srand(time(NULL));

    for(int i=0;i<25;i++)
    {
        dizi[i]= rand() % 100;
    }

     for(int j=0;j<25;j++)
    {
        printf("%d ",dizi[j]);
    }
    printf("\n");

    printf("aranacak sayiyi giriniz: ");
    scanf("%d",&target);

    while(bul==0 && solindis<=sagindis)
    {
        ortaindis = (solindis+sagindis)/2;

        if(target == dizi[ortaindis])
        {
            bul=1;
            break;
        }
        else if(target < dizi[ortaindis])
        {
            sagindis=ortaindis-1;
        }
        else if(target > dizi[ortaindis])
        {
            solindis=ortaindis+1;
        }
    }
    if(bul)
    {
        printf("aranan sayi %d. siradadir",ortaindis);
    }
    else
    {
        printf("aranan sayi dizide yoktur");
    }

    return 0;
}