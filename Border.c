/*
    It contains the code for the border for the game
    and also contains the initial main view of the program
*/
#include "header.h"
void main_init_view()
{
    int i,j,k;
    for(k=0;k<2;k++)
    {
        gotoxy(0,16*k);
        if(k==1)
            for(i=0;i<10;i++)
            printf("%c%c%c%c%c%c%c%c",95,95,95,95,95,95,95,95);
        for(j=0;j<4;j++)
        {
            for(i=0;i<10;i++)
                printf("%c%c%c%c%c%c%c%c",95,95,95,95,95,95,95,179);
            for(i=0;i<10;i++)
            {
                printf("%c%c%c%c%c%c%c",95,95,95,179,95,95,95,95);
                if(!(k&&i==9&&j==3))
                    printf("%c",95);
            }
        }
    }
    gotoxy(10,10);
    char text1[]="BALL STRIKE";
    for(i=68;i!=33;i--)
    {
        Beep(100,50);
        printf("               ");
        gotoxy(i,12);
        printf("%s",text1);
    }
    gotoxy(45,12);
    printf(" ");
    gotoxy(25,4);
    char text[]="ADVICED BY SIR BABU RAM DAWADI";
    for(i=0;text[i]!='\0';i++)
    {
        Sleep(50);
        printf("%c",text[i]);
    }

    gotoxy(25,19);  printf("SUBMITTED BY:");
    gotoxy(25,20);
    Beep(600,100);
    printf("070/BCT/521\tMIRAN GHIMIRE");
    gotoxy(25,21);
    Beep(600,100);
    printf("070/BCT/531\tSABBIU SHAH");
    gotoxy(25,22);
    Beep(600,100);
    printf("070/BCT/546\tSHUBHAM KUMAR AGRAWAL");
    gotoxy(0,0);
    for(i=0;i<81;i++)
    {
        gotoxy(81-i,9);
        printf("%c",177);
        gotoxy(i,15);   printf("%c",177);
        Sleep(40);
    }
}

void main_view()
{
    gotoxy(0,0);
    printf(" |-----------------------------------------------------------------------------|");
    printf(" |                               BALL STRIKE                                   |");
    printf(" |                                                                             |");
    printf(" |-----------------------------------------------------------------------------|");
}

void Boarder()
{
    int i;
    for(i=1;i<66;i++)
    {
        gotoxy(i,4);
            printf("%c",178);
        gotoxy(i,24);
            printf("%c",178);
    }
    for(i=4;i<25;i++)
    {
        gotoxy(1,i);
            printf("%c",178);
        gotoxy(65,i);
        printf("%c",178);
    }
    main_view();
}
