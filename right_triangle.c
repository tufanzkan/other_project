#include <stdio.h>

int main()
{
    int i,j,b;
    printf("dik ucgenin boyunu giriniz: ");
    scanf("%d",&b);
    
    for(i=1;i<=b;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}