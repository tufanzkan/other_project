#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        int *a = (int *)malloc(100000);
    }
    return 0;
}