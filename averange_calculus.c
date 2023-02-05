#include <stdio.h>

int main()
{
    float s1,s2,s3;
    printf("1. notunuzu giriniz ");
    scanf("%f",&s1);
    printf("2. notunuzu giriniz ");
    scanf("%f",&s2);
    printf("3. notunuzu giriniz ");
    scanf("%f",&s3);

    float ort=(s1+s2+s3)/3;
    printf("Ortalama=%f \n",ort);

    if(ort>50)
        printf("TEBRIKLER GECTINIZ :))");
    else
        printf("KALDINIZ :(");

    return 0;
}
