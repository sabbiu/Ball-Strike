/*
    It contains the gotoxy()
*/
#include "header.h"
COORD coord={0,0}; 		// center of axis is set to (0,0)
void gotoxy(int x,int y)
{
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

