#ifndef _header_files
#define _header_files

#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<windows.h>

#define EASY 10
#define MEDIUM 25
#define HARD 50

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

#define edgeAB 5
#define edgeBC 62
#define edgeCD 23
#define edgeDA 4

void plank1();
void plank2();
void ball();
void game_01();
int winner;
int pos,pos_comp;
int mode;
int ball_speed;
int counting,_counting;   //making computer control ineffective
int score_1,score_2;
int miss_1,miss_2;
enum{SINGLE,MULTI};
char name1[9],name2[9];

struct direction_of_ball
{
    int a;
    int b;
}ball_dirn;

struct pos_ball
{
    int x;
    int y;
}ball_cord;

//for storing the records to score
struct database
{
    char _name1[9];
    char _name2[9];
    int score1;
    int score2;
    char winne[9];
}db;
//function prototypes
void gotoxy(int x,int y);
void display(int y);
int option(int x);
void selection_loop();
void main_init_view();
void main_view();
void Boarder();
void start_the_game();
void game_01();
void new_game();
void plank1(int x,int y);
void plank2(int x,int y);
void ball(int x,int y);
void computer_ctrl();
void bend_ball();
void game_ball();
void _score();
void exit_game();
void score_disp();
void initialize_all_to_zer0();
void instruction();
void save_to_record();
void load_credits();
#endif // _header_files

