#include <stdio.h>

int main()
{
    int s1;
    printf("bir sayi giriniz: ");
    scanf("%d",&s1);

    int mod;
    printf("bolumu giriniz: ");
    scanf("%d",&mod);
    int kalan=s1%mod;
    
    printf("%d sayisinin %d ile bolumunden kalan = %d",s1,mod,kalan);

    return 0;
}
