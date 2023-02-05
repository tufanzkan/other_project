#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a, b, c, d;
    int i, j, k;
    int t; // t=topla

LOOP:
    printf("1. matrisin satir degerini giriniz:");
    scanf("%d", &a);
    printf("1. matrisin sutun degerini giriniz:");
    scanf("%d", &b);

    printf("2. matrisin satir degerini giriniz:");
    scanf("%d", &c);
    printf("2. matrisin sutun degerini giriniz:");
    scanf("%d", &d);

    int matris1[a][b];
    int matris2[c][d];
    int matris3[a][d];
    if (b != c)
    {
        printf("Matrisler carpilamaz \n");
        goto LOOP;
    }
    else
    {
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                printf("1. matrisin [%d][%d]:", i + 1, j + 1);
                scanf("%d", &matris1[i][j]);
            }
        }
        for (i = 0; i < c; i++)
        {
            for (j = 0; j < d; j++)
            {
                printf("2. matrisin [%d][%d]:", i + 1, j + 1);
                scanf("%d", &matris2[i][j]);
            }
        }

        for (i = 0; i < a; i++) //çarpmada ilk matrisin satırı
        {
            for (j = 0; j < d; j++) //çarpmada ikinci matrisin sutunu
            {
                t = 0;
                for (k = 0; k < b; k++)
                {
                    t = t + matris1[i][k] * matris2[k][j];
                    matris3[i][j] = t;
                }
            }
        }
        // c matrisinin satır sayısı , a nın sutun b nin satır / c nin sutun sayısı b nin sutununa eşit
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < d; j++)
            {
                printf("[%d]", matris3[i][j]);
            }
            printf("\n");
        }
    }

    return 1;
}
