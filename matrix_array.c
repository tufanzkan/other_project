#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int siralama(int a,int matris[a][a])
{
    LOOP:
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(matris[i][j]>matris[i][j+1])
            {
                int temp1,temp2;
                temp1=matris[i][j];
                temp2=matris[i][j+1];
                matris[i][j+1]=temp1;
                matris[i][j]=temp2;
                goto LOOP;
            }
        }
    }
}

int main()
{
    int a;
    printf("matris boyutunu giriniz: ");
    scanf("%d",&a);
    int matris[a][a];
    srand(time(NULL));

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            matris[i][j]=rand()%100;
        }
    }

    printf("\n matris \n\n");

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }

    siralama(a,matris);
    printf("\nsiralanmis hali\n\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {

            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}