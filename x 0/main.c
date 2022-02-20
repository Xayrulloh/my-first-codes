#include <stdio.h>
#include <stdlib.h>

char sonlar[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int tekshir();
void doska();
int main()
{
    int ishtirokchi = 1, i, son;
    char baho;
    do
    {
        doska();
        ishtirokchi = (ishtirokchi % 2) ? 1 : 2;
        printf("ishtirokchi %d, son kiriting:  ", ishtirokchi);
        scanf("%d", &son);
        baho = (ishtirokchi == 1) ? 'X' : 'O';
        if (son == 1 && sonlar[1] == '1')
            sonlar[1] = baho;
        else if (son == 2 && sonlar[2] == '2')
            sonlar[2] = baho;
        else if (son == 3 && sonlar[3] == '3')
            sonlar[3] = baho;
        else if (son == 4 && sonlar[4] == '4')
            sonlar[4] = baho;
        else if (son == 5 && sonlar[5] == '5')
            sonlar[5] = baho;
        else if (son == 6 && sonlar[6] == '6')
            sonlar[6] = baho;
        else if (son == 7 && sonlar[7] == '7')
            sonlar[7] = baho;
        else if (son == 8 && sonlar[8] == '8')
            sonlar[8] = baho;

        else if (son == 9 && sonlar[9] == '9')
            sonlar[9] = baho;
        else
        {
            printf("notori narsa kiritdingiz ");
            ishtirokchi--;
        }
        i = tekshir();
        ishtirokchi++;
    }while (i ==  - 1);
    doska();
    if (i == 1)
        printf("==>\%d-ishtirokchi yutdi ", --ishtirokchi);
    else
        printf("==>\durrang");
}
int tekshir()//tekshiruvchi funksiya(1)bosaoyin tugab kim yutgani,(-1)kim navbatiligi,(0)durrang.
{
    if (sonlar[1] == sonlar[2] && sonlar[2] == sonlar[3])
        return 1;
    else if (sonlar[4] == sonlar[5] && sonlar[5] == sonlar[6])
        return 1;
    else if (sonlar[7] == sonlar[8] && sonlar[8] == sonlar[9])
        return 1;
    else if (sonlar[1] == sonlar[4] && sonlar[4] == sonlar[7])
        return 1;
    else if (sonlar[2] == sonlar[5] && sonlar[5] == sonlar[8])
        return 1;
    else if (sonlar[3] == sonlar[6] && sonlar[6] == sonlar[9])
        return 1;
    else if (sonlar[1] == sonlar[5] && sonlar[5] == sonlar[9])
        return 1;
    else if (sonlar[3] == sonlar[5] && sonlar[5] == sonlar[7])
        return 1;
    else if (sonlar[1] != '1' && sonlar[2] != '2' && sonlar[3] != '3' &&
        sonlar[4] != '4' && sonlar[5] != '5' && sonlar[6] != '6' && sonlar[7]
        != '7' && sonlar[8] != '8' && sonlar[9] != '9')
        return 0;
    else
        return  - 1;
}
void doska()//doska funksiyasini bajruvchi funksiya
{
    system("cls");
    printf("\n\n\t\tTic Tac Toe\n\n");
    printf("ishtirokchi 1 (X)  -  ishtirokchi 2 (O)\n");
    printf("1 dan 9 gacha son kiriting\n");
    printf("faqat butun son kiriting\n\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", sonlar[1], sonlar[2], sonlar[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", sonlar[4], sonlar[5], sonlar[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", sonlar[7], sonlar[8], sonlar[9]);
    printf("     |     |     \n\n");
}
