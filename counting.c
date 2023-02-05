#include <stdio.h>

int main()
{
    int sayi;
    int poz;
    int poztop=0;
    printf("bir sayi giriniz(ekrana yazdirmak icin 0i tuslayin): \n");
    scanf("%d",&sayi);

    while(sayi!=0)
    {
        if (sayi>0)
        {
            poz++;
            poztop=poztop+sayi;
        }
        printf("bir sayi giriniz: ");
        scanf("%d",&sayi);
    }
    printf("pozitif sayi sayisi: %d \n",poz);
    printf("pozitif sayilar toplami: %d",poztop);

    return 0;
}
