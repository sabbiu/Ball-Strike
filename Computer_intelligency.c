/*
    It is for the movement of the plank by the computer by taking the reference of the ball's position
*/
#include "header.h"
void computer_ctrl()
{
        int s;
        s=ball_cord.y;
        if((s==pos_comp+1)&&(s<=pos_comp+4))
            return;
        if(ball_dirn.b)
        {
            if(s<=pos_comp)
                return;
            if(pos_comp==19)
                return;
            if((pos_comp==18)||(pos_comp==17))
                pos_comp++;
            else
                pos_comp+=2;
        }
        if(!ball_dirn.b)
        {
            if(s>=pos_comp+3)
                return;
            if(pos_comp==5)
                return;
            if((pos_comp==6)||(pos_comp==7))
                pos_comp--;
            else
                pos_comp-=2;
        }
}
