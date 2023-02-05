#include <stdio.h>

int main()
{
   int fac=1;
   int i;
   printf("faktoriyelini hesaplamak istediginiz sayiyi giriniz: ");
   scanf("%d",&i);
   
   for(i;i>0;i--)
   {
       fac=fac*i;
   }
     printf("faktoriyel= %d",fac);

    return 0;
}
