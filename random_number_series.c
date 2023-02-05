#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int a;
    printf("dizi kac sayidan olussun?: ");
    scanf("%d",&a);

    int rd[a];
    srand(time(NULL));
    printf("rastgele %d sayi uretiliyor... \n",a);
    
    for(int i=1;i<=a;i++)
    {
        rd[i]=rand() % 100;
        printf("uretilen %d. sayi: %d \n",i,rd[i]);
    }

    return 0;
}