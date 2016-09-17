/*
    It checks if the players have missed to hit the ball and exits the game finally
*/
#include "header.h"

void exit_game()
{
    int loop,over=1;
    if(miss_1==10)
    {
        //score();
        gotoxy(10,15);
        printf("%s WINS",name2);
        winner=2;
        getch();

        save_to_record();
        initialize_all_to_zer0();

        selection_loop();

    }
    if(miss_2==10)
    {
        gotoxy(10,15);
        printf("%s WINS",name1);
        winner=1;
        getch();

        save_to_record();
        initialize_all_to_zer0();
        selection_loop();
    }
    if(ball_cord.x==edgeBC)
    {
        for(loop=0;loop<5;loop++)
            if(ball_cord.y==pos+loop)
                over=0;
        if(over==0)
        {
            score_2++;
            _counting++;
            score_disp();
            return;
        }
        system("COLOR F4");
        miss_2++;
        _counting=0;
        ball_speed=0;
        score_1+=2;
        score_disp();
        new_game();

    }
    if(ball_cord.x==edgeDA)
    {
        for(loop=0;loop<5;loop++)
            if(ball_cord.y==pos_comp+loop)
                over=0;
        if(over==0)
        {
            score_1++;
            _counting++;
            score_disp();
            return;

        }
        system("COLOR F4");
        miss_1++;
        score_2+=2;
        _counting=0;
        ball_speed=0;
        score_disp();
        new_game();
    }
}
