#include <stdio.h>

int main()
{
    int a,b,c;
    printf("kenar uzunluklarini giriniz: \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("ucgenin cevresi: %d \n",a+b+c);
    if (a==b && a==c)
    {
        printf("eskenar ucgen");
    }
    else
    {
        if (a==b || a==c)
        {
            printf("ikizkenar ucgen");
        }
        else
        {
            printf("cesitkenar ucgen");
        }
    }
        return 0;
}
