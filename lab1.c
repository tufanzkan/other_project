#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <dirent.h>

#define MAX 256

char pup[50][100];
char temp[50][100];
char etiketcmp[30][40];
int q=0;
const int m = 50;
const int n = 100;
int countxt = 0;


void file_reader()
{
    DIR *directory; // dosya pointer

    struct dirent *entry; // dirent kütüphanesideki bir struct yapı(entry)

    directory = opendir("C:\\Users\\Lenovo\\OneDrive\\Belgeler\\tufs\\Universite"); // dosya yolu acma

    if (directory == NULL)
    {
        printf("Error opening diretory.\n"); // dosya yoksa NULL
        exit(1);
    }

    int i = 1;
    while ((entry = readdir(directory)) != NULL)
    {
        printf("%d-%s\n", i, entry->d_name); // dosya varsa dosya listele
        i++;
    }

    if (closedir(directory) == -1)
    {
        printf("Error closing directory.\n");
        exit(1);
    }
}



void entry_file(char *klasoryolu)
{
    char klasor[50];

    printf("lütfen acmak istediginiz dosya adini giriniz: "); // kullanıcıdan görmek istedigi klasoru isteme
    fflush(stdin);
    gets(klasor);
    printf("\n");

    sprintf(klasoryolu, "C:\\Users\\Lenovo\\OneDrive\\Belgeler\\tufs\\Universite\\%s", klasor); // C:\\Users\\Lenovo\\OneDrive\\Belgeler\\tufs\\Universite dosya yoluna görmek istedigi klasoru ekleme

    DIR *directory;

    struct dirent *entry;

    directory = opendir(klasoryolu); // kullanıcının girdigi dosyayolunu acma

    if (directory == NULL)
    {
        printf("Error opening diretory.\n"); // oyle bi dosya yoksa NULL
        exit(1);
    }

    int i = 1;
    while ((entry = readdir(directory)) != NULL)
    {
        printf("%d-%s\n", i, entry->d_name); // dosya okuma
        i++;
    }

    if (closedir(directory) == -1)
    {
        printf("Error closing directory.\n");
        exit(1);
    }
}



void entry_txt(char *belgeyolu)
{
    char belge[50];

    printf("lütfen okumak istediginiz belge adini giriniz: "); // kullanıcıdan görmek istedigi belgeyi isteme
    fflush(stdin);
    gets(belge);
    printf("\n");

    strcat(belge, ".txt");
    strcat(belgeyolu, "\\");
    strcat(belgeyolu, belge); // C:\\Users\\Lenovo\\OneDrive\\Belgeler\\tufs\\Universite klasoru icindeki bi klasordeki belge yolunu ekleme

    FILE *dosya;

    dosya = fopen(belgeyolu, "r"); // kullanıcının girdigi dosyayolunu acma

    if (dosya == NULL)
    {
        printf("Error opening diretory.\n"); // oyle bi dosya yoksa NULL
        exit(1);
    }
    char buf[50];
    while (fgets(buf, 100, dosya) != NULL) // txt okuma
    {
        printf("\"%s\"\n", buf);
    }
    printf("\n");
}



void pupcreating()
{
    DIR *directory; // dosya pointer
    DIR *directory2;

    struct dirent *entry; // dirent kütüphanesideki bir struct yapı(entry)

    directory = opendir("C:\\Users\\Lenovo\\OneDrive\\Belgeler\\tufs\\Universite"); // dosya yolu acma

    char *search_ptr;
    char path[m][n];
    char uzanti[m][n];

    if (directory == NULL)
    {
        printf("Error opening diretory.\n");
        exit(1);
    }

    int foldercount = 0;
    for (int i = 0; (entry = readdir(directory)) != NULL; i++) // klasordeki her seyi path matrisine kopyalama
    {
        sprintf(path[i], entry->d_name);
        foldercount++;
        // printf("%s",path[i]);
        // printf("\n");
    }

    int countfile = 0;
    for (int i = 0; i < foldercount; i++) // path matrisinden klasör dosyalarını ayirma
    {
        search_ptr = strstr(path[i], ".");
        if (search_ptr != NULL)
        {
        }
        else
        {
            for (int j = countfile; j < countfile + 1; j++)
            {
                sprintf(temp[j], path[i]);
                break;
            }
            countfile++;
        }
    }

    if (closedir(directory) == -1)
    {
        printf("Error closing directory.\n");
        exit(1);
    }

    for (int i = 0; i < countfile; i++) // klasor yolunu matrise kopylama
    {
        sprintf(uzanti[i], "C:\\Users\\Lenovo\\OneDrive\\Belgeler\\tufs\\Universite\\%s", temp[i]);
    }

    for (int i = 0; i < countfile; i++)
    {
        directory2 = opendir(uzanti[i]);
        if (directory2 == NULL)
        {
            printf("Error opening diretory.\n");
            exit(1);
        }

        int countbelge = 0;
        for (int j = 0; (entry = readdir(directory2)) != NULL; j++) // uzantidaki tüm belgeleri path matrisine kopyalama
        {
            sprintf(path[j], entry->d_name);
            countbelge++;
            // printf("%s",path[j]);
            // printf("\n");
        }

        for (int k = 0; k < countbelge; k++) // txt belgelerini temp matrisine kopyalama
        {
            search_ptr = strstr(path[k], ".txt");
            if (search_ptr != NULL)
            {
                for (int m = countxt; m <= countxt; m++) // txtlerin dosya yollarını pup matrisine kopyalama
                {
                    sprintf(temp[m], path[k]);
                    sprintf(pup[m], uzanti[i]);
                    strcat(pup[m], "\\");
                    strcat(pup[m], temp[m]);
                    countxt++;
                    break;
                }
            }
        }
    }
}



void word_search()
{
    char aranan[50];

    printf("\nAramak istediginiz kelimeyi girin: ");
    fflush(stdin);
    gets(aranan);

    char *search_ptr;

    FILE *dosya;

    int srch_count = 0;
    int str_kelime = 0;

    for (int i = 0; i < countxt; i++)
    {
        dosya = fopen(pup[i], "r"); // dosyayolunu atama
        str_kelime = 0;

        if (dosya == NULL)
        {
            printf("Error opening diretory.\n"); // oyle bi dosya yoksa NULL
            exit(1);
        }

        char buf[100];
        while (fgets(buf, 100, dosya) != NULL) // txtleri buf isimli değişkene atma
        {
            str_kelime++;
            search_ptr = strstr(buf, aranan);

            if (search_ptr != NULL)
            {
                srch_count++;
                printf("%s-%d.satir\n", temp[i], str_kelime);
            }
        }
    }
    printf("\n");
}



void tag_search()
{
    char arananetiket[50];
    char inputetiket[50];

    printf("\nAramak istediginiz etiketi girin:");
    fflush(stdin);
    gets(inputetiket); // kullanıcıdan aldığımız etiket

    sprintf(arananetiket, "[[");
    strcat(arananetiket, inputetiket); // kelimeyi etiket haline de çeviriyoruz
    strcat(arananetiket, "]]");

    char *search_ptr;

    FILE *dosya;

    int str_etiket;
    int tag_count = 0;
    printf("\n");

    for (int i = 0; i < countxt; i++)
    {
        dosya = fopen(pup[i], "r"); // dosyayolunu atama
        str_etiket = 0;
        if (dosya == NULL)
        {
            printf("Error opening diretory.\n"); // oyle bi dosya yoksa NULL
            exit(1);
        }

        char buf[100];
        while (fgets(buf, 100, dosya) != NULL) // txtleri buf isimli değişkene atma
        {
            str_etiket++;
            search_ptr = strstr(buf, arananetiket);
            if (search_ptr != NULL)
            {
                tag_count++;
                printf("%s-%d.satir\n", temp[i], str_etiket);
            }
        }
    }
    printf("\n%s etiketi %d kere geciyor\n", arananetiket, tag_count);
    printf("\n");
}



void tag_update()
{
    FILE *fp1, *fp2;
    char oldtag[MAX], fname[MAX];
    char string[MAX], newtag[MAX];
    char inputold[MAX], inputnew[MAX];
    char buf[] = "temp.txt", *ptr1, *ptr2;

    printf("lutfen guncellemek istediginiz etiketi giriniz: ");
    fflush(stdin);
    gets(inputold);

    sprintf(oldtag, "[[");
    strcat(oldtag, inputold); // kelimeyi etiket haline de çeviriyoruz
    strcat(oldtag, "]]");

    printf("lutfen yeni etiket adini giriniz: ");
    fflush(stdin);
    gets(inputnew);

    sprintf(newtag, "[[");
    strcat(newtag, inputnew); // kelimeyi etiket haline de çeviriyoruz
    strcat(newtag, "]]");

    for (int i = 0; i < countxt; i++)
    {

        sprintf(fname, pup[i]); // kullanıcıdan girdi dosyasını al

        fp1 = fopen(fname, "r");

        if (!fp1)
        {
            printf("Unable to open the input file!!\n");
        }

        fp2 = fopen(buf, "w");

        if (!fp2)
        {
            printf("Unable to open temporary file!!\n");
        }

        while (!feof(fp1)) // verilen kelimeyi dosyadan sil
        {
            strcpy(string, "\0"); // girdi dosyasından satır satır oku
            fgets(string, MAX, fp1);

            // silinecek kelimenin olup olmadıgını kontrol edin mevcut taranan satırda mevcut

            if (strstr(string, oldtag))
            { 
                ptr2 = string;
                while (ptr1 = strstr(ptr2, oldtag)) // kelimeden önce mevcut harfler degistirilecek
                {
                    while (ptr2 != ptr1)
                    {
                        fputc(*ptr2, fp2);
                        ptr2++;
                    }
                    ptr1 = ptr1 + strlen(oldtag); // degistirilecek kelimeyi atla
                    fprintf(fp2, "%s", newtag);
                    ptr2 = ptr1;
                }

                while (*ptr2 != '\0') // degistirilecek kelimeden sonra bulunan karakterler yazdır
                {
                    fputc(*ptr2, fp2);
                    ptr2++;
                }
            }
            else
            {
                // gecerli taranan satır degistirilmesi gereken kelimeye sahip mi bakılır
                fputs(string, fp2);
            }
        }

        fclose(fp1);
        fclose(fp2);

        remove(fname); // giris dosyasını kaldır
        rename(buf, fname); // dosya adını girmek icin gecici dosya adını yeniden adlandırın
    }

    for (int j = 0; j < countxt; j++)
    {
        char *src_ptr;
        char oldname[100];
        char bufname[100];
        char newname[100];
        char buffer[100];

        sprintf(buffer,temp[j]);
        int cikar=strlen(buffer);

        sprintf(oldname, pup[j]);

        src_ptr=strstr(buffer,inputold);
        if(src_ptr!=NULL)
        {
            sprintf(bufname,pup[j]);

            int size = strlen(oldname); // Total size of string
            bufname[size - cikar] = '\0';
            //printf("%s\n",bufname);
            sprintf(newname, bufname);
            strcat(newname, inputnew);
            strcat(newname,".txt");
            //printf("%s\n",newname);
            rename(oldname,newname);
            //printf("%s\n",oldname);
        }
    }
}



void yetim_update()
{
    FILE *oku;
    FILE *fileyaz;
    int t, i;

    fileyaz = fopen("temp.txt", "w"); // etiketlerin hepsini gecici bir txtye atıcaz

    for (int a = 0; a < countxt; a++)
    {
        oku = fopen(pup[a], "r");
        char str[300];
        while (fgets(str, 300, oku) != NULL)
        {
            for (i = 0; str[i] != '\0'; i++)
            {
            x:
                if (str[i] == '[' && str[i + 1] == '[') // etiket olma şartına bakıyoruz
                {
                    t = 0;
                    for (int j = i + 2; str[j] != '\0'; j++)
                    {
                        if (str[j] == ']' && str[j + 1] == ']')
                        {
                            t++;
                            for (int k = i + 2; k < j; k++)
                            {
                                if (k == j - 1)
                                {
                                    fputc(str[k], fileyaz); // etiketleri e.txtye yazdırdık
                                    fputc('\n', fileyaz);
                                }
                                else
                                {
                                    fputc(str[k], fileyaz);
                                }
                            }
                            if (t != 0)
                            {
                                i++;
                                j++;
                                goto x;
                            }
                        }
                    }
                }
            }
        }
    }
    fclose(fileyaz);
    fclose(oku);

    FILE *fileoku;
    char tuf[100];

    fileoku = fopen("temp.txt", "r"); // gecici txtden etiketleri geri cekiyoruz

    char etiketler[30][40];
    int say_etiket = 0;

    for (i = 0; fgets(tuf, 100, fileoku) != NULL; i++)
    {
        sprintf(etiketler[i], "%s", tuf); // temp.txtye yazdırdığımız etiketleri diziye attık
        say_etiket++;
    }
    int say = 0;
    int j;
    char gecici[30];
    int howmany = 0;

    for (i = 0; i < say_etiket; i++)
    {
        for (j = 0; j < say_etiket - 1; j++)
        {
            int result = strcmp(etiketler[j], etiketler[j + 1]); // alfabetik sıralattık ki aynı etiketleri bulmak kolay olsun
            if (result > 0)
            {
                strcpy(gecici, etiketler[j]);
                strcpy(etiketler[j], etiketler[j + 1]);
                strcpy(etiketler[j + 1], gecici);
            }
        }
    }
    fclose(fileoku);

    FILE *fileout;
    fileout = fopen("output.txt", "w"); // etiketleri output.txtye yazdırıyoruz
    fprintf(fileout, "Tekrar Sayisi\tEtiket Adi\n");
    char qpr[50];

    for (i = 0; i < say_etiket; i += say)
    {
        say = 0;
        for (j = 0; j < say_etiket; j++)
        {
            if (strcmp(etiketler[i], etiketler[i + j]) == 0)
            {
                say++;
            }
        }

        sprintf(etiketcmp[q], "%s", etiketler[i]);
        fprintf(fileout, "\t%d\t%s", say, etiketler[i]);
        q++;
    }
    fclose(fileout);

    char txtad[30][40];
    char yetim[30][40];
    const char *ayrac = "."; // sondaki .txtyi atmak için strtok kullanıcaz
    for (int i = 0; i < countxt; i++)
    {
        char *kelime = strtok(temp[i], ayrac);
        sprintf(txtad[i], "%s", kelime);
    }
    for (int i = 0; i < countxt; i++)
    {
        strcat(txtad[i], "\n");
    }

    int sayac_yetim = 0;
    int a = 0;
    for (int i = 0; i < q; i++)
    {
        sayac_yetim = 0;
        for (int j = 0; j < countxt; j++)
        {
            int sonuc = strcmp(txtad[j], etiketcmp[i]);
            if (sonuc == 0)
            {
                sayac_yetim++;
            }
        }
        if (sayac_yetim == 0)
        {
            sprintf(yetim[a], "%s", etiketcmp[i]);
            a++;
        }
    }

    FILE *yetimyaz;
    yetimyaz = fopen("output.txt", "a");

    fprintf(yetimyaz, "\nYetim Etiketler\n");

    for (int i = 0; i < a; i++)
    {
        fprintf(yetimyaz, "%s", yetim[i]);
    }
    fclose(yetimyaz);
}



int main()
{
    int islem;
    char dosyauzanti[250];
    pupcreating();
    
    printf("Dokuwiki Kocaeli Üniversitesi\n");
back:
    printf(" [1]-Dosya Listele\n [2]-Kelime Ara\n [3]-Etiket Ara\n [4]-Etiket Güncelle\n");

    printf("lütfen yapmak istediginiz islemi giriniz: ");
    scanf("%d", &islem);

    switch (islem)
    {
    case 1:
        printf("\n");
        file_reader();
        printf("\n");
        entry_file(dosyauzanti);
        printf("\n");
        entry_txt(dosyauzanti);
        printf("\n");
        goto back;
        break;

    case 2:
        printf("\n");
        word_search(pup);
        printf("\n");
        goto back;
        break;

    case 3:
        printf("\n");
        tag_search(pup);
        printf("\n");
        goto back;
        break;

    case 4:
        printf("\n");
        tag_update();
        yetim_update();
        break;

    default:

        break;
    }

    return 0;
}