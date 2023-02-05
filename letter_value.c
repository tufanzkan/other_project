#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a;
    printf("bir harf giriniz: ");
    scanf("%c",&a);

    char b=a-32;
    char c=a+32;

    printf("girilen harfin sayisal degeri: %i\n",a);

    if(c>a)
    {
        printf("girilen harfin kucuk degeri: %i",c);
    }
    else if(a>b)
    {
        printf("girilen harfin buyuk degeri: %i",b);
    }

    return 0;
}