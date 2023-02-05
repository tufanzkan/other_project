#include <stdio.h>

int main()
{
    int f;
    printf("Elektrik tuketim surenizi giriniz: ");
    scanf("%d",&f);

    if (0<f<=50)
    {
        printf("Ek Bedel: %d \n",f*20/100);
        printf("Faturaniz: %d TLdir",f*1/2);
    }
    else  if (50<f<=100)
    {
        printf("Ek Bedel: %d \n",f*20/100);
        printf("Faturaniz: %d TLdir",f*3/4);
    }
    else if (100<f)
    {
        printf("Ek Bedel: %d \n",f*20/100);
        printf("Faturaniz: %d TLdir",f);
    }
    
    return 0;
}
