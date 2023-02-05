#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int a[5],b[5],c[6];
    srand(time(NULL));
    for(int i=0;i<5;i++)
    {
        a[i]=rand()%10;
        printf(" %d",a[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        b[i]=rand()%10;
        printf(" %d",b[i]);
    }
    printf("\n \n");
    int elde=0;
    int temp;
    for(int j=4;j>-1;j--)
    {
        temp=a[j]+b[j]+elde;
        c[j+1]=temp%10;
        elde=temp/10;
    }
    c[0]=elde;
    for(int i=0;i<6;i++)
    {
        printf("%d ",c[i]);
    }
    
    return 0;
}