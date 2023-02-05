#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int a;
    printf("dizi uzunlugunu giriniz: ");
    scanf("%d",&a);
    int dizi[a];
    printf("\n");
    
    for(int i=0;i<a;i++)
    {
        dizi[i]=rand()%100;
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",dizi[i]);
    }
    printf("\n siralanmis hali\n");
    
    for(int j=0;j<a;j++)
    {
        for(int i=0;i<a;i++)
        {
            if(dizi[i]>dizi[i+1])
            {
            int temp1,temp2;
            temp1=dizi[i];
            temp2=dizi[i+1];
            dizi[i]=temp2;
            dizi[i+1]=temp1;
            }
            else
            {
            dizi[i]=dizi[i];
            dizi[i+1]=dizi[i+1];
            }
        }
    }

    for(int i=0;i<a;i++)
    {
        printf("%d ",dizi[i]);
    }

    return 0;
}