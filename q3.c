#include <stdio.h>

int main()
{
    // Tufan ÖZKAN 210201078 Q3
    int islem;
    int bakiye=1000;
    int a;
    printf("Bakiyeniz: 1000 \n");
    printf("*****ISLEMLER***** \n 1-Para Cekme \n 2-Para Yatirma \n 3-Bakiye Sorgulama \n 4-Kart Iade \n");
    printf("Yapmak Istediginiz Islemi Giriniz: ");
    scanf("%d",&islem);

    switch (islem)
    {
    case 1:
        printf("Bakiyeniz: %d \n",(bakiye-5));
        printf("Cekmek Istediginiz Tutari Giriniz: ");
        scanf("%d",&a);
        printf("Yeni Bakiyeniz: %d",(bakiye-5-a));
        break;
    case 2:
        printf("Bakiyeniz: %d \n",(bakiye-5));
        printf("Yatirmak Istediginiz Tutari Giriniz: ");
        scanf("%d",&a);
        printf("Yeni Bakiyeniz: %d",(bakiye-5+a));
        break;
    case 3:
        printf("Bakiyeniz: %d",(bakiye-5));
        break;
    case 4:
        printf("Kartinizi Almayi Unutmayiniz!");
        break;
    default:
        printf("Hatali Secim Yaptiniz");
    }

    return 0;
}
