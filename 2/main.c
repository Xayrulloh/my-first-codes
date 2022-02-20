#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
/*{
    char c[30];
    int a,b;
    printf("son kiriting");
    scanf("%d",&a);
    for(;strcmp(c,"yoq")!=0;){
        printf("yana son kiritishni hohlases xa deb yozing, yoki yoq\n");
        scanf("%s",&c);
        if(strcmp(c,"xa")==0){
        printf("son kiriting");
        scanf("%d",&b);
        a+=b;}
    }
        printf("qiymati %d",a);
}*/
/*{
    int a,b,c;
    printf("son kiriting");// yulduzli narsa
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        for(c=1;c<=b;c++)
            printf("*");
            printf("\n");
    }
}*/
/*{
    for(int a=1;a<=10;++a){// karra jadval
        for(int b=1;b<=10;++b){
            printf("%d*%d=%d\t",b,a,a*b);}
    printf("\n");}
}*/
/*{
    int a,b,c;
    printf("son kiriting");//yulduzlar bn uchburchak
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        for(c=1;c<=a-b;c++)
            printf(" ");
        for(c=1;c<=2*b-1;c++)
            printf("*");
        printf("\n");
    }
}*/
/*{
    int a,b,c;//vazifa 1
    printf("son kiriting\n");
    scanf("%d",&a);
    for(c=0,b=0;b!=a; c++){
        a=a/10;
    }
    printf("kiritgan soningiz %d xonali",c);
}*/
/*{
    int a,b;//vazifa 2
    printf("son kiriting");
    scanf("%d",&a);
    for(;a!=0;){
        b=a%10;
        a /= 10;
        printf("%d",b);
    }
}*/
/*{
    int a,b,d=1;//vazifa 3
    printf("2 ta son kiriting");
    scanf("%d %d",&a,&b);
    for(int c=1;c<=b;c++){
        d *= a;
    }
    printf("%d",d);
}*/
/*{
    int a,c=0;
    printf("son kiriting\n");//vazifa 5
    scanf("%d",&a); // 12
    for(int b=1;b<a;b++){// 1 2 3
            if(a%b==0)
            c=c+b;}
            if(c==a)
                printf("mukammal\n");
            else
                printf("mukammal emas\n");
}*/
/*{
   int a,c=0;
    printf("son kiriting\n");//vazifa 4
    scanf("%d",&a); // 12
    for(int b=1;b<a;b++){// 1 2 3
            if(a%b==0)
                printf("%d\n",b);
}
}*/
/*{
    int a,c=0;
    printf("son kiriting\n");//vazifa 6
    scanf("%d",&a);//13
    for(int b=1;b<=a;b++){
        if(a%b==0)
        c++;
        if(c==2)
            printf("tub son");
        else
            printf("tub son emas");
}
}*/
/*{
    int a;
    printf("son:\n");//vazifa 7
    scanf("%d",&a);
    for(int b=2;b<a;b++){
        if(b==2||b==3||b==5)
        printf("tub son %d\n",b);
        else if(b%b==0&&b%1==0&&b%2!=0&&b%3!=0&&b%4!=0&&b%5!=0&&b%7!=0&&b%8!=0&&b%9!=0)
        printf("tub sonla %d\n",b);
    }
}*/
/*{
    int a,b;
    printf("2 ta son kiriting\n");//vazifa 8
    scanf("%d %d",&a,&b);
    for(int c=1;c<=b;c++){
        printf("*");
        for(int d=2;d<=a;d++)
            printf("*");
            printf("\n");
    }
}*/
/*{
    int a,b;
    printf("2 ta son kiriting\n");//vazifa 9
    scanf("%d %d",&a,&b);
    for(int c=1;c<=b;++c){
        for(int d=1;d<=a;++d){
            if(c==1||c==b||d==1||d==a){
            printf("*");}
            else
                printf(" ");
    }
        printf("\n");
}
}*/
/*{
    for(int a=18;a<=96;a++){// A1
        if(a%14==0)
            printf("14 ga bolinadigani %d\n",a);
    }
}*/
/*{
    for(int a=7;a<=78;a++){//A2
        if(a%2==0&&a%3==0&&a%5==0)
            printf("2 ga 3 ga va 5 ga bolinadigan sonlar %d\n",a);
    }
}*/
/*{
    for(int a=45;a<=255;a++){//A3
        if(a%16==0&&a%48!=0)
            printf("16 ga bolinadigan lekin 48 bolinmaydigan sonlar royhati %d\n",a);
    }
}*/
/*{
     for(int a=62;a<=112;a++){//A4
        if(a%9==0||a%11==0)
            printf("9 ga yoki 11 ga bolinadigan sonlar royhati %d\n",a);
     }
}*/
/*{
    int a,b;
    printf("2 ta son kiriting\n");//A5
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("%d",a-b);
    else if(b>a)
        printf("%d",b-a);
    else
        printf("ular teng");
}*/
/*{
    int a,b,c;
    printf("2 ta son kiriting");//A6
    scanf("%d %d",&a,&b);
    if(a>b)
    c==a;
    for(;a<=b;a++){
        if(a<=b)
        printf("%d\n",a);
    else if(b<=a)
        printf("%d\n",b);
    }
}*/
/*{
    int c=0;
    for(int a=45;a<=120;a++){//A7
        if(a%18==0)
            c += a;
    }
    printf("%d",c);
}*/
/*{
    int c=1;
    for(int a=2;a<=19;a++){//A8
        if(a%3==0)
            c *= a;
    }
    printf("%d",c);
}*/
/*{
    int a,b;
    printf("son kirit\n");//A9
    scanf("%d",&a);
    b=a*2;
    for(;a<=b;a++){
        printf("%d\n",a);
    }
}*/
/*{
    int c=0;
    for(int a=34;a<=88;a++){//A10
        if(a%7==0&&a%2==0)
        c += a;
    }
      printf("%d\n",c);
}*/
/*{
    int a;
    printf("son kirit");//10
    scanf("%d",&a);
    printf("%d",abs(a));
}*/
/*{
    int a,b;
    printf("2 ta son kirit");//11
    scanf("%d %d",&a,&b);
    printf("%d",abs(a-b));
}*/
/*{
    for(int a=78;a<=112;a++){//12
        if(a%5==0)
            continue;
        printf("%d\n",a);
    }
}*/
/*{
    for(int a=29;a<=55;a++){//13
        if(a%6==0)
            continue;
        printf("%d\n",a);
    }
}*/
/*{
    for(int a=42;a<=77;a++){//14
        if(a%5==0&&a%3==0)
            continue;
        printf("%d\n",a);
}
}*/
/*{
    int b=0;
    for(int a=8;a<=18;a++){//14
        if(a%4==0)
            continue;
        b +=a;}
        printf("%d\n",b);
}*/
/*{
    for(int a=15;a<=22;a++){//A15
        if(a%2==1)
            printf("%d\n",a);
        if(a%2==0)
            printf("-%d\n",a);
    }
}*/
/*{
    int n,a;
    printf("son kirit");//A16
    scanf("%d",&n);
    a=n+6;
    for(;n<=a;n++){
        printf("%d\n",n);
    }
}*/
/*{
    int n,a;
    printf("son kirit");//A17
    scanf("%d",&n);
    a=n-12;
    for(;a<=n;n--){
        printf("%d\n",n);
    }
}*/
/*{
    int n;
    printf("son kirit");//A18
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        printf("%d",a);
    }
}*/
/*{
    int n,a,b;
    printf("son kirit");//A19
    scanf("%d",&n);
    a=n*2;
    b=n-a;
    for(;b<=n;b++)
        printf("%d\n",b);
}*/
/*{
    int a,b;
    printf("2 ta son kirit");//A20
    scanf("%d %d",&a,&b);
    for(;a<=b;a++){
        printf("%d\n",a);}
    for(;b<=a;b++){
        printf("%d\n",b);}
}*/
/*{
    int a,b;
    printf("2 ta son kirit");//A21
    scanf("%d %d",&a,&b);
    for(;a<=b;b--){
        printf("%d\n",b);}
    for(;b<=a;a--){
        printf("%d\n",a);}
}*/
/*{
    for(char a[5];strcmp(a,"yoq")!=0,strcmp(a,"y")!=0;){//A22
        printf("O'yinni davom etirasizmi?");
        scanf("%s",&a);
    }
    printf("TUGADI!");
}*/
/*{
    int sonlar[6]={};
    printf("son kirit");
    for(int a=0;a<6;a++){
        scanf("%d",&sonlar[a]);
        for(int b=1;b<6;b++){
        }
        printf("%d\n",sonlar[a]);
    }
}*/
/*{
    int sonlar[7]={4,12,54,-4,9,45,88};
    for(int a=1;a<7;a+=2){
        printf("%d\n",sonlar[a]);
    }
}*/
/*{
    int son[7]={};
    printf("son kiriting");
    for(int a=0;a<7;a++){
        scanf("%d",&son[a]);
        }
    for(int a=0;a<7;a++){
        if(son[a]%2==0)
        printf("juft son %d\n",son[a]);
        else
        printf("toq son %d\n",son[a]);
        }
}*/
/*{
    int son[7]={},b=0;
    printf("son kiriting");
    for(int a=0;a<7;a++){
        scanf("%d",&son[a]);
        }
    for(int a=0;a<7;a++){
        if(son[a]%2==1)
        b+= son[a];}
    printf("toq sonlar yigindisi %d\n",b);
}*/
/*{
    int a,b;
    printf("2 ta son kiriting\n");//diagonaligayam yurgan
    scanf("%d %d",&a,&b);
    for(int c=1;c<=b;++c){
        for(int d=1;d<=a;++d){
            if(c==1||c==b||d==1||d==a||c==d){
            printf("*");}
            else
                printf(" ");
    }
        printf("\n");
}
}*/
/*{
    int a;
    printf("son:\n");
    scanf("%d",&a);
    for(int b=1;b<=a;++b){//qisqarogi
        for(int c=1;c<=a;++c){
            if(b==1||b==a||c==1||c==a||b==c){
                printf("*");}
            else
                printf(" ");
    }
        printf("\n");
}
}*/
/*{
    int a,d,e;
    printf("son:\n");
    scanf("%d",&a);
    d=a;
    e=a/2;
    for(int boyi=1;boyi<=a;++boyi,--d){//varrak
        for(int eni=1;eni<=a;++eni){
            if(boyi==1||boyi==a||eni==1||eni==a||boyi==eni||d==eni||e==eni||e==boyi){
                printf("*");}
            else
                printf(" ");
    }
        printf("\n");
}
}*/
/*{
    printf("son kirit\n");//B3
    for(int a,b;a<=10;--a){
        scanf("%d",&b);
        if(b<0){
            printf("%d,",b);
        }
    }
}*/
/*{
    int c=0;
    printf("son kiriting\n");
    for(int a=1,b;a<=8;a++){
        scanf("%d/n",&b);
        c += b;
    }
    printf("%d",c);
}*/
/*{
   int a;
   printf("son:");
   scanf("%d",&a);
   for(int boyi=0;boyi<a;boyi++){
    for(int eni=1;eni<=a-boyi;eni++)
        printf(" ");
    for(int eni=1;eni<=boyi*2-1;eni++)
        printf("*");
    printf("\n");
   }
}*/
/*{
    int a;
    printf("son:\n");
    scanf("%d",&a);
    for(int boyi=1;boyi<=a;++boyi){//qisqarogi
        for(int eni=1;eni<=a;++eni){
            if(boyi==1||boyi==a||eni==1||eni==a||eni<=a-boyi){
                printf("*");}
            else
                printf(" ");
    }
        printf("\n");
}
}*/
/*{
    int a;
    printf("son:\n");
    scanf("%d",&a);
    for(int b=1;b<=a;++b){//qisqarogi
        for(int c=1;c<=a;++c){
            if(b==1||b==a||c==1||c==a||b==c||c<=2*b){
                printf("*");}
            else
                printf(" ");
    }
        printf("\n");
}
}*/
/*{
    int m[7]={1,2,8,-1,0,45,87};
    int n[7]={};
    for(int a=0;a<7;a++){
    n[a]=m[a]*2;
    printf("%d\n",n[a]);
}
}*/
/*{
    int a[5]={};
    int b=0;
    printf("son:");
    for(int b=0;b<5;b++){
        scanf("%d",&a[b]);
        if(a[b]==5)
            printf("ha");
        else
            printf("yoq");break;}
}*/
/*{
    int a[5]={};
    printf("son:");
    for(int b=1;b<=5;b++)
    {
        scanf("%d",&a[b]);
    }
    for(int b=5;b>0;b--)
    {
        printf("%d",a[b]);
    }
}*/
/*{
    int a[10]={},nechta_element;
    printf("son:");
    for(int b=1;a[10]>=b;b++)
    {
        scanf("%d",&a[b]);
    }
    nechta_element=sizeof(a)/sizeof(a[0]);
    printf("%d ta element bor ",nechta_element);
}*/
/*{
    int a[10]={};
    int sanoq=0;
    printf("son kiriting");//C1
    for(int b=0;b<10;b++)
    {
        scanf("%d",&a[b]);
    }
    for(int b=0;b<10;b++){
        if(a[b]==5){
            sanoq++;
        }
        }
    if(sanoq>0){
        printf("HA");
    }
    else
        printf("yoq");
}*/
/*{
    int a[10]={};
    printf("son:");
    for(int b=0;b<10;b++)//C2
    {
        scanf("%d",&a[b]);
    }
    for(int b=0;b<10;b++)
    {
        if(a[b]==5)
            printf("%d inchi indeksda 5 bor\n",b);
    }
}*/
/*{
    int a[10]={};
    printf("son:");
    for(int b=0;b<10;b++)//C3
    {
        scanf("%d",&a[b]);
    }
    for(int b=0;b<10;b++)
    {
        printf("\t%d\n",a[b]+10);
    }
}*/
/*{
    int a[10]={};
    int b[10]={};
    printf("son:");
    for(int c=0;c<10;c++)//C4
    {
        scanf("%d",&a[c]);
        b[c]=a[c];
    }
    for(int c=0;c<10;c++)
    {
        printf("\t%d\n",b[c]);
    }
}*/
/*{
    int a[10]={};
    int yarmi=0;
    int Yarmi=0;
    printf("son:");
    for(int b=0;b<10;b++)//C5
    {
        scanf("%d",&a[b]);

        if(b<5)
            yarmi += a[b] ;
        else
            Yarmi += a[b];
    }
    printf("%d",yarmi-Yarmi);
}*/
/*{
    int a[10]={};
    int musbat=0;
    printf("son:\n");
    for(int b=0;b<10;b++)//C6
    {
        scanf("%d",&a[b]);
        if(a>0)
            musbat += a[b];
        else
            musbat -= a[b];
    }
    printf("%d",musbat);
}*/
/*{
    int a[10]={};
    printf("son:\n");
    for(int b=0;b<10;b++)//C7
    {
        scanf("%d",&a[b]);
        if(a[b]>a[0])
            a[0]=a[b];
    }
    printf("eng kottasi %d",a[0]);
}*/
/*{
    int a[10]={};
    printf("son:\n");
    for(int b=0;b<10;b++)//C8
    {
        scanf("%d",&a[b]);
        if(a[b]%2==0)
            printf("%d\n",a[b]*2);
        else
            printf("%d\n",a[b]-2);
    }
}*/
/*{
    int a[10]={};
    printf("son:\n");
    for(int b=0;b<10;b++)//C10
    {
        scanf("%d",&a[b]);
        if(a[b]>a[0])
            a[1]=a[b];
        if(a[b]<a[1])
            a[0]=a[b];
    }
    printf("%d",a[1]-a[0]);
}*/
/*{
    int a[10]={};
    int c=0;
    printf("son:");
    for(int b=0;b<10;b++)//C11
    {
        scanf("%d",&a[b]);
        c += a[b];
    }
    printf("%d",c/10);
}*/
/*{
   int a[10]={};
   int c=0;
   printf("son:");
   for(int b=0;b<10;b++)//C12
   {
        scanf("%d",&a[b]);
        if(a[b]==7)
            c++;
   }
        if(c>0)
            printf("bor");
        else
            printf("yoq");
}*/
/*{
    int a[10]={};
    int kotta1=0,kotta2=0;//yarimdan 2 yarmini ayiriw
    printf("son:");
    for(int b=0;b<10;b++)
    {
        scanf("%d",&a[b]);
    }
    for(int b=0;b<10;b++)
    {
        if(kotta1<a[b]&&b<5)
            kotta1 = a[b];
        else if(kotta2<a[b])
            kotta2 =a[b];
    }
    printf("%d",kotta1-kotta2);
}*/
/*{
    int my_array[10]={3,5,-4,0,15,88,-2,-9,7,-1};
    int array[9]={};
    int d;
    printf("son:");
    scanf("%d",&d);
    for(int b=0,c=0;b<10;b++,c++)
    {
        if(b==d&&c--)
            continue;
        else
            array[c]=my_array[b];
    }
        for(int b=0;b<9;b++)
            printf("%d\n",array[b]);

}*/
/*{
    int a[10]={};
    int sanoq=0;
    printf("son:");
    for(int b=0;b<10;b++)
    {
        scanf("%d",&a[b]);
    }
    for(int b=0,c=0,d=1;b<5;b++,c+=2,d+=2)
    {
        sanoq=a[c]+a[d];
        printf("%d\n",sanoq);
    }
}*/
/*{
    int array[10]={3,5,-4,0,15,88,-2,-9,7,-1};
    for(int b=9;b>=0;b--)
    {
        printf("%d\n",array[b]);
    }
}*/
/*{
    int array[10]={3,5,-4,0,15,88,-2,-9,7,-1};
    int ar[10]={};
    for(int b=9;b>=0;b--)
    {
        ar[b]=array[b];
        printf("%d\n",ar[b]);
    }
}*/
/*{
    int array[10]={3,5,-4,0,15,88,-2,-9,7,-1};//D5
    int arr[11]={};
    int a,d;
    printf("son 2ta\n");
    scanf("%d%d",&a,&d);
    for(int b=0,c=0;b<11;b++,c++)
    {
        if(arr[b==a]&&c--){
            arr[b]=d;
        }
        else
            arr[c]=array[b];
    }
        for(int b=0;b<11;b++)
            printf("%d\n",arr[b]);
}*/
/*{
    int a[10]={};
    printf("son:");
    for(int b=0;b<10;b++)//yarmidan uyogini teskari korsatish
    {
        scanf("%d",&a[b]);
    }
    for(int b=0;b<10;b++)
    {
        if(b>4){
            printf("%d",a[9]);
            a[9]--;}
        else
            printf("%d",a[b]);
    }
}*/
/*{
    int a[10]={};
    printf("son:");
    for(int b=0;b<10;b++)//toqlarini ozgartirish
    {
        scanf("%d",&a[b]);
    }
    for(int b=0,c=10;b<10;b++,c--)
    {
        if(c%2==1)
            printf("%d\n",a[c]);
        else
            printf("%d\n",a[b]);
    }
}*/
/*{
    int a[10]={};
    printf("son:");
    int s=sizeof(a)/sizeof(a[0]);//D8
    for(int b=0;b<s;b++)
    {
        scanf("%d",&a[b]);
    }
    for(int c=0;c<s;c++)
    {
        for(int d=c+1;d<s-1;d++)
        {
            if(a[c]==a[d])
            {
                for(int k=d;k<s;k++)
                {
                    a[k]=a[k+1];
                }
                s--;

                d--;
            }
        }
    }
    for(int b=0;b<s;b++)
       {
           printf("%d\n",a[b]);
       }
}*/
/*{
    int a[2][4]={
    {2,-5,0,7},
    {4,3,15,11}
    };
    for(int b=0;b<2;b++){
       for(int c=0;c<4;c++){
        printf("%d ",a[b][c]);
       }
       printf("\n");
    }
}*/
/*{
    int a[2][4]={};
    int c[2][4]={};
    printf("son kirit\n");
    for(int b=0;b<2;b++)
    {
        for(int d=0;d<4;d++)
        {
            scanf("%d",&a[b][d]);
        }
    }
    for(int b=0;b<2;b++)
    {
        for(int d=0;d<4;d++)
        {
        if(a[b][d]>0)
        {
            c[b][d]=a[b][d]*2;
        }
        else
        {
            c[b][d]=a[b][d]-2;
        }
        }
    }

    for(int b=0;b<2;b++)
    {
        for(int d=0;d<4;d++)
        {
            printf("%d",c[b][d]);
        }
        printf("\n");
    }
}*/
/*{
    int a[2][4]={1,2,3,4,5,6,7,8};
    for(int b=0;b<2;b++)
    {
        for(int c=0;c<4;c++)
        {
            if(c%2==1)
                printf("%d",a[b][c]);
        }
        printf("\n");
    }
}*/
/*{
    int a[2][4]={1,2,3,4,5,6,7,8};
    for(int b=0;b<4;b++)
    {
        for(int c=0;c<2;c++)
        {
            printf("%d ",a[c][b]);
        }
        printf("\n");
    }
}*/
/*{
    char ism[]="Xayrulloh Abduvohidov";
    for(int b=0;ism[b] != '\0';b++)
    {
        printf("%d: %c\n",b,ism[b]);
    }
}*/
/*{
    char ism[]="Assalamu alaykum hurmatli futbol ixlosmandlari";
    for(int b=0;ism[b]!='\0';b++)
    {
        if(ism[b]=='a'||ism[b]=='A')
            printf(" ");
        else
            printf("%c",ism[b]);
    }
}*/
/*{
     char ism[47]="Assalamu alaykum hurmatli futbol ixlosmandlari";
     char Ism[47];
     for(int b=0;b<48;b++)
     {
         Ism[b]=ism[b];
         printf("%c",Ism[b]);
     }
}*/
/*{
    char ism[]="Xayrulloh Abduvohdiov yaxshi o'quvchi";
    for(int b=0; ism[b]!='\0';b++)
    {
        if(ism[b]==' ')
            printf("\n");
        else
            printf("%c",ism[b]);
    }
}*/
/*{
    int a[7]={};
    int sanoq;
    printf("son:\n");
    for(int b=0;b<7;b++)
    {
        scanf("%d",&a[b]);
    }
    for(int b=0;b<7;b++)
    {
        for(int c=1;c<7;c++)
        {
            if(a[b]<a[c])
                sanoq=a[b];
        }
        printf("%d\n",sanoq);
    }
}*/
/*{
    int a[8]={1,2,3,4,5,6,7,8};//E3
    int d=0;
    printf("son:");
    scanf("%d",&d);
    for(int b=0;b<8;b++)
    {
        if(a[b]*2!=d&&d!=a[b])
            printf("%d\n",a[b]);
    }
}*/
/*{
    int a[10]={2,15,19,34,26,88,27,55,20,11};//E4
    for(int b=0;b<10;b++)
    {
        if(a[b]%2==1)
            printf("%d ",a[b]);
    }
        for(int b=0;b<10;b++)
    {
        if(a[b]%2==0)
            printf("%d ",a[b]);
    }
}*/
/*{
    int a[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };
     for(int b=0;b<3;b++)//E5
    {
        for(int c=0;c<3;c++)
        {
            printf("%d ",a[b][c]);
        }
        printf("\n");
    }
    printf("\n");
    for(int b=0;b<3;b++)
    {
        for(int c=0;c<3;c++)
        {
            printf("%d ",a[c][b]);
        }
        printf("\n");
    }
}*/
/*{
    int a[2][4]={};
    int b[2][4]={};
    int qiymat1=0,qiymat2=0;
    printf("son kirit:\n");
    for(int c=0;c<2;c++)
    {
        for(int d=0;d<4;d++)
        {
            scanf("%d",&a[c][d]);//E6
        }
    }
    printf("yana son:\n");
    for(int c=0;c<2;c++)
    {
        for(int d=0;d<4;d++)
        {
            scanf("%d",&b[c][d]);
        }
    }
    for(int c=0;c<2;c++)
    {
        for(int d=0;d<4;d++)
        {
            qiymat1 += a[c][d];
            qiymat2 += b[c][d];
        }
    }
    if(qiymat1==qiymat2)
        printf("teng\n");
    else
        printf("teng emas");
}*/
/*{
    int a[3][3]={};
    int sanoq=0;
    printf("son:\n");
    for(int c=0;c<3;c++)//E7
    {
        for(int d=0;d<3;d++)
        {
            scanf("%d",&a[c][d]);
        }
    }
    for(int c=0;c<3;c++)
    {
        for(int d=0;d<3;d++)
        {
           if(c%2==0)
           {
               if(d%2==0)
               {
                   sanoq += a[c][d];
               }
           }
           else if(c%2==1)
           {
               if(d%2==1)
               {
                   sanoq += a[c][d];
               }
           }
        }
    }
    printf("%d",sanoq);
}*/
/*{
    int a[7]={};
    int d=0;
    printf("son:\n");//E1
    for(int b=0;b<7;b++)
    {
        scanf("%d",&a[b]);
    }
    for(int b=0;b<7;b++)
    {
        for(int c=b+1;c<7;c++)
        {
            if(a[b]>a[c])
                d=a[b];
                a[b]=a[c];
                a[c]=d;
        }
    }
    for(int b=0;b<7;b++)
    {
        printf("%d ",a[b]);
    }
}*/
/*{
    char a[]="Hayit muborak";//F1
    for(int b=0;a[b]!='\0';b++)
    {
        printf("%c\n",a[b]);
    }
}*/
/*{
    char a[19]="Chelsea is champion";//F2
    for(int b=19;b>=0;b--)
    {
        printf("%c\n",a[b]);
    }
}*/
/*{
    char a[200];Yer
    int sanoq=0;
    printf("Gap kiriting oxiriga nuqta qoyishni unutmang\n");//F3
    for(int b=0;b<200;b++)
    {
        scanf("%c",&a[b]);
        if(a[b]=='a'||a[b]=='A')
        {
            sanoq++;
        }
        else if(a[b]=='.')
        {
            break;
        }
    }
    printf("%d",sanoq);
;}*/
/*{
    char a[200];
    int b=0,c=0,f=0;
    printf("gap yozing\n");
    scanf("%s",&a);
    for(int e=0;a[e]!='\0';e++)//F5
    {
        f++;
    }
    for(int b=0;b<f;b++)
    {
        if(a[b]=='0'||a[b]=='1'||a[b]=='2'||a[b]=='3'||a[b]=='4'||a[b]=='5'||a[b]=='6'||a[b]=='7'||a[b]=='8'||a[b]=='9')
        {
            c++;
        }
    }
    printf("gapingizda wunca son ishlatildi->%d",c);
}*/
/*{
    char a[200];
    int b=0,c=0;
    printf("gap yozing\n");
    scanf("%s",&a);
    b=sizeof(a)/sizeof(a[0]);//F3
    for(int d=0;d<b;d++)
    {
        if(a[d]=='a'||a[d]=='A')
            c++;
    }
    printf("gapingizda wunca a harfi ishlatildi->%d",c);
}*/
/*{
    char a[200];
    int b=0,c=0,f=0;
    printf("gap yozing\n");
    scanf("%s",&a);
    for(int e=0;a[e]!='\0';e++)//F3
    {
        f++;
    }
    for(int d=0;d<f;d++)
    {
        if(a[d]=='a'||a[d]=='A')
        {
            c++;
        }
    }
    printf("gapingizda wunca a harfi ishlatildi->%d",c);
}*/



