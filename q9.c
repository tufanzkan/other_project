#include<stdio.h>
#include<stdlib.h>

// 210201078 Tufan ÖZKAN Q1

void maxdegerler(int d[], int boy)
{
    int max1, max2;
    for (int i = 1; i < boy; i++)
    {
        for (int j = 0; j < boy - 1; j++)
        {
            if (d[j] > d[j + 1])
            {
                int tmp;
                tmp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = tmp;
            }
        }
    }

    max1 = d[boy - 1];
    max2 = d[boy - 2];
    printf("max deger: %d\n", max1);
    printf("2. max deger: %d\n", max2);
    printf("max degerler toplami: %d", (max1 + max2));
}

int main()
{
    int boy;
loop:
    printf("dizinin boyutunu giriniz(1-100): ");
    scanf("%d", &boy);
    if (boy <= 2)
    {
        printf("dizi eleman sayisi 2 ve 2den kucuk olamaz\n");
        goto loop;
    }
    int a[boy];
    for (int i = 0; i < boy; i++)
    {
        printf("dizinin %d. elemanini giriniz: ", i + 1);
        scanf("%d", &a[i]);
    }
    maxdegerler(a, boy);

    return 0;
}