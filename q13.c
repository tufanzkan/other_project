#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//Tufan Özkan Q5 210201078

int ks(const char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    return i;
}

void parcala(char *mail, int uz, char *ad, char *soyad)
{
    int i=0;
    int n;
    printf("adi: ");
    while(mail[i]!='.')
    {
        if(i<1)
        {
            if (isalpha(mail[i]))
            {
                if (islower(mail[i]))
                    printf("%c", toupper(mail[i]));
            }
        }
        else
        {
            printf("%c",mail[i]);
        }
        ad[i]=mail[i];
        i++;
        n=i+1;
    }
    printf("\n");
    printf("soyadi: ");
    while(mail[n]!='@')
    {
        if(n<(uz-n))
        {
            if (isalpha(mail[n]))
            {
                if (islower(mail[n]))
                    printf("%c", toupper(mail[n]));
            }
        }
        else
        {
            printf("%c",mail[n]);
        }
        soyad[n]=mail[n];
        n++;
    }
    printf("\n");
}

void ayir(char *konu, char *baslik)
{
    int n=1;
    for(int i=0;i<50;i++)
    {
        if(ispunct(konu[i+1]))
        {
            break;
        }
        else
        {
            n++;
        }
    }
    for(int j=0;j<=n;j++)
    {
        baslik[j]=konu[j];
    }
}

int main()
{
    char ad[50];
    char soyad[50];
    char baslik[100];
    loop:
    printf("e-posta adresini giriniz: ");
    const char email[100];
    fgets(email,100,stdin);

    char k1='@';
    char k2='.';
    char *p1=strchr(email,k1);
    char *p2=strchr(email,k2);

    if(p1==NULL)
    {
        goto loop;
    }
    if(p2==NULL)
    {
        goto loop;
    }

    int uz=ks(email);

    for(int i=0;i<uz;i++)
    {
        if(isdigit(email[i]))
        {
            goto loop;
        }
    }

    const char konu[100];
    printf("konu ve icerigi giriniz: ");
    fgets(konu,100,stdin);

    parcala(email,uz,ad,soyad);
    ayir(konu,baslik);

    printf("%s adli konu %s %s kisisine gonderildi.",baslik,ad,soyad);

    return 0;
}