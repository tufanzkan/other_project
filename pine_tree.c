#include<stdio.h>

int main()
{
    int i,j,m,n;
    printf("camagac boyunu giriniz: ");
    scanf("%d",&m);

    for(i=1;i<=m;i+=2)
    {
        for(j=m;j>=i;j--)
        {
            printf(" ");
        }
        for(n=1;n<=i;n++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    for(i=1;i<=(m/2);i++)
    {
        for(j=m;j>=0;j-=2)
        {
            printf(" ");
        }
        for(n=1;n<=(m/2);n++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}   