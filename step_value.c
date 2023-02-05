#include<stdio.h>
#include<stdlib.h>

void basdeg(int s)
{
    int bas;
    int i;
    for(i=1;;i*=10)
    {
        if(s/i==0)
        {
        break;
        }
        else
        {
        bas=(s/i)%10;
        printf("%d x %d\n",i,bas);
        }
    }
}

int main()
{
    int s;
    printf("bas deg hesp sayi girin: ");
    scanf("%d",&s);

    basdeg(s);

    return 0;
}