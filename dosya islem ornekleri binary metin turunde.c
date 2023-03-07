#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>


// text metin türünde fprintf,fscanf kullanılır modları =w r a
// binary metin türünde fwrite,fread kullanılır modları =wb rb a+b
// rastgele erişim için fseek kullanılır



int main ()
{
  int s1, s2, s3,s4;
    s1 = 1;
    s2 = 2;
    s3 = 3;
    s4 = 4;

FILE *ptr;
ptr = fopen ("sayilar2.dat", "wb");	// binary türünde oldugu için metin türünde yazma modunda açılır
if (ptr == NULL)
printf("dosya olusturulmadi\n");
else
{
    fwrite (&s1, sizeof (int), 1, ptr); // s1 değişkeninin boyutu kadar 1 tane yaz    1 adet kayıtı pointerin göstedigi adrese yaptım
    printf("kayit islemi tamam dosya olusturuldu\n");

    fwrite (&s2, sizeof (int), 1, ptr); // s2 değişkeninin boyutu kadar 1 tane yaz
    printf("kayit islemi tamam dosya olusturuldu\n");

    fwrite (&s3, sizeof (int), 1, ptr); // s3 değişkeninin boyutu kadar 1 tane yaz
    printf("kayit islemi tamam dosya olusturuldu\n");

    fwrite (&s4, sizeof (int), 1, ptr); // s4 değişkeninin boyutu kadar 1 tane yaz
    printf("kayit islemi tamam dosya olusturuldu\n");

    fclose (ptr);

}

ptr=fopen("sayilar2.dat","rb"); // binary türünde oldugu için metin türünde okuma modunda açılır

if(ptr!=NULL)
{
    while(fread(&s1,sizeof(int),1,ptr)!=EOF)
    {
        printf("sayi: %d\n",s1);
    }

    fread(&s1,sizeof(int),1,ptr);
    printf("sayi: %d\n",s1);
    fread(&s2,sizeof(int),1,ptr);
    printf("sayi: %d\n",s2);
    fread(&s3,sizeof(int),1,ptr);
    printf("sayi: %d\n",s3);
    fclose(ptr);
    fread(&s4,sizeof(int),1,ptr);
    printf("sayi: %d\n",s4);
    fclose(ptr);

}



    return 0;
}