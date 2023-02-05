#include <stdio.h>

int main()
{
    int a,b,c,i,j;
    a=1;
    b=1;
    printf("fibonaccinin sonunu belirleyin: ");
    scanf("%d",&i);
    printf(" %d \n",a);
    printf(" %d \n",b);

    for(j=1;j<=i;j++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n ",c);
    }

    return 0;
}
