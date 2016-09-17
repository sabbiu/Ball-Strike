/*
    Contains the code that prints the planks and ball for the given position
*/
#include "header.h"
void plank1(int x,int y)
{
    int i;
    for(i=x;i<x+5;i++)
    {
        gotoxy(3,i);
        printf("%c",y);
    }
}

void plank2(int x,int y)
{
    int i;
    for(i=x;i<x+5;i++)
    {
        gotoxy(63,i);
        printf("%c",y);
    }
}
void ball(int x,int y)
{
    gotoxy(x,y);
    printf("O");
}
