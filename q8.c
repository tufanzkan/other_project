#include<stdio.h>
#include<math.h>

// Tufan ÖZKAN Q8 210201078

double SeriHesapla(double a,double b)
{
    int k=0;               // k=katı anlamında
    double f,d;           // f=bitis d=donus

    while ((a-k)*b>=0)
    {
        k++;
    }
    printf("Serinin terimleri: ");
    for(int i=0;i<k;i++)
    {
        int fak=1;
        for(int j=1;j<=a-i*b;j++)
        {
            fak*=j;
        }
        f+=fak;
        printf("%d + ",fak);
    }
    d=(a/(a+b))*f;
    
    return d;
}

int main()
{
    int a,b;
    loop:
    printf("a degerini giriniz: ");
    scanf("%d",&a);
    printf("b degerini giriniz: ");
    scanf("%d",&b);

    if(b>=a)
        goto loop;
    else
    printf("\n toplam=%f",SeriHesapla(a,b));

    return 0;
}