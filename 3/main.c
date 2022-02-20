#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
/*{
    int son;
    scanf("%d",&son);
    printf(son%2==0?"juft":"toq");//Agar bolinsa juftdigin bolinmasa toq dgan formula
}*/



/*{
    int son;
    scanf("%d",&son);
    son=son%2==0 ? son + 7:0;//Agar bolinsa 7ni qoshib ozlashtir, bolinmasa 0 ozlashtir.
}*/



/*int qoshish(int a, int b)
{
    return a+b;//2ta sonni qoshish fuksiyasi
}
int main()
{
   int x,y;
   scanf("%d %d",&x,&y);
   printf("%d",qoshish(x,y));//funksiya yordamida qoshish
}*/


/*float bolish(float a,float b)
{
    return a/b;//2ta sonni bolish funksiyasi
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%f",bolish(n,m));//funksiya yordamida bolish
}*/


/*int zet()
{
    for(int i=0;i<7;i++)
    {
        printf("zzz\n");
    }
    return 5;//returndigi narsa zet ga tegishli
}
int main()
{
    int m=zet();//shunda m 5ga teng
    printf("%d",m);
}*/


/*float area(float x, float y, float z)
{
    float s=(x+y+z)/2;
    return sqrt(s*(s-x)*(s-y)*(s-z));
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%f",area(a,b,c));
}*/


/*int qoshish(int a, int b)// tuzgan funksiyam bn qoshish
{
    return a+b;
}
int main()
{
    int c,d;
    printf("2 ta son kiriting\n");
    scanf("%d %d",&c,&d);
    printf("%d",qoshish(c,d));//uy ishi 1
}*/


/*float bolish(float a, float b)//tuzgan funksiyam orqali bolish
{
    return a/b;
}
int main()
{
    int c,d;
    printf("2ta son:\n");
    scanf("%d %d",&c,&d);
    printf("%.0f",bolish(c,d));//uy ishi 2
}*/


/*int kotta(int a, int b)//kottasini topuvchi funksiya
{
    if(a>b){
        return a;
    }
    return b;
}
int main()
{
    int a,b;
    printf("2ta son:\n");
    scanf("%d %d",&a,&b);
    printf("%d",kotta(a,b));//uy ishi 3
}*/



/*int musbat(int a)//manfiy sonlani musbatga aylantirubci funksiya
{
    if(a<0)
    {
    return a*-1;
    }
    return a;
}
int main()
{
    int a;
    printf("manfiy son kirit\n");
    scanf("%d",&a);
    printf("%d",musbat(a));//uy ishi 4
}*/



/*int kotta(int a, int b, int c, int d, int e)//funksiya orqali en kotta sonni topish usuli
{
    if(a<b){
        a=b;}
    if(a<c){
        a=c;}
    if(a<d){
        a=d;}
    if(a<e){
        a=e;}
    return a;
}
int main()
{
    int a,b,c,d,e;
    printf("5ta son:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d",kotta(a,b,c,d,e));//uy ishi5
}*/



/*int daraja(int a, int b)//darajaga oshiruvchi funksiya
{
    int d=0;
    for(int c=0;c<b;c++)
    {
        d += a;
    }
    return d;
}
int main()
{
    int a,b;
    printf("2ta son:\n");
    scanf("%d %d",&a, &b);
    printf("%d",daraja(a,b));//uy ishi 6
}*/



/*int xona(int a)//butun sonni xonasini aniqlovci funksiya
{
    int d=0;
    for(;a!=0;)
    {
        a=a/10;
        d++;
    }
    return d;
}
int main()
{
    int a;
    printf("butun son:\n");
    scanf("%d",&a);
    printf("kiritgan sonigiz %d xonali",xona(a));//uy ishi 7
}*/



/*char shoot()//char bilan funksiya yaratish
{
    return 's';
}
int main()
{
    printf("%c",shoot());
}*/



/*bool juftmi(int son)
{
    if(son%2==0)
        return true;//funksiya faqat tori notorini aniqlidagan
    return false;
}*/



/*bool juftmi(int son)
{
    return (son%2==0)? true : false;//juft va toq sonlarni topishni qisqa usuli
}
int main()
{
    int a;
    scanf("%d",&a);
    printf(juftmi(a)? "juft" : "toq");//ozgacha uslub
}*/



/*bool juftmi(int son)
{
    return son%2==0;//tepadigidanam qisqa usuli
}
int main()
{
    int a;
    scanf("%d",&a);
    printf(juftmi(a) ? "juft":"toq");
}*/



/*bool is_musbat(float son)//musbat va manfiy sonlarni bilish funksiya orqali
{
    return son>0;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf(is_musbat(a)?"musbat":"manfiy");
}*/



/*bool abror(char belgi)//harf va sonlani ajratuvchi funksiya
{
    if(belgi=='0'||belgi=='1'||belgi=='2'||belgi=='3'||belgi=='4'||belgi=='5'||belgi=='6'||belgi=='7'||belgi=='8'||belgi=='9')
        return true;
    return false;
}
int main()
{
    char a;
    scanf("%c",&a);
    printf(abror(a)?"raqam":"raqam emas");
}*/



/*bool abror(char belgi)
{
    char raqamlar[11]="0123456789";//har doim false boladi chunki belgi da hech narsa yoq
    for(int i=0;i<10;i++)
    {
        if(belgi==raqamlar[i])
            return true;
        return false;
    }
}*/



/*bool abror(char belgi)
{
    return '0' <=belgi && belgi<='9';
}
int main()
{
    char a;
    scanf("%c",&a);
    printf(abror(a)?"raqam":"raqam emas");
    printf(isdigit(a)?"raqam":"raqam emas");//isdigit funksiya bolib raqam yoli raqam emasligini bilib beradi
}*/



/*int main()
{
    char gap[30];
    gets(gap);//scanfni orniga iwlatsa boladi yaxshirogi
    for(int i=0;i<39;i++)
    {
        if(gap[i]=='\0')
        {
            printf("Backslash 0\n");
            continue;
        }
        if(gap[i]=='\n')
        {
            printf("Backslash n\n");
            continue;
        }
        printf("%c\n",gap[i]);
    }
}*/



/*int main()
{
    char gap[100];
    fgets(gap,sizeof(gap),stdin);
    printf("%s\n",gap);
    printf("%d\n",strlen(gap));
    printf("%d\n",sizeof(gap));
}*/



/*bool tub(int son)
{
    if(son==1)
        return false;


    for(int i=2;i<son/2;i++)//sonni tub yoki tub emasligini tekshiradi
        if(son%i==0)
        return false;
    return true;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf(tub(a)?"tub":"tub emas");
}*/



/*void show(char ism[])//show scanf digini olib korsatadi
{
    printf("hurmatli %s, tizimga kirdingiz",ism);
}
int main()
{
    char name[15];
    scanf("%s",name);
    show(name);
}*/



/*int ikkiga_oshir(int son)//2 niqoshadi
{
    return son+2;
}
int uchga_oshir(int n)
{
    return n+3;//3 ni qoshadi
}
int main()
{
    printf("%d",uchga_oshir(ikkiga_oshir(10)));
}*/



/*int kvadratning_yuzi(int tomon)
{
    return tomon*tomon;
}
int kubning_yuzi(int tomon)
{
    return 6*kvadratning_yuzi(tomon);
}
int kubing_hajmi(int tomon)
{
    return tomon*kvadratning_yuzi(tomon);
}
int main()
{
    int tomon=3;
    printf("kvadratning_yuzi %d\n",kvadratning_yuzi(tomon));
    printf("kubning_yuzi %d\n",kubning_yuzi(tomon));
    printf("kubing_hajmi %d\n",kubing_hajmi(tomon));
}*/



/*int tub(int son)
{
    for(;son%2!=0||son%3!=0||son%4!=0||son%5!=0||son%6!=0||son%7!=0||son%8!=0||son%9!=0;son++)
    {
        if(son==2||son==3||son==5||son==7)
            return son;
        else if(son%2!=0&&son%3!=0&&son%4!=0&&son%5!=0&&son%6!=0&&son%7!=0&&son%8!=0&&son%9!=0)
            return son;
    }
}
int main()
{
    int a;
    printf("son:");
    scanf("%d",&a);
    printf("%d",tub(a));//uy ishi 1
}*/



/*bool kattami(char a)
{
    if(isupper(a))
        return true;
    return false;
}
int main()
{
    char a;
    scanf("%c",&a);
    printf(kattami(a)?"tori":"tori emas");//uy ishi 3
}*/



/*bool kichkina(char a)
{
    if(islower(a))
        return true;
    return false;
}
int main()
{
    char a;
    scanf("%c",&a);
    printf(kichkina(a)?"true":"false");//uy ishi 4
}*/



/*char katta_qiluvchi(char a)
{
    if(islower(a))
        a=toupper(a);
    return a;
}
int main()
{
    char a;
    scanf("%c",&a);
    printf("%c",katta_qiluvchi(a));//uy ishi 5
}*/



/*char katta_qiluvchi(char a)
{
    if(isupper(a))
        a=tolower(a);
    return a;
}
int main()
{
    char a;
    scanf("%c",&a);
    printf("%c",katta_qiluvchi(a));//uy ishi 6
}*/



/*bool is_equal(char a[],char b[])
{
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]!=b[i])
            return false;
    }
    return true;
}
int main()
{
    char a[15],b[15];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    printf(is_equal(a,b)?"true":"false");//uy ishi2
}*/



/*void manzil(int *pson)
{
    printf("%x",*pson);
}
int main()
{
    int son=5;
    manzil(&son);
}*/



/*void oshirish(int *pson)
{
    *pson=*pson+3;
    printf("%d",*pson);
}
int main()
{
    int son=5;
    oshirish(&son);
}*/



/*void almashtir(int *pson, int *pso)
{
    int a=0;
    a=*pson;
    *pson=*pso;
    *pso=a;
    printf("%d %d",*pson,*pso);
}
int main()
{
    int a=10,b=5;
    almashtir(&a,&b);
}*/



/*void show(int son,int oshir)
{
    if(son+1!=oshir){
        printf("%d\n",oshir);//j1
        show(son, oshir+1);
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    show(a,b);
}*/



/*int hadi(int a)
{
    int b=0,c=0,d=1,e=0;
    if(a==3)
    {
        b=c+d;
        c=d;
        d=b;
        return b;
    }
    return hadi(a-1);

}
int main()
{
    int a=0;
    scanf("%d",&a);
    printf("%d",hadi(a));
}*/



/*int xona(int a)
{
    static int b=0;
    if(a>0){
    xona(a/10);
    b++;}
    else
    {
    return b;//j3
    }
}
int main()
{
    int a,son;
    printf("son\n");
    scanf("%d",&son);
    a=xona(son);
    printf("%d",a);
}*/



/*void manzil(int *pson)//K1
{
    printf("%x",pson);
}
int main()
{
    int son=5;
    manzil(&son);
}*/


/*void oshirish(int *pson)//K2
{
    *pson+=3;
    printf("%d",*pson);
}
int main()
{
    int son=0;
    oshirish(&son);
}*/



/*void almashtir(int *a, int *b)//K3
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("%d %d",*a,*b);
}
int main()
{
    int a=3;
    int b=4;
    almashtir(&a,&b);
}*/



/*void kvadrat(int *a)
{
    printf("%d",*a**a);//K4
}
int main()
{
    int a=3;
    kvadrat(&a);
}*/



/*void ildiz(float *a)
{
    printf("%.1f",sqrt(*a));//K5
}
int main()
{
    float a=10;
    ildiz(&a);
}*/



/*void almashtir(int *a)
{
    *a=(*a%10*10)+(*a/10);//K6
    printf("%d",*a);
}
int main()
{
    printf("joyini almashtirish\n");
    int a=48;
    printf("%d",a);
    almashtir(&a);
}*/



/*void array(int *a)
{
    for(int b=0;a[b]<10;b++)
    {
        if(a[b]%2==0)
            a[b]=a[b]*2;
        else
            a[b]=a[b]-5;
    }
}
int main()
{
    int a[]={};
    printf("son:\n");
    for(int b=0;b<10;b++)
    {
        scanf("%d",&a[b]);
    }
    array(a);
    for(int c=0;c<10;c++)
    {

        printf("%d",a[c]);
    }
}*/



int main()
/*{
    int a;
    printf("son:\n");//1
    scanf("%d",&a);
    for(int b=1;b<=a;b++)
    {
        for(int c=1;c<=b;c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
}*/
/*{
    int a;
    printf("son:\n");//2
    scanf("%d",&a);
    for(;a>0;a--)
    {
        for(int b=1;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
}*/
/*{
    int a;
    printf("son:\n");//3
    scanf("%d",&a);
    for(;a>0;a--)
    {
        for(int b=a;b>0;b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
}*/
/*{
    int a,e;
    printf("son:\n");
    scanf("%d",&a);
    e=a;
    for(int b=1;b<=a;b++,e--)//4
    {
        for(int c=a,d=1;d<=e;d++,c--)
        {
            printf("%d",c);
        }
        printf("\n");
    }
}*/
/*{
    int a;
    printf("son:\n");
    scanf("%d",&a);
    for(int c=1;c<=a;c++)//5
    {
        for(int b=1;b<=c;b++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
}*/
/*{
    int a;
    printf("son:\n");
    scanf("%d",&a);
    for(int b=1,e=a;b<=e;b++,a--)//6
    {
        for(int c=1;c<=a;c++)
        {
            printf(" ");
        }
        for(int d=1;d<=b;d++)
        {
            printf("%d",d);
        }
        printf("\n");
    }
}*/
/*{
    int a,e=0;
    printf("son:\n");
    scanf("%d",&a);
    e=a;
    for(int b=1;b<=a;b++,e--)//7
    {
        for(int c=1;c<b;c++)
        {
            printf(" ");
        }
        for(int d=1;d<=e;d++)
        {
            printf("%d",d);
        }
        printf("\n");
    }
}*/
/*{
    int i,j,n;
    printf("son:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)//8
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=i-1; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}*/
/*{
    int i,j,spc,rows,k;
    printf("son:\n");//11
    scanf("%d",&rows);
    spc=rows+4-1;
    for(i=1;i<=rows;i++)
    {
        for(k=spc;k>=1;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
        spc--;
    }
}*/
/*{
    int a,e=0;
    printf("son:\n");
    scanf("%d",&a);
    for(int b=1;b<=a;b++)//12
    {
        for(int c=1;c<=b;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
/*{
    int a,e=0;
    printf("son:\n");
    scanf("%d",&a);
    e=a;
    for(int b=1;b<=a;b++,e--)//13
    {
        for(int c=1;c<=e;c++)
        {
            printf(" ");
        }
        for(int d=1;d<=b;d++)
        {
            printf("* ");
        }
        printf("\n");
    }
}*/
/*{
    int a,e=0;
    printf("son:\n");
    scanf("%d",&a);
    e=a;
    for(int b=1;b<=a;b++,e--)//14
    {
        for(int c=a,d=1;d<=e;d++,c--)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
/*{
    c
}*/
/*{
    int a,e=0;
    printf("son:\n");//16
    scanf("%d",&a);
    e=a;
    for(int b=1;b<=a;b++)
    {
        for(int c=1;c<e;c++)
        {
            printf(" ");
        }
        e--;
        for(int d=1;d<=2*b-1;d++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
/*{
    int a;
    printf("son:\n");
    scanf("%d",&a);
    for(int b=1;b<=a;b++)
    {
        for(int c=1;c<=a;c++)//18
        {
            if(b==1||b==a||c==1||c==a)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}*/
//65 90
/*{
    int a;
    printf("son:\n");//19
    scanf("%d",&a);
    for(int b=1;b<=a;b++)
    {
        for(int c=65;c<65+b;c++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
}*/
/*{
    int a,e=0,d=1,g=1;
    printf("son:\n");
    scanf("%d",&a);
    e=a;
    for(int b=1,g=1;b<=a*2,g<=a;b++,g++)
    {
        for(int c=1;c<=g;c++)
        {
            printf(" ");
        }

        for(int f=1;f<=e;f++)
        {
            printf("* ");
        }
        for(d=1;d<=b-a;d++)
        {
            printf("* ");
        }
        printf("\n");
        e--;

    }
}*/
/*{
    int arr[100];
    int n,i,j,tmp;
    printf("nechta arrayligini kiriting:\n");
    scanf("%d",&n);
    printf("array elementlarini kiriting:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);//arrayni tartib bilan chiqarish
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
                {
                    tmp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=tmp;
                }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("arraylarni tartiblangani %d\n",arr[i]);
    }
}*/
/*{
    int arr[100],joylashuv,c,n,qiymat;
    printf("arrayning elementlar sonini kiriting\n");
    scanf("%d",&n);
    printf("elementlarini kiriting\n");
    for(c=0;c<n;c++)
    {
        scanf("%d",&arr[c]);
    }
    printf("arrayni qatiga qoshishi holisan\n");
    scanf("%d",&joylashuv);
    printf("qaysi sonni qoshishi holisan\n");
    scanf("%d",&qiymat);
    for(c=n-1;c>=joylashuv;c--)
    {
        arr[c+1]=arr[c];
    }
    arr[joylashuv]=qiymat;
    for(c=0;c<=n;c++)
    {
        printf("%d ",arr[c]);

    }
}*/









