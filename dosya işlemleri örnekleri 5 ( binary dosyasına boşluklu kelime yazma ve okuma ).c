#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

struct calisan
{
    char isim[20];
    int yas;
    float ucret;
};



int main ()
{

FILE *ptr;
ptr=fopen("kayit2.txt" , "wb" );


struct calisan emir;
strcpy(emir.isim,"emir");
emir.yas=20;
emir.ucret=20000;

printf("%s",emir.isim);
printf("%d",emir.yas);
printf("%f",emir.ucret);


fwrite(&emir,sizeof(emir),1,ptr);
fwrite(&emir,sizeof(emir),1,ptr);
fwrite(&emir,sizeof(emir),1,ptr);


    return 0;
}