#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
    int hastasayisi;
    printf("lutfen hasta sayisini giriniz: ");
    scanf("%d",&hastasayisi);
    char bilgi[hastasayisi][1000];

    for (int i = 0; i < hastasayisi; i++)
    {
        printf("lutfen hastanin adini giriniz: ");
        fflush(stdin);
        gets(bilgi[i]);
        printf("lutfen hastanin soyadini giriniz: ");
        char a[20];
        fflush(stdin);
        gets(a);
        strcat(bilgi[i]," ");
        strcat(bilgi[i],a);
        printf("lutfen hastanin yasini giriniz: ");
        char b[2];
        fflush(stdin);
        gets(b);
        strcat(bilgi[i]," ");
        strcat(bilgi[i],b);
        printf("lutfen hastanin cinsiyetini giriniz: ");
        char c[10];
        fflush(stdin);
        gets(c);
        strcat(bilgi[i]," ");
        strcat(bilgi[i],c);
        printf("\n");
    }

    for (int i = 0; i < hastasayisi; i++)
    {
        printf("%s\n",bilgi[i]);
    }

    return 0;
}