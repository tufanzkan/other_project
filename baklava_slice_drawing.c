#include<stdio.h>

int main()
{
    int b;
    printf("boyunu giriniz: ");
    scanf("%d",&b);
    int i,j,m,n;
    printf("\n");
    
    for(i=1;i<b;i++)
    {
        for(j=b;j>=i;j--)
        {
            printf(" ");
        }
        for(m=1;m<=i;m++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(i=1;i<=b;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(m=b;m>=i;m--)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}
