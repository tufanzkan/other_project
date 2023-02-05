#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* top=NULL;
struct node* temp=NULL;

void push(int s)
{
    struct node* eleman=(struct node*)malloc(sizeof(struct node*));
    eleman->data=s;

    if(top==NULL)
    {
        top=eleman;
        top->next=NULL;
    }
    else
    {
        eleman->next=top;
        top=eleman;
    }
}

void pop()
{
    if (top==NULL)
    {
        printf("stack bos zaten neyi siliyonnn??\n");
    }
    else
    {
        printf("%d elemani cikarildi\n",top->data);
        temp=top->next;
        free(top);
        top=temp;
    }
}

void yazdir()
{
    if (top==NULL)
    {
        printf("stack bos");
    }
    else
    {
        temp=top;
        while (temp->next!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}


int main()
{
    int secim,sayi;

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