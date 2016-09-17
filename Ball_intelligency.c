/*
    It contains the position for the ball and decides whether to bend the ball if it hit the wall or plank
*/
#include "header.h"
void bend_ball()
{
    if((ball_cord.x<=edgeDA)||(ball_cord.x>=edgeBC))
        ball_dirn.a=!ball_dirn.a;
    if((ball_cord.y<=edgeAB)||(ball_cord.y>=edgeCD))
        ball_dirn.b=!ball_dirn.b;
}

void game_ball()
{
    if ((ball_cord.x<=edgeBC)&&(ball_cord.x>=edgeDA)&&(ball_cord.y>=edgeAB)&&(ball_cord.y<=edgeCD))
    {
        if(ball_dirn.a)
        {
            if(ball_dirn.b)
            {
                ball_cord.x+=2;
                ball_cord.y++;
            }
            else if(!ball_dirn.b)
            {
                ball_cord.x+=2;
                ball_cord.y--;
            }
        }
        else if(!ball_dirn.a)
        {
            if(ball_dirn.b)
            {
                ball_cord.x-=2;
                ball_cord.y++;
            }
            else if(!ball_dirn.b)
            {
                ball_cord.x-=2;
                ball_cord.y--;
            }
        }
    }
    ball(ball_cord.x,ball_cord.y);
}
