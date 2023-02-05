#include <stdio.h>

     // Tufan ÖZKAN 210201078 Q2

int main()
{
    int a,b,c;
    printf("3 tane sayi giriniz:\n");
    scanf("%d %d %d",&a,&b,&c);

    if (a<b && b<c)
    {
    printf("ortanca sayi: %d \n",b);
    printf("kucuk sayinin 2 kati: %d \n",a*2);
    }
    if (a<c && c<b)
    {
        printf("ortanca sayi: %d \n",c);
        printf("kucuk sayinin 2 kati: %d \n",a*2);
    }
    if (b<a &&  a<c)
    {
        printf("ortanca sayi: %d \n",a);
        printf("kucuk sayinin 2 kati: %d \n",b*2);
    }
    if (b<c && c<a)
    {
        printf("ortanca sayi: %d \n",c);
        printf("kucuk sayinin 2 kati: %d \n",b*2);
    }
    if (c<a && a<b)
    {
        printf("ortanca sayi: %d \n",a);
        printf("kucuk sayinin 2 kati: %d \n",c*2);
    }
    if (c<b && b<a)
    {
        printf("ortanca sayi: %d \n",b);
        printf("kucuk sayinin 2 kati: %d \n",c*2);
    }

    return 0;
}
