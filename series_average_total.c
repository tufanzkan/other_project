#include <stdio.h>

int main()
{
    int dizi[100];
    int i,sayi;
    int dtop=0;
    int dort=0;
    printf("eleman sayisi:");
    scanf("%d",&sayi);

    for(i=0;i<sayi;i++)
    {
        printf("dizinin %d. degerini giriniz: ",i);
        scanf("%d",&dizi[i]);
        dtop+=dizi[i];
    }
    dort=(dtop/sayi);
    printf("\n");

    for(i=0;i<sayi;i++)
    {
      printf("%d ",dizi[i]);
    }
        printf("\n\n");
        printf("dizinin elemanlari toplami: %d \n",dtop);
        printf("dizinin elemanlari ortalamasi: %d ",dort);

    return 0;
}
