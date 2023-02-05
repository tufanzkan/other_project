#include<stdio.h>
#include<math.h>

int ebob(int x, int y)
{
    int sonuc;
    for(int i=2; i<=x && i<=y; i++)
    {
        if(x%i==0 && y%i==0)
        {
            sonuc=i;
        }
        if(x+1==y || y+1==x)
        {
            sonuc=1;
        }
    }
  return sonuc;
}

int ekok(int t, int z)
{
    int sonuc,j=1;
    while(1)
    {
        j++;
        if(j%t==0 && j%z==0)
        {
            sonuc=j;
            break;
        }
    }
    return j;
}

int main()
{
    int a,b;
    printf("iki sayi giriniz: ");
    scanf("%d %d",&a,&b);

    printf("sayilarin ebobu: %d \n",ebob(a,b));
    printf("sayilarin ekoku: %d",ekok(a,b));

    return 0;
}