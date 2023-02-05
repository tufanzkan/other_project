#include <stdio.h>
#include <string.h>

// Tufan Özkan Q8 210201078

struct student
{
    char name_surname[50];
    int clas;
    float ort;
};
struct new
{
    char name_surname[50];
    int clas;
    float ort;
};
struct tmp
{
    char tempname_surname[50];
    int tempclas;
    float temport;
};
void SiraliEkle(struct new newstudent,struct student list[10])
{
    struct tmp temp;
    strcpy(list[10].name_surname,newstudent.name_surname);
    list[10].clas=newstudent.clas;
    list[10].ort=newstudent.ort;
    for(int i=0;i<11;i++)
    {
        for(int j=i+1;j<11;j++)
        {
            if(list[i].clas<list[j].clas)
            {
                strcpy(temp.tempname_surname,list[i].name_surname);
                temp.tempclas=list[i].clas;
                temp.temport=list[i].ort;
                strcpy(list[i].name_surname,list[j].name_surname);
                list[i].clas=list[j].clas;
                list[i].ort=list[j].ort;
                strcpy(list[j].name_surname,temp.tempname_surname);
                list[j].clas=temp.tempclas;
                list[j].ort=temp.temport;
            }
        }
    }
    for(int i=0;i<11;i++)
    {
        for(int j=i+1;j<11;j++)
        {
            if(list[i].clas==list[j].clas)
            {
                if(list[i].ort<list[j].ort)
                {
                    strcpy(temp.tempname_surname,list[i].name_surname);
                    temp.tempclas=list[i].clas;
                    temp.temport=list[i].ort;
                    strcpy(list[i].name_surname,list[j].name_surname);
                    list[i].clas=list[j].clas;
                    list[i].ort=list[j].ort;
                    strcpy(list[j].name_surname,temp.tempname_surname);
                    list[j].clas=temp.tempclas;
                    list[j].ort=temp.temport;
                }
            }
        }
    }
    for(int i=0;i<11;i++)
    {
        printf("%d-)%s %d %.2f",i+1,list[i].name_surname,list[i].clas,list[i].ort);
        printf("\n");
    }
}
void main()
{
    struct student list[10];
    struct tmp temp;
    struct new newstudent;
    for(int i=0;i<10;i++)
    {
        printf("Ad-Soyad,Sinif ve Ortalama giriniz=");
        scanf("%s %d %f",list[i].name_surname,&list[i].clas,&list[i].ort);
    }
    printf("Yeni gelen ogrencinin bilgilerini giriniz");
    scanf("%s %d %f",newstudent.name_surname,&newstudent.clas,&newstudent.ort);
    SiraliEkle(newstudent,list);

    return 0;
}