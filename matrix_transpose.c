#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void transporoz(int a,int dizi[a][a])
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%d ",dizi[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int a;
    printf("rastgele matrisin boyutunu girniz: ");
    scanf("%d",&a);
    int matris[a][a];
    srand(time(NULL));

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            matris[i][j]=rand()%10;
        }
        printf("\n");
    }
    printf("matris \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrisin transporozu \n\n");
    transporoz(a,matris);

    return 0;
}