#include<stdio.h>
#include<math.h>

void cati_ciz()
{
    printf("    /\\     \n");
    printf("   /  \\    \n");
    printf("  /    \\   \n");
    printf(" /      \\  \n");
    printf("/        \\ \n");
}
void duvar_ciz()
{
    printf("|         | \n");
    printf("|         | \n");
    printf("|         | \n");
    printf("|         | \n");
}
void kat_ciz()
{
    printf("----------- \n");
}

int main()
{
    int k;
    printf("evin kac katli olmasini istersiniz: ");
    scanf("%d",&k);
    
    cati_ciz();
    for (int i = 1; i <= k; i++)
    {
        kat_ciz();
        duvar_ciz();
    }
    kat_ciz();   
    
    return 0;
}