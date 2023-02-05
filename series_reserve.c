#include<stdio.h>
#include<stdlib.h>

void reserve(int dizi[],int s)
{
    for(int j=s-1;j>=0;j--)
    {
        printf("%d ",dizi[j]);
    }
}

int main()
{
    int s;
    printf("dizi kac elemandan olussun? ");
    scanf("%d",&s);

    int dizi[s];
    for(int i=0;i<s;i++)
    {
        printf("dizinin %d. elemani? ",i+1);
        scanf("%d",&dizi[i]);
    }
    for(int j=0;j<s;j++)
    {
        printf("%d ",dizi[j]);
    }
    printf("\n");
    reserve(dizi,s);

    return 0;
}