#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Tufan ÖZKAN 210201078 Q2

void dizibul(int mb, int matris[mb][mb], int db, int dizi[db])
{

    for(int i=0;i<mb;i++)
    {
        for(int j=0;j<mb;j++)
        {
            if(matris[i][j]==dizi[0])
            {

                for(int a=0;a<db;a++)
                {
                    if(matris[i][j+a]==dizi[a])
                    {
                        printf("matris [%d %d] baslangic noktasinda dizi bulmustur ",i,j);
                        break;
                    }
                }
            }
        }
        printf("\n");
    }
}

int main()
{
    int mb;
    printf("matris boyutunu giriniz: ");
    scanf("%d",&mb);

    int matris[mb][mb];
    srand(time(NULL));

    for(int i=0;i<mb;i++)
    {
        for(int j=0;j<mb;j++)
        {
            matris[i][j]=rand()%100;
        }
    }
    
    for(int i=0;i<mb;i++)
    {
        for(int j=0;j<mb;j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }

    int db;
    printf("dizi boyutunu giriniz: ");
    scanf("%d",&db);

    int dizi[db];
    for(int i=0;i<db;i++)
    {
        printf("%d. dizi elemanini giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("\n");
    dizibul(mb,matris,db,dizi);

    return 0;
}