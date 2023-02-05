#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* temp=NULL;
struct node* front=NULL;
struct node* rear=NULL;

void push(int data)
{
    if (front==NULL)
    {
        struct node* eleman=(struct node*)malloc(sizeof(struct node));
        front=eleman;
        front->data=data;
        front->next=NULL;
    }
    else if (front->next==NULL)
    {
        struct node* eleman=(struct node*)malloc(sizeof(struct node));
        rear=eleman;
        front->next=rear;
        rear->data=data;
        rear->next=NULL;
    }
    else
    {
        struct node* eleman=(struct node*)malloc(sizeof(struct node));
        eleman->data=data;
        eleman->next=NULL;
        rear->next=eleman;
        eleman=rear;
    }
}
void pop()
{
    if (front==NULL)
    printf("yok boyle bisi yook");
    else
    {
        printf("%d silindi",front->data);
        temp=front;
        front=front->next;
        free(temp);
    }
}
void yazdir()
{
    if (front==NULL)
    printf("yok boyle bisi yook");
    else
    {
        temp=front;
        while (temp->next!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
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
        pop();
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