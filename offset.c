/*
    This offset() helps in making the computer slow as ball moves fast
*/
#include "header.h"
void offset(int x)
{
    x++;
    if(x>1+ball_speed/50)
        x=1;
    return x;
}
