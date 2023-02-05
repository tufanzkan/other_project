#include <stdio.h>
void saat_cevir(int saniye, int *saat, int *dk, int *sn)
{
    *sn = saniye % 60;
    *dk = (saniye / 60) % 60;
    *saat = (saniye / 3600);
}
int main()
{
    while (1)
    {
        int saat, dakika, saniye;
        int girilen_sayi;
        printf("sayi girin: ");
        scanf("%d", &girilen_sayi);
        saat_cevir(girilen_sayi, &saat, &dakika, &saniye);
        printf("%d saat %d dakika %d saniye\n\n", saat,dakika, saniye);
    }
    return 0;
}