#include <stdio.h>

int main()
{
    printf("ax2+bx+c denkleminin koku var var midir? \n");
    int t=4;
    float a,b,c;
    printf("a degerini giriniz: ");
    scanf("%f",&a);
    printf("b degerini giriniz: ");
    scanf("%f",&b);
    printf("c degerini giriniz: ");
    scanf("%f",&c);

    float ucgen=(b*b)-(t*a*c);

    if (ucgen>0)
        printf("denklemin iki farkli reel koku vardir");
    if (ucgen==0)
        printf("denklemin tek reel koku vardir");
    if (ucgen<0)
        printf("denklemin reel koku yoktur");

    return 0;
}
