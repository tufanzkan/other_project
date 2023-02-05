#include<stdio.h>
#include<stdlib.h>

struct zaman
{
    int h;
    int m;
    int s;
};

void farkhesapla (struct zaman *a, struct zaman *b, struct zaman *c)
{
    c->s=(a->s)-(b->s);
    c->m=(a->m)-(b->m);
    c->h=(a->h)-(b->h);

    if(c->s<0)
    {
        c->s=c->s+60;
        c->m--;
    }
    if(c->m<0)
    {
        c->m=c->m+60;
        c->h--;
    }
}

int main()
{   
    struct zaman z1;
    struct zaman z2;
    struct zaman z3;

    printf("ilk saati giriniz: ");
    scanf("%d %d %d",&z1.h,&z1.m,&z1.s);

    printf("ikinci saati giriniz: ");
    scanf("%d %d %d",&z2.h,&z2.m,&z2.s);

    farkhesapla(&z1,&z2,&z3);

    printf("zaman farki: %d %d %d",z3.h,z3.m,z3.s);

    return 0;
}