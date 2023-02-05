#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int bul(int matris[4][4],int dizi[],int a)
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(matris[i][j]==a)
            {
                dizi[0]=i+1;
                dizi[1]=j+1;
                return 0;
            }
        }
        printf("\n");
    }
}

int main()
{
    int a,b,dizi[2];
    printf("matris boyutunu giriniz: ");
    scanf("%d",&b);

    int matris[b][b];
    srand(time(NULL));

    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            matris[i][j]=rand()%100;
        }
    }

     for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }

    printf("aranacak sayiyi giriniz: ");
    scanf("%d",&a);
   
    bul(matris,dizi,a);
    printf("aranan sayi sayinin yeri ---> [%d] [%d]",dizi[0],dizi[1]);

    return 0;
}