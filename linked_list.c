#include<stdlib.h>
#include<stdio.h>

struct node{
    int data;
    struct node* next;
};

void bastir(struct node* r)
{
    while (r!=NULL)
    {
        printf("%d ",r->data);
        r=r->next;
    }
}

void sonaekle(struct node* r, int data)
{
    while (r->next!=NULL)
    {
        r=r->next;
    }
    r->next=(struct node*)malloc(sizeof(struct node));
    r=r->next;
    r->data=data;
    r->next=NULL;
}

void sil(struct node* r, int data)
{
    while (r->next!=NULL)
    {
        if(r->next->data==data)
        {
            struct node* temp=(struct node*)malloc(sizeof(struct node));
            temp=r->next;
            r->next=r->next->next;
            free(temp);
        }
        r=r->next;
    }   
}

struct node* ekleSirali(struct node *r, int data)
{
    if(r==NULL) //linklist bossa
    {
        r=(struct node*)malloc(sizeof(struct node));
        r->data=data;
        r->next=NULL;
        return r;
    }
    if(r->data > data) //linklist bos degilse ve eklicegimiz eleman ilk elemandan kucukse (root degisiyor)
    {
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=r;
        return temp;
    }
    struct node* iter=r;
    while (iter->next!=NULL && iter->next->data < data) //linklist dolu sirali ekle
    {
        iter=iter->next;
    }
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->next=iter->next;
    iter->next=temp;
    temp->data=data;
    return r;
}

int main()
{
    struct node* root;
    root=NULL;

    root=ekleSirali(root,35);
    bastir(root);
    printf("\n");
    root=ekleSirali(root,5);
    bastir(root);
    printf("\n");
    root=ekleSirali(root,100);
    bastir(root);
    printf("\n");
    root=ekleSirali(root,70);
    bastir(root);
    printf("\n");
    sil(root,35);
    bastir(root);

    return 0;
}