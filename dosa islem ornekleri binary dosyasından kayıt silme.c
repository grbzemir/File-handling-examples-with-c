#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

struct calisan
{
    char isim[20];
    int yas;
    int maas;
};


int main ()
{

struct calisan s1,s2;
FILE *ptr,*ptr2;
ptr=fopen("calian.txt","a");

if(ptr!=NULL)
{
    printf("isim giriniz: ");
    scanf("%s",s1.isim);
    printf("yas giriniz: ");
    scanf("%d",&s1.yas);
    printf("maas giriniz: ");
    scanf("%d",&s1.maas);

    fprintf(ptr,"%s %s %d %d",s1.isim,s1.yas,s1.maas);
    fclose(ptr);

    printf("Kayit basariyla eklendi.\n");

}

char isim2[20];
printf("silmek istediginiz ismi giriniz: ");
scanf("%s",isim2);
printf("isim alındı: %s",isim2)

ptr=fopen("calisan.txt","r");
ptr2=fopen("yedek.txt","w");

  if(ptr!=NULL && ptr2!=NULL)
  {  
    printf("if icindeeyim\n %s",isim2);
    while(fscanf(ptr,"%s %s %d %d",s2.isim,&s2.yas,&s2.maas)!=EOF)
    {
        if( !strcmp(s2.isim,isim2)) // strcmp stringleri karsilastirir. esitse 0 dondurur.
        printf(" %s isimli kisi kayit edilmedi \n",s2.isim);
        else
        {
        fprintf(ptr2,"%s %s %d %d",s2.isim,s2.yas,s2.maas);
    }
    
    fclose(ptr);
    fclose(ptr2);

    remove("calisan.txt"); // calisan.txt dosyasini siler.
    rename("yedek.txt","calisan.txt"); // yedek.txt dosyasini calisan.txt olarak degistirir.

    printf("okuma islemi basariyla tamamlandi.\n");
    }
    }

    return 0;
}