#include<stdio.h>

int main()
{
    char islem;
    char a='+';
    char b='-';
    char c='*';
    char d='/';
    float s1,s2;
    printf("yapmak istediginiz islemi giriniz (*,+,-,/): ");
    scanf("%c",&islem);
    printf("1. sayiyi giriniz: ");
    scanf("%f",&s1);
    printf("2. sayiyi giriniz: ");
    scanf("%f",&s2);

    if (islem == a)
    {
      printf("%f + %f = %f", s1, s2, s1 + s2);
    }
    else if (islem == b)
    {
      printf("%f - %f = %f", s1, s2, s1 - s2);
    }
    else if (islem == c)
    {
      printf("%f * %f = %f", s1, s2, s1 * s2);
    }
    else if (islem == d)
    {
      printf("%f / %f = %f", s1, s2, s1 / s2);
    }
    else
      printf("HATA");

    return 0;
}