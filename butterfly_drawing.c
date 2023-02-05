#include <stdio.h>

int main()
{
   int i,j,k,l,boy;
	printf("kelebegin boyunu giriniz giriniz:");
	scanf("%d",&boy);

	for(i=1;i<boy;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(k=boy;k>i;k--)
		{
			printf("  ");
		}
		for(l=1;l<=i;l++)
		{
			printf("*");
		}
		printf("\n");
	}

	for(i=1;i<=boy;i++)
	{
		for(j=boy;j>=i;j--)
		{
			printf("*");
		}
		for(k=1;k<i;k++)
		{
			printf("  ");
		}
		for(l=boy;l>=i;l--)
		{
			printf("*");
		}
		printf("\n");
	}

    return 0;
}
