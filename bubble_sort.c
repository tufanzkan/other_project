#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int d[10];
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
        d[i]=rand()%100;

        printf("%d ",d[i]);
    }
    printf("\n \n");

    for(int i=1;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(d[j]>d[j+1])
            {
                int temp1,temp2;
                temp1=d[j];
                temp2=d[j+1];
                d[j]=temp2;
                d[j+1]=temp1;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",d[i]);
    }

    return 0;
}