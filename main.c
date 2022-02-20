#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
/*{
    int fasl,oy;//case3
    printf("faslni kiriting\n");
    scanf("%d",&fasl);
    switch (fasl){
    case 1:
        printf("bahor\n");
            printf("1.mart\n 2.Aprel\n 3.May\n");
            scanf("%d",&oy);
            switch (oy){
               case 1:
                     printf("mart 31 kunli");
                     break;
               case 2:
                     printf("aprel 30 kunli");
                     break;
                case 3:
                     printf("may 31 kunli");
                     break;
                default:
                        printf("sandan kutmaganidm");
            }
            break;

    case 2:
        printf("yoz\n");
            printf("1.iyun\n 2.iyul\n 3.avgust\n");
            scanf("%d",&oy);
            switch (oy){
               case 1:
                     printf("iyun 30 kunli");
                     break;
               case 2:
                     printf("iyul 31 kunli");
                     break;
                case 3:
                     printf("avgust 31 kunli");
                     break;
               default:
                    printf("sandan kutmaganidm");
}             break;
     case 3:
        printf("kuz\n");
            printf("1.sentabr\n 2.oktabr\n 3.noyabr\n");
            scanf("%d",&oy);
            switch (oy){
               case 1:
                     printf("sentabr 30 kunli");
                     break;
               case 2:
                     printf("oktabr 31 kunli");
                     break;
                case 3:
                     printf("noyabr 30 kunli");
                     break;
               default:
                     printf("sandan kutmaganidm");

}             break;
     case 4:
        printf("qish\n");
            printf("1.dekabr\n 2.yanvar\n 3.fevral\n");
            scanf("%d",&oy);
            switch (oy){
               case 1:
                     printf("dekabr 31 kunli");
                     break;
               case 2:
                     printf("yanvar 31 kunli");
                     break;
                case 3:
                     printf("fevral 28 kunli");
                     break;

             default:
                   printf("sandan kutmaganidm");
            break;}
}
}
/*{
  int son=1;
  while (son++<= 15){
    printf("%d\n",son*son);
  }
}*/
/*{
   int son=0;
   int sanoq=0;
   while(son++<=79){
    if(son%2==0)
        sanoq++;
   }
    printf("%d",sanoq);
}*/
/*{
    int son;
    srand(time(NULL));
    int secret_son=rand()%10;
    int limit=3;
    printf("10 gaca bolgan son kiriting 4ta imkoniyatingiz mavjud\n");
    scanf("%d",&son);
    while(son==secret_son){
        if(son>secret_son)
            printf("kichiro son kirit\n");
        else
            printf("kottaro\n");
        scanf("%d",&son);
           limit--;
        if(limit==0)
            break;
    }

    if(limit>0)
        printf("topdingiz");
    else
        printf("DENG");
}/
/*{
    int yonalish,harakat;//case3
    printf("robotingiz qayerga qarab turganini belgilang\n 1.shimol\n2.sharq\n3.garb\n4.janub\n");
    scanf("%d",&yonalish);
    switch (yonalish){
    case 1:
        printf("robotingiz qaysi amalni bajardi\n");
            printf("0 harakatni davom ettirdi\n1chapga burildi\n2ongga burildi\n");
            scanf("%d",&harakat);
            switch (harakat){
               case 0:
                     printf("robot shimolga harakatni davom ettirmoqda\n");
                     break;
               case 1:
                     printf("robot shimoldan chapga burildi\n");
                     break;
                case 2:
                     printf("robot shimoldan onga burildi\n");
                     break;
                default:
                        printf("sandan kutmaganidm\n");
            }
            break;

    case 2:
        printf("robotingiz qaysi amalni bajardi\n");
            printf("0 harakatni davom ettirdi\n1chapga burildi\n2ongga burildi\n");
            scanf("%d",&harakat);
            switch (harakat){
               case 0:
                     printf("robot sharqga harakatni davom ettirmoqda\n");
                     break;
               case 1:
                     printf("robot sharqdan chapga burildi\n");
                     break;
                case 2:
                     printf("robot sharqdan onga burildi\n");
                     break;
               default:
                    printf("sandan kutmaganidm\n");
}             break;
     case 3:
        printf("robotingiz qaysi amalni bajardi\n");
            printf("0 harakatni davom ettirdi\n1chapga burildi\n2ongga burildi\n");
            scanf("%d",&harakat);
            switch (harakat){
               case 0:
                     printf("robot garbga harakatni davom ettirmoqda\n");
                     break;
               case 1:
                     printf("robot garbdan chapga burildi\n");
                     break;
                case 2:
                     printf("robot garbdan onga burildi\n");
                     break;
               default:
                     printf("sandan kutmaganidm\n");

}             break;
     case 4:
        printf("robotingiz qaysi amalni bajardi\n");
            printf("0 harakatni davom ettirdi\n1chapga burildi\n2ongga burildi\n");
            scanf("%d",&harakat);
            switch (harakat){
               case 0:
                     printf("robot janubga harakatni davom ettirmoqda\n");
                     break;
               case 1:
                     printf("robot janubdan chapga burildi\n");
                     break;
                case 2:
                     printf("robot janubdan onga burildi\n");
                     break;

             default:
                   printf("sandan kutmaganidm\n");
            break;}
}
}*/
/*{
    int a=0;//vazifa 1
    while(++a<=800)
     printf("%d\n",a);


}*/
/*{
    int a=1001;//vazifa 2
    while(--a>0){
        printf("%d\n",a);
    }
}*/
/*{
    int a=399;//vazifa 3
    while(++a<501){
        printf("%d\n",a);
    }
}*/
/*{
    int a=299;//vazifa 4
    while(a-->151){
        printf("%d\n",a);
    }
}*/
/*{
    int a=-400;//vazifa 5
    while(a<251){
        printf("%d\n",a);
        a++;
    }
}*/
/*{
    int a=200;//vazifa 6
    while(a>-501){
        printf("%d\n",a);
        --a;
    }
}*/
/*{
    int a=1;//vazifa 7
    while(a<=140){
        if (a%2==0)
        printf("%d\n",a);
        ++a;
    }
}*/
/*{
    int a=100;// vazifa 8
    while(a<=240){
        if(a%2==1)
            printf("%d\n",a);
        ++a;
    }
}*/
/*{
    int a=40;//vazifa 9
    while(a<180){
        if(a%7==0)
            printf("%d\n",a);
        ++a;
    }
}*/
/*{
    int a=50;//vazifa 10
    while(a<440){
        if(a%11==0)
            printf("%d\n",a);
        ++a;
    }
}*/
/*{
    int a=90;//vazifa 10
    while(a<210){
        if(a%25==0)
          printf("%d\n",a);
        ++a;
    }
}*/
/*{
    int a=25;//vazifa 11
    while(a<690){
        if(a%5==0||a%9==0)
            printf("%d\n",a);
        ++a;
    }
}*/
/*{
    int a=1;//vazifa 12
    while(a<4000){
        if(a%11==0&&a%3==0&&a%9==0)
            printf("%d\n",a);
        ++a;
    }
}*/
/*{
    int a=20;//vazifa 13
    while(a<420){
        if(a%5==0&&a%10!=0)
            printf("%d\n",a);

        ++a;
    }
}*/
/*{
    int son, b;//vazifa 14
    printf("son kiriting");
    scanf("%d",&son);
    while(++b<=son){
        printf("%d\n",b*b);

    }
}*/
{
    int son,b;
    printf("son kiriting");
    scanf("%d",&son);//90
    while(++b<son){
        printf("%d\n",b*b);
    }
}
