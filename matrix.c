#include <stdio.h>

int main()
{
    int satir,sutun;
    int j,k;
    
    printf("satir sayisini giriniz: ");
    scanf("%d",&j);
    printf("sutun sayisini giriniz: ");
    scanf("%d",&k);

    for (satir = 0; satir < j; satir++)
    {
        for (sutun = 0; sutun < k; sutun++)
        {
            printf(" %d,%d ", satir, sutun);
        }
        printf("\n");
    }

    return 0;
}
