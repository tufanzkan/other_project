#include <stdio.h>

int main()
{
    int i,fac;
    fac=1;
    printf("fact sayisini girin: ");
    scanf("%d",&i);
    
    while(i>0)
    {
        fac=fac*i;
        i--;
    }
    printf("fact= %d",fac);

    return 0;
}
