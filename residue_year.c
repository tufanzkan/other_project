#include <stdio.h>

int main()
{
    int yil;
    printf("yili giriniz: ");
    scanf("%d",&yil);
    
    if (yil%4==0 && yil%100!=0 || yil%400==0)
        printf("artik yildir");
    else
        printf("artik yil degildir");

    return 0;
}