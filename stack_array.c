#include<stdio.h>
#include<stdlib.h>

#define BOY 5

struct yigin
{
    int dizi[BOY];
    int top;
};

struct yigin y;

void push(int s)
{
    if (y.top>=BOY-1)
    {
        printf("yigin dolu");
    }
    else
    {
        y.top++;
        y.dizi[y.top]=s;
    }
}
void pop()
{
    if (y.top<0)
    {
        printf("yigin bos");
    }
    else
    {
        int cikan=y.dizi[y.top];
        y.top--;
        printf("%d cikarildi",cikan);
    }
}
void yazdir()
{
    if (y.top<0)
    {
        printf("yigin bos");
    }
    else
    {
        for (int i = y.top; i > -1; i--)
        {
            printf("%d \n",y.dizi[i]);
        }
    }
}

int main()
{
    int secim,sayi;
    y.top=-1;

    while (1)
    {
    printf("\n YIGIN YAPISI \n");
    printf("1---> push \n");
    printf("2---> pup \n");
    printf("3---> yazdir \n");
    printf("4---> exit \n");
    
    printf("lutfen seciniz: ");
    scanf("%d",&secim);
    switch (secim)
    {
    case 1:
        printf("eklemek istediginiz sayi: ");
        scanf("%d",&sayi);
        push(sayi);
        break;

    case 2:
        pop(sayi);
        break;
    
    case 3:
        yazdir();
        break;

    case 4:
        printf("cikis yapildi!!");
        exit(1);
        break;
    
    default:
        printf("HATAAA!!!!");
        break;
    }
    }
}