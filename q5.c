#include "stdio.h"

int main() {
    int satir, sutun, sayi=1;

    printf("satir sayisini giriniz: ");
    scanf("%d", &satir);
    printf("sutun sayisini girinz: ");
    scanf("%d", &sutun);

    for(int m=0; m<satir; m++) {
        for(int n=0; n<sutun; n++) {
            int asalMi=0;
            for(int k=2; k<sayi; k++) {
                // Eğer sayı k sayısına tam bölünüyor ise asal değildir.
                if(sayi%k==0)
                    asalMi=1;
            }

            // Sayı asal ise;
            if(asalMi==1 || sayi==1)
                printf("%d ", sayi);
            else
                printf("0 ");

            // Her sayı değeri yazıldığında da arttır.
            ++sayi;
        }
        // Her sıra tamamlandığında alta geç;
        printf("\n");
    }
    return 0;
}