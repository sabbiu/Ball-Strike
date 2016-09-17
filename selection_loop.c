/*
    It contains the code for the options such as new game, controls, exit, etc.
*/
#include "header.h"
int op_3=1,op_4=2; // used in the case of selection of single player and multiplayer
void display(int y)
{
    int j;
    main_view();
    for(j=1;j<=7;j++)
    {
        if(j==1)
        {
            printf("\n\n\t\tNEW GAME");
            if(y==j)
                printf("\t<<==");
        }
        if(j==2)
        {
            printf("\n\n\t\tINSTRUCTION");
            if(y==j)
                printf("\t<<==");
        }
        if(j==3)
        {
            if(op_3)
            {
                printf("\n\n\t\tSINGLE PLAYER");
                mode=SINGLE;
            }
            else
            {
                printf("\n\n\t\tMULTI PLAYER");
                mode=MULTI;
            }
            if(y==j)
                printf("\t<<==");
        }
        if(j==4)
        {
            if(op_4==1)
            {
                printf("\n\n\t\tEASY");
                counting=EASY;
            }
            else if(op_4==2)
            {
                printf("\n\n\t\tMEDIUM");
                counting=MEDIUM;
            }
            else if(op_4=3)
            {
                printf("\n\n\t\tHARD");
                counting=HARD;
            }
            if(y==j)
                printf("\t\t<<==");
        }

        if(j==5)
        {
            printf("\n\n\t\tSCORES");
            if(y==j)
                printf("\t\t<<==");
        }
        if(j==6)
        {
            printf("\n\n\t\tCREDITS");
            if(y==j)
                printf("\t\t<<==");
        }
        if(j==7)
        {
            printf("\n\n\t\tEXIT");
            if(y==j)
                printf("\t\t<<==");
        }
    }
}

int option(int x)
{
    if(x==1)
    {
        start_the_game();
        new_game();
    }
    if(x==2)
    {
        system("cls");
        main_view();
        instruction();
    }
    if(x==3)
    {
        op_3=!op_3;
        selection_loop();
    }
    if(x==4)
    {
        op_4++;
        if(op_4==4)
            op_4=1;
        selection_loop();
    }
    if(x==5)
        _score();
    if(x==6)
    {
        system("cls");
        main_view();
        load_credits();
    }
    if(x==7)
    {
        system("cls");
        exit(0);
    }
}

void selection_loop() //it controls the up down movement of keys by the user to switch betn options
{
    int s;
    static int cn=1;
    for(;;)         //forever loop
    {
        system("cls");
        display(cn);
        s=getch();
        if(s==13)
        {
            option(cn);
            continue;
        }
        if(s==UP &&cn!=1)
            cn--;
        if(s==DOWN&&cn!=7)
            cn++;
    }
}
