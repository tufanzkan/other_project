#include<stdio.h>
#include<stdlib.h>

void ort_sic(float d[])
{
    float ort;
    float toplam=0;
    for(int j=0;j<7;j++)
    {
        toplam=toplam+d[j];
    }
    ort=(toplam/7.0);

    printf("haftanin sicaklik ortalamasi: %f",ort);
}

int main ()
{
    float s[7];
    for(int i=0;i<7;i++)
    {
        printf("haftanin %d. gunu sicakligini giriniz: ",(i+1));
        int x;
        scanf("%d",&x);
        s[i]=x;
    }
    ort_sic(s);

    return 0;
}