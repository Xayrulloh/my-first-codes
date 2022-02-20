#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/*int main()
/*{
    // strcmp--->solishtirish;
    /*char str[]="salom", str2[]="nma",str3[]="salom";
    int natija;
    natija=strcmp(str,str2);
    printf("strcmp--->%d\n",natija);*/
    //strcat--->join yani qoshib qoyish;
    /*char str[]="salom", str2[]=" nma",str3[]=" qivossan";
    strcat(str,str2);
    strcat(str,str3);
    puts(str);*/
    //strcopy----->copy qiberadi;
    /*char ism[]="aloo";
    char ism2[5];
    strcpy(ism2,ism);
    printf("------> %s",ism2);*/
    //strlen---->uzunlik;
    /*char a[10]="hehehe";
    char b[10]={'h','e','h','e','h','e','\0'};
    printf("uzunlik----> a=%d\n",strlen(a));
    printf("uzunlik----> b=%d\n",strlen(b));*/
    //stupr  strlwr------ katta,kichik;
    /*char ism[10]="LALALA";
    char ism2[15]="c language";
    printf("%s-----lower\n",strlwr(ism));
    printf("%s-----upper",strupr(ism2));*/
    //strrev----reverse;
    /*char ism[15]="texnika";
    printf("teskarisi----%s",strrev(ism));*/
    // 1-misol
    /*char a[10]="2002",d[10];
    int natija,natija1;
    char b[10]="Xayrulloh";
    char c[10];
    scanf("%s",&d);
    scanf("%s",&c);
    natija=strcmp(a,d);
    natija1=strcmp(b,c);
    if(natija==0&&natija1==0)
    {
        printf("topdingiz");
    }
    else
    {
        printf("notori");
    }
}*/

    //2-misol
/*struct kutubxona{
    char nomi[20];
    int yili;
    char avtor[20];
    char janri[20];
    }K1,K2;
void olibkorsat(struct kutubxona K1)
{
    printf("kitobning malumotlarini shu ketma-ketlikda kiriting:\nnomi:\nyili:\navtor:\njanri\n");
    scanf("%s %d %s %s",&K1.nomi,&K1.yili,&K1.avtor,&K1.janri);
    printf("kitobning malumoti:\n");
    printf("nomi: %s\nyili: %d\navtor: %s\njanri %s\n",K1.nomi,K1.yili,K1.avtor,K1.janri);
}
int main()
{
    struct kutubxona;
    olibkorsat(K1);
    olibkorsat(K2);
}*/
//najot talim filiallari haqida struct
//uy ishi
/*struct najot_talim{
    char nomi[30];
    char nomeri[30];
    char manzil[30];
    char darajasi[60];
    char vaqti[20];
}Xadra,Chilonzor,Choponota;
void xadra1(struct najot_talim filiallari)
{
    strcpy(Xadra.nomi," nomi:Xadra filiali\n");
    strcpy(Xadra.nomeri,"nomer:(90)008-82-13\n");
    strcpy(Xadra.manzil,"manzil:Xadra tomonda\n");
    strcpy(Xadra.darajasi,"darajasi:zor(agar wifi tuzatilsa)\n");
    strcpy(Xadra.vaqti,"vaqti:07:00 dan 22:00 gacha\n");
    printf("%s %s %s %s %s",Xadra.nomi,Xadra.nomeri,Xadra.manzil,Xadra.darajasi,Xadra.vaqti);
}
void chilonzor2(struct najot_talim filiallari)
{
    strcpy(Chilonzor.nomi,"\n nomi:Chilonzon filiali\n");
    strcpy(Chilonzor.nomeri,"nomer:(90)008-82-13\n");
    strcpy(Chilonzor.manzil,"manzil:Chilonzon tomonda\n");
    strcpy(Chilonzor.darajasi,"darajasi:zor(agar wifi tuzatilsa)\n");
    strcpy(Chilonzor.vaqti,"vaqti:07:00 dan 22:00 gacha\n");
    printf("%s %s %s %s %s",Chilonzor.nomi,Chilonzor.nomeri,Chilonzor.manzil,Chilonzor.darajasi,Chilonzor.vaqti);
}
void choponota3(struct najot_talim filiallari)
{
    strcpy(Choponota.nomi,"\n nomi:Choponota filiali\n");
    strcpy(Choponota.nomeri,"nomer:(90)008-82-13\n");
    strcpy(Choponota.manzil,"manzil:Choponota tomonda\n");
    strcpy(Choponota.darajasi,"darajasi:zor(agar wifi tuzatilsa)\n");
    strcpy(Choponota.vaqti,"vaqti:07:00 dan 22:00 gacha\n");
    printf("%s %s %s %s %s",Choponota.nomi,Choponota.nomeri,Choponota.manzil,Choponota.darajasi,Choponota.vaqti);
}
int main()
{
    int a;
    struct najot_talim;
    printf("Najot talimning qaysi filiali haqida bilishni hohlisiz\nXadra filiali haqida bilishni hohlasangiz 1 ni bosing\nChilonzor filiali haqida bilishni hohlasangiz 2 ni bosing\nChoponota filiali haqida bilishni hohlasangiz 3 ni bosing\n");
    scanf("%d",&a);
    if(a==1)
    {
        xadra1(Xadra);
    }
    else if(a==2)
    {
        chilonzor2(Chilonzor);
    }
    else if(a==3)
    {
        choponota3(Choponota);
    }
    else
    {
        printf("bunday filial yoq");
    }
}*/
int main()
{
    /*for(int b=20,c=1;b<1000000,c<=1;b++)
    {
        if(b%1==0&&b%2==0&&b%3==0&&b%5==0&&b%7==0&&b%11==0&&b%13==0&&b%16==0&&b%17==0&&b%18==0&&b%19==0)
        {
             printf("%d\n",b);
             c++;
        }
    }*/
    /*int e;
    scanf("%d",&e);
    for(int b=1,a=0,c=1;b<999999999,c<=1;b++)
        {
            for(int d=1;d<=e;d++){
            if(b%d==0)
            {
                 a++;
            }
            if(a==e)
                 {
                     printf("%d",b);
                     c++;
                 }
            }
            a=0;
        }*/
        /*int pul=100,mol=50,qoy=10,tovuq=3,sanoq=0;
        for(int a=1;a<=pul;a++){
            for(int b=1;b<=pul;b++){
                if((pul-mol*a-qoy*b)%tovuq==0){
                printf("%d %d %d\n",a,b,(pul-mol*a-qoy*b)/tovuq);
                a=b=pul;
                }
                sanoq++;
            }
        }
        printf("%d",sanoq);*/
        // sonni xonalaga ajratish
        /*nt e=32768,d=0;
        while(e>0){
            d+=e%10;
            printf("%d\n",d);
            e=e/10;
        }
        printf("%d",d);*/
        // problem 16
        /*long a,b,e=1,d=0;
        scanf("%ld %ld",&a,&b);
        for(int c=1;c<=b;c++){
            e=a*e;
            printf("%ld\n",e);
        }
        while(e>0){
            d+=e%10;
            e=e/10;
        }
        printf("%ld",d);*/
        long a,b,e=0,d=0;
        scanf("%ld",&a);
       for(int i=1;i<=9;i++){

        for(int i=1;i<=9;i++){

         for(int i=1;i<=9;i++){

         for(int i=1;i<=9;i++){

             }
           }
          }
        }
        printf("%ld",e);
}











