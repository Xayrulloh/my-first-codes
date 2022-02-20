#include <stdio.h>
#include <stdlib.h>

int main()
/*{
   int array[]={3,-9,5,99,-11,-3,100};//B3
   for(int a=0;a<7;a++)
   {
       if(array[a]<0)
       {
           printf("%d ",array[a]);
       }
   }
}*/
/*{
    int array[]={5,23,3,-11,0,-9,100,45};//B4
    int sanoq=0;
    for(int a=0;a<8;a++)
    {
        sanoq+=array[a];
    }
    printf("%d",sanoq);
}*/
/*{
    int array[10]={};
    int sanoq=0;
    for(int a=0;a<10;a++)
    {
        scanf("%d",&array[a]);//C1
    }
    for(int a=0;a<10;a++)
    {
        if(array[a]==5)
            sanoq+=array[a];
    }
    if(sanoq>0)
        printf("bor");
    else
        printf("yoq");
}*/
/*{
    int array[10]={};
    for(int a=0;a<10;a++)
    {
        scanf("%d",&array[a]);//C2
    }
    for(int a=0;a<10;a++)
    {
        if(array[a]==5)
        printf("%d ",a);
    }
}*/
/*{
    int array[10]={};
    for(int a=0;a<10;a++)
    {
        scanf("%d",&array[a]);//C3
    }
    for(int a=0;a<10;a++)
    {
        printf("%d ",array[a]+10);
    }
}*/
/*{
    int array[10]={};
    int yengi[10]={};
    for(int a=0;a<10;a++)
    {
        scanf("%d",&array[a]);//C4
    }
    for(int a=0;a<10;a++)
    {
        yengi[a]=array[a];
    }
    for(int a=0;a<10;a++)
    {
        printf("%d ",yengi[a]);
    }
}*/
/*{
    int array[10]={};
    int yarmi1=0,yarmi2=0;
    for(int a=0;a<10;a++)
    {
        scanf("%d",&array[a]);//C5
    }
    for(int a=0;a<10;a++)
    {
        if(a<5)
            yarmi1+=array[a];
        else
            yarmi2+=array[a];
    }
    printf("%d",yarmi1-yarmi2);
}*/
/*{
    int array[10]={};
    int musbat=0;
    for(int a=0;a<10;a++)
    {
        scanf("%d",&array[a]);//C6
    }
    for(int a=0;a<10;a++)
    {
        if(array[a]>0)
            musbat+=array[a];
        else
            musbat+=array[a];
    }
    printf("%d",musbat);
}*/
/*{
    int array[10]={};
    for(int a=0;a<10;a++)
    {
        scanf("%d",&array[a]);//C7
    }
    for(int a=0;a<10;a++)
    {
        if(array[0]<array[a])
            array[0]=array[a];
    }
    printf("%d",array[0]);
}*/
/*{
    int array[10]={};
    for(int a=0;a<10;a++)
    {
        scanf("%d",&array[a]);//C8
    }
    for(int a=0;a<10;a++)
    {
        if(array[a]%2==0)
            array[a]=array[a]*2;
        else
            array[a]=array[a]-2;
    }
     for(int a=0;a<10;a++)
     {
         printf("%d ",array[a]);
     }
}*/
/*{
    int array[10]={};
    int yangi[5]={};
    for(int a=0;a<10;a++)
    {
        scanf("%d",&array[a]);//C9
    }
    for(int a=0,b=0,c=1;a<5;b+=2,c+=2,a++)
    {
        yangi[a]=array[b]+array[c];
    }
    for(int a=0;a<5;a++)
    {
        printf("%d ",yangi[a]);
    }
}*/
/*{
    int array[10]={};
    int arr=100;
    for(int a=0;a<10;a++)
    {
        scanf("%d",&array[a]);//C10
    }
    for(int a=0;a<10;a++)
    {
        if(array[0]<array[a])
        {
            array[0]=array[a];
        }
        else if(arr>array[a])
        {
            arr=array[a];
        }
    }
    printf("%d",array[0]-arr);
}*/
/*{
    int array[10]={};
    for(int a=0;a<10;a++)
    {
        scanf("%d",&array[a]);//C11
    }
     for(int a=0;a<10;a++)
     {
         array[0]+=array[a];
     }
     printf("%d",array[0]/2);
}*/
/*{
    int array[10]={};
    int sanoq=0;
    for(int a=0;a<10;a++)
    {
        scanf("%d",&array[a]);//C12
    }
    for(int a=0;a<10;a++)
    {
        if(array[a]==7)
            sanoq+=array[a];
    }
    if(sanoq>0)
        printf("bor");
    else
        printf("yoq");
}*/
/*{
    int array[10]={};
    int yengi[9]={};
    int b;
    for(int a=0;a<10;a++)
    {
        scanf("%d",&array[a]);//D1
    }
    printf("nechinchi index chopilsin\n");
    scanf("%d",&b);
    for(int a=0,c=0;a<10;a++,c++)
    {
        if(a==b&&c--)
        {
            continue;
        }
        else
        {
            yengi[c]=array[a];
        }
    }
    for(int a=0;a<9;a++)
    {
        printf("%d ",yengi[a]);
    }
}*/
/*{
    int array[]={3,5,-4,0,15,88,-2,-9,7,-1};//D2
    int n=sizeof(array)/sizeof(array[0]);
    for(int a=n;a>=0;a--)
    {
       printf("%d ",array[a]);
    }
}*/
/*{
    int array[]={3,5,-4,0,15,88,-2,-9,7,-1};//D3
    int n=sizeof(array)/sizeof(array[0]);
    int yengi[n];
    for(int a=n-1,b=0;a>=0;a--,b++)
    {
       yengi[b]=array[a];
    }
    for(int a=0;a<n;a++)
    {
        printf("%d ",yengi[a]);
    }
}*/
/*{
    int array[]={3,5,-4,0,15,88,-2,-9,7,-1};
    int arr=100;
    for(int a=0;a<10;a++)//D4
    {
        if(array[0]<array[a])
        {
            array[0]=array[a];
        }
        else if(arr>array[a])
        {
            arr=array[a];
        }
    }
    printf("%d",array[0]-arr);
}*/
/*{
     int array[]={3,5,-4,0,15,88,-2,-9,7,-1};
     int yengi[11];
     int index,element;
     printf("arrayni nechinchi indexiga qoshishi holisiz?\n");//D5
     scanf("%d",&index);
     printf("nechini qoshishi holisiz?\n");
     scanf("%d",&element);
     for(int c=0,d=0;c<11;c++,d++)
     {
         if(d==index)
        {
             yengi[d]=element;
             c--;
        }
         else
            yengi[d]=array[c];
     }
      for(int c=0;c<11;c++)
      {
          printf("%d ",yengi[c]);
      }
}*/
/*{
    int array[10]={};
    int yengi[10]={};
    for(int a=0;a<10;a++)
    {
        scanf("%d",&array[a]);//D6
    }
    for(int a=0,b=9;a<10;a++)
    {
        if(a<5)
        {
            yengi[a]=array[a];
        }
        else
        {
            yengi[a]=array[b];
            b--;
        }
    }
    for(int a=0;a<10;a++)
    {
        printf("%d ",yengi[a]);
    }
}*/
/*{
    int a[10]={};
    int d[10]={};
    printf("son:");
    for(int b=0;b<10;b++)//D7
    {
        scanf("%d",&a[b]);
    }
    for(int b=0,c=10;b<10;b++,c--)
    {
        if(c%2==1)
            d[b]=a[c];
        else
            d[b]=a[b];
    }
    for(int b=0;b<10;b++)
    {
        printf("%d ",d[b]);
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
{
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
}









