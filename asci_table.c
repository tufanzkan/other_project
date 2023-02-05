#include <stdio.h>
#include <ctype.h>
int main()
{
    for(int i=0;i<32;i++)
    {
        char a=i;
        if(!isprint(a))
            a=' ';
        char b=i+32;
        if(!isprint(b))
            b=' ';
        char c=i+64;
        if(!isprint(c))
            c=' ';
        char d=i+96;
        if(!isprint(d))
            d=' ';
        printf("| %-3c %-4d | %-3c %-4d | %-3c %-4d | %-3c %-4d |\n",a,i,b,i+32,c,i+64,d,i+96);
    }
    return 0;
}