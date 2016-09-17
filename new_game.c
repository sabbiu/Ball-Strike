/*
    It contains the codes for the new game.
    Though there are few more functions for the computer control and player control.
*/
#include "header.h"

void start_the_game() //starts the game by asking the player name
{
    system("cls");
    ball_speed=0;   //increasing the speed of the ball as the game prolongs
    _counting=0;    //counting the moves of the computer play and makes computer inactive as the threshold is reached
    pos=12;         //initializing the initial position of the planks
    pos_comp=12;
    Boarder();      //Displaying the boarder for the game to begin
    plank1(pos_comp,222);   //Similarly, displaying the planks
    plank2(pos,221);
    if(mode==SINGLE) //if single player then asking the name of only one player
    {
        strcpy(name1,"COMPUTER");
        name1[8]='\0';
        gotoxy(8,10);
        printf("ENTER YOUR NAME: ");
        gets(name2);
        gotoxy(8,15);
    }
    if(mode==MULTI) //if multi player asking the name of two players
    {
        gotoxy(8,10);
        printf("ENTER THE NAME OF PLAYER_1:\t");
        gets(name1);
        gotoxy(8,13);
        printf("ENTER THE NAME OF PLAYER_2:\t");
        gets(name2);
        gotoxy(8,15);
    }
    printf("Press any key to continue...");
    getch();
    return;
}

void game_01()
{
    system("COLOR F5");
    ball_speed++;
    int s;
    do
    {
        if(_counting<=counting)
        {

        if(mode==SINGLE)
        {
            static int i=1;
            if(i)              //This is just for running computer control 1 out of 2 times
            if(!ball_dirn.a)    //Done for making the game look more beautiful
            {
                plank1(pos_comp,32);
                computer_ctrl();
                plank1(pos_comp,222);
            }
            i=!i;
        }
        }
        exit_game();
        bend_ball();
        if(ball_speed>=120)
            ball_speed=110;
        gotoxy(ball_cord.x,ball_cord.y);
        printf(" ");
        game_ball();
        if((ball_cord.y==edgeAB)||(ball_cord.y==edgeCD))
            Beep(220,80-ball_speed/2);
        else if ((ball_cord.x==edgeBC)||(ball_cord.x==edgeDA))
            Beep(550,80-ball_speed/2);
        else
            Sleep(80-ball_speed/2);
    }while(!kbhit()); //If any key is pressed in the keyboard the the loop terminates

    s=getch(); //then, the keystroke is stored in the variable s
        if((s==UP)&&(pos!=5))
        {
            plank2(pos,32);
            if(pos==6)
                pos--;
            else
                pos-=2;
            plank2(pos,221);
        }
        else if((s==DOWN)&&(pos!=19))
        {
            plank2(pos,32);
            if(pos==18)
                pos++;
            else
                pos+=2;
            plank2(pos,221);
        }

        if(mode==MULTI) //Works only when user has chosen multi player mode
        {
                if(((s=='W')||(s=='w'))&&(pos_comp!=5))
                {
                        plank1(pos_comp,32);
                        if(pos_comp==6)
                            pos_comp--;
                        else
                            pos_comp-=2;
                        plank1(pos_comp,222);
                }
                else if(((s=='S')||(s=='s'))&&(pos_comp!=19))
                {
                        plank1(pos_comp,32);
                        if(pos_comp==18)
                            pos_comp++;
                        else
                            pos_comp+=2;
                        plank1(pos_comp,222);
                }
        }
        game_01();
}



void new_game()
{
    int i,j;
    int s;

    ball_dirn.a=1;
    ball_dirn.b=1;
    if(miss_1||miss_2)
    {
        gotoxy(edgeBC/2-13,edgeCD/2+4);
        printf("Missed... press \"ENTER\" to continue...");
        for(;;)
            if(getch()==13)
                break;
    }
    //clears the board
    for(i=edgeDA;i<=edgeBC;i++)
    {
        for(j=edgeAB;j<=edgeCD;j++)
        {
            gotoxy(i,j);
            printf(" ");
        }
    }
    score_disp();
    //creating the random position for the ball and its direction
    int randomNumber = rand();
    ball_cord.x = 32;
    ball_cord.y = (randomNumber%17)+6;
    ball_dirn.a = (randomNumber%2);
    ball_dirn.b = (randomNumber%2);
    plank1(pos_comp,222);
    plank2(pos,221);
    ball(ball_cord.x,ball_cord.y);
    game_01();
}
