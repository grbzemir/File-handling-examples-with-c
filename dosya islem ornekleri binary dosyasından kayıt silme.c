#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

struct calisan
{
    char isim[20];
    char soyisim[20];
    int yas;
    int maas;
};

int main ()
{

struct calisan s1,s2;
FILE *ptr1,*ptr2;
ptr1=fopen("calisan.dat","wb");



if(ptr1!=NULL)
{
    printf("isim giriniz: ");
    scanf("%s",s1.isim);
    printf("soyisim giriniz: ");
    scanf("%s",s1.soyisim);
    printf("yas giriniz: ");
    scanf("%d",&s1.yas);
    printf("maas giriniz: ");
    scanf("%d",&s1.maas);

    fwrite(&s1,sizeof(struct calisan),1,ptr1);
    fclose(ptr1);

    printf("Kayit basariyla eklendi.\n");
}

ptr1=fopen("calisan.dat","rb");
ptr2=fopen("yedek.dat","wb");

char isim2[20];
printf("silmek istediginiz ismi giriniz: ");
scanf("%s",isim2);

if(ptr1!=NULL && ptr2!=NULL)
{
    while(fread(&s2,sizeof(struct calisan),1,ptr1)!=NULL)
    {
        if( strcmp(s2.isim,isim2)) // strcmp stringleri karsilastirir. esitse 0 dondurur.
        fwrite(&s2,sizeof(struct calisan),1,ptr2);
        
    }
    fclose(ptr1);
    fclose(ptr2);
}
    remove("calisan.dat"); // calisan.txt dosyasini siler.
    rename("yedek.dat","calisan.dat"); // yedek.txt dosyasini calisan.txt olarak degistirir.

}




ptr1=fopen("calisan.dat","rb");

if(ptr1!=NULL)
{
    while(fread(&s1,sizeof(struct calisan),1,ptr1)!=NULL)
    {
        printf("%s %s %d %d",s1.isim,s1.soyisim,s1.yas,s1.maas);
    {
    fclose(ptr1);

    printf("Kayit basariyla eklendi.\n");
}
    
}


    return 0;
}