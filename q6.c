#include<stdio.h>

int main()
{
    // Tufan ÖZKAN 210201078 q6 
 
    int s;  //s=satir sayisi
    loop:
    printf("satir sayisi giriniz(cikis -1): ");
    scanf("%d",&s);

    if(s%2==0)
    {
        printf("lutfen tek sayi giriniz(cikis -1) \n");
        goto loop;
    }
    if(s==-1)
    {
        printf("ciksi yapildi");
    }
    if(s%2==1)
    {
        for(int i=1;i<s;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("*");
            }
            for(int m=s;m>i;m--)
            {
                printf("  ");
            }
            for(int n=1;n<=i;n++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(int i=1;i<=s;i++)
        {
            for(int j=s;j>=i;j--)
            {
                printf("*");
            }
            for(int m=1;m<i;m++)
            {
                printf("  ");
            }
            for(int n=s;n>=i;n--)
            {
                printf("*");
            }
            printf("\n");
        }
      goto loop;  
    }
    return 0;
}