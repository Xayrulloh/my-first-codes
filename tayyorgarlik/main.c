#include <stdio.h>
#include <stdlib.h>

//int main()
/*{
    printf("gets bilan ishlash\n");
    char ism[50];
    printf("ismingizni kiriting\n");
    gets(ism);
    printf("qalesan biratishka %s\n",ism);
}*/
/*{
    printf("belgining ASCII qiymati\n");
    char c;
    printf("belgi kiriting\n");
    scanf("%c",&c);
    printf("%c belgining ASCII qiymati->%d",c,c);
}*/
/*{
    printf("fibonaci series\n");
    int son;
    int a=0,b=1,c=0;
    printf("son kiriting:\n");
    scanf("%d",&son);
    if(son==1)
        printf("%d",a);
    if(son>=2)
        printf("%d\t%d",a,b);
    for(int d=3;d<=son;d++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
}*/
/*{
    printf("palindrom\n ");
    int a,b,c,s=0;
    printf("son kiriting:\n");
    scanf("%d",&a);//151
    c=a;//c=151
    for(;a>0;)
    {
        b=a%10;//b=1
        s=(s*10)+b;//s=1
        a=a/10;//a=1
    }
    if(s==c)
        printf("%d palindrom son ",c);
    else
        printf("%d palindrom son emas",c);
}*/
/*{
    printf("sonning raqamlari yigindisini topish\n");
    int a,son=0,b,qoldiq;
    printf("son kiriting:\n");
    scanf("%d",&a);
    for(;a!=0;)
    {
        qoldiq=a%10;
        son+=qoldiq;
        a=a/10;
    }
    printf("sonning raqamlari yigindisi %d",son);
}*/
/*{
    printf("gapni teskari korsatish\n");
    char gap[1000],teskarisi[1000];
    int j,sanash=0;
    printf("gap kiriting:\n");
    scanf("%s",gap);
    for(;gap[sanash]!='\0';sanash++){}
    j=sanash -1;
    for(int i=0;i<sanash;i++)
    {
        teskarisi[i]=gap[j];
        j--;
    }
    printf("gapni teskarisi %s",teskarisi);
}*/
/*void fibo(int aj)
    {
        int first=0,second=1,sum;
        if(aj>1)
        {
            sum=first+second;
            first=second;
            second=sum;
            printf("%d ",sum);
            fibo(aj-1);
        }
        else
            printf("\n\n\n");
    }
    int main()
{
    int a;
    scanf("%d",&a);
    fibo(a);
}*/
/*int xona(int a)
{
    int b=1;
    if(a<10) return b;
    return b+ xona(a/=10);//j3

}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",xona(a));
}*/
/*void show(int son,int oshir)//J1
{
    if(son+1!=oshir)
    {
        printf("%d\n",oshir);
        show(son,oshir+1);
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    show(a,b);
}*/
/*int b=0;
int qosh(int a)
{
    if(a<10)
    {
        return a+b;//J4
    }
    b+=a%10;
    return qosh(a/10);
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",qosh(a));
}*/
int main()
{
    /*int  a,b;
    scanf("%d %d", &a,&b);
    printf("%d+%d=%d",a,b,a+b);*/

    /*int  a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    printf ("%d+%d-%d=%d",a,b,c, a+b-c);*/

    /*int a,xona1,xona2;
    printf("2 xonali son kiriting :");
    scanf("%d",&a);
    xona1=a%10;
    xona2=a/10;
    printf("sonning 1 xonasi %d\n",xona1);
    printf("sonning 2 xonasi %d",xona2);*/

    int a, xona1, xona2, xona3, xona4, xona5;
    printf ("5 xonali son kiriting:\n");
    scanf("%d",&a);//12345
    xona1=a%10;
    xona2=a%100/10;
    xona3=a%1000/100;
    xona4=a%10000/1000;
    xona5=a/10000;
    printf("sonning 1 xonasi %d\n",xona1);
    printf("sonning 2 xonasi %d\n",xona2);
    printf("sonning 3 xonasi %d\n",xona3);
    printf("sonning 4 xonasi %d\n",xona4);
    printf("sonning 5 xonasi %d\n",xona5);
}







