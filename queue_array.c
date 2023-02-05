#include<stdio.h>
#include<stdlib.h>

#define BOY 5

int dizi[BOY];
int front=-1;
int rear=-1;

void push(int x)
{
    if (rear==BOY-1)
    {
        printf("kuyruk doldu uzgunum bal");
    }
    else
    {
        if(front==-1)
        front=0;

        rear++;
        dizi[rear]=x;
    }
}
void pop()
{
    if (front==-1)
    {
        printf("kuyruk bos ne cıkarıyon bal yoklugumu");
        front=-1;
        rear=-1;
    }
    else
    {
        printf("%d cikarildi",dizi[front]);
        front=front+1;
    }
}
void yazdir()
{
    if (front==-1)
    {
        printf("bos ammınnaa");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ",dizi[i]);
        }
        
    }
}

int main()
{
    int secim,sayi;

    while (1)
    {
    printf("\n QUEUE YAPISI \n");
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