#include <stdio.h>

int main()
{
    char islem;
    float s1,s2;
    printf("yapilacak islemi giriniz (+,-,*,/): ");
    scanf("%c",&islem);
    printf("ilk sayiyi giriniz: ");
    scanf("%f",&s1);
    printf("ikinci sayiyi giriniz: ");
    scanf("%f",&s2);
    
    switch(islem)
    {
    case '+':
        printf("%f + %f = %f",s1,s2,s1+s2);
        break;
    case '-':
        printf("%f - %f = %f",s1,s2,s1-s2);
        break;
    case '*':
        printf("%f * %f = %f",s1,s2,s1*s2);
        break;
    case '/':
        printf("%f / %f = %f",s1,s2,s1/s2);
        break;
    default:
        printf("HATA");
    }

    return 0;
}
