#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>


int main ()
{

FILE *ptr;

char ad[20];
int yas;
float ucret;
int i;

ptr=fopen("kayit.txt","w");

if(ptr!=NULL)
{
    for(i=0;i<3;i++)
    {
        printf("isim giriniz: ");
        scanf("%s",ad);
        printf("yas giriniz: ");
        scanf("%d",&yas);
        printf("ucret giriniz: ");
        scanf("%f",&ucret);


        fprintf(ptr," %s\t%d\t isimniz: %s\n",ad,yas,ucret);

    }
    printf("kayit islemi tamamlandi\n");
    fclose(ptr);

}

char ad2[20];
int yas2;
float ucret2;

ptr=fopen("kayit.txt","r");
if(ptr!=NULL)
{
    fgets(ad2,20,ptr);
    fscanf(ptr,"%s %d %f",&ad2,&yas2,&ucret2);
    printf(" %s\t%d\t isimniz: %s\n",ad2,yas2,ucret2);

    fclose(ptr);

}

    return 0;
}