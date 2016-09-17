/*
    It displays the scores while the game is played
*/
#include"header.h"
void score_disp()
{
    int i;
    //player1
    gotoxy(67,4);
    puts(name1);
    gotoxy(76,4);
    printf(":");
    gotoxy(67,5);
    printf("Score = %d",score_1);
    gotoxy(67,6);
    printf("Miss  = %d",miss_1);
    gotoxy(67,7);
    for(i=0;i<10-miss_1;i++)
    {
        if(i==5)
            gotoxy(68+(i-5)*2-1,8);
        printf("\1 ");
    }
    for(i=0;i<2;i++)
    {
        if(miss_1==5)
            gotoxy(67,8);
        printf(" ");
    }
    //player2
    gotoxy(67,12);
    puts(name2);
    gotoxy(76,12);
    printf(":");
    gotoxy(67,13);
    printf("Score = %d",score_2);
    gotoxy(67,14);
    printf("Miss  = %d",miss_2);
    gotoxy(67,15);
    for(i=0;i<10-miss_2;i++)
    {
        if(i==5)
            gotoxy(68+(i-5)*2-1,16);
        printf("\1 ");
    }
    for(i=0;i<2;i++)
    {
        if(miss_2==5)
            gotoxy(67,16);
        printf(" ");
    }
}

