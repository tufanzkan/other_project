#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int determinant(int a,int matris[a][a])
{
    int det=0;
    if(a==1)
    {
        return matris[0][0];
    }
    else if(a==2)
    {
        det=((matris[0][0]*matris[1][1])-(matris[0][1]*matris[1][0]));
        return det;
    }
    else
    {
        det=((matris[0][0]*matris[1][1]*matris[2][2])+(matris[0][1]*matris[1][2]*matris[2][0])+(matris[0][2]*matris[1][0]*matris[2][1]))-((matris[0][2]*matris[1][1]*matris[2][0])+(matris[0][0]*matris[1][2]*matris[2][1])+(matris[0][1]*matris[1][0]*matris[2][2]));
        return det;
    }
}

int main()
{
    int a;
    printf("matris boyutunu giriniz(max 3): ");
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
    
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrisin determinanti= %d",determinant(a,matris));

    return 0;
}