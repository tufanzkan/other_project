#include <stdio.h>
#include <stdlib.h>

// Tufan Özkan 210201078 Q4

int AlAra(const char *cum, int *y1, int *y2)
{
    int s = 0;
    int i;
    for (i = 0; cum[i] != '\0'; i++)
    {
        if (cum[i] == '"')
        {
            if (s == 0)
            {
                *y1 = i;
                s++;
            }
            else if (s == 1)
            {
                *y2 = i;
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    char cuml[100];
    printf("alinti cumlesini giriniz: ");
    fgets(cuml, 100, stdin);
    int bas;
    int bit;
    if (AlAra(cuml, &bas, &bit))
    {
        printf("alinti: ");
        for (int i = bas+1; i < bit; i++)
        {
            printf("%c", cuml[i]);
        }
    }
    else
    {
        printf("Alinti Yoktur\t");
    }
}