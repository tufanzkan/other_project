#include <stdio.h>
#include <stdlib.h>

int yerbul(char *s,char aranan)
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==aranan)
        return i;
    }
    return -1;
}

int main()
{
    char s[100];

    printf("cumleyi girin: ");
    gets(s);

    char aranan;
    printf("aranacak harfi giriniz: ");
    scanf("%c",&aranan);

    int yer=yerbul(s,aranan);

    if(yer==-1)
    {
        printf("yok");
    }
    else
    printf("%d. indexte var",yer);

    return 0;
}