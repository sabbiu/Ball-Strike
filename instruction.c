/*
    This page contains the instruction for the game
*/
void instruction()
{
    system("COLOR 70");
    printf("\n\tThis game contains two modes of playing.\n\
           Single Player and Multi Player.\n\
           Player 1 i.e, COMPUTER in single player\n\
           uses 'W' & 'S' keys to control the plank\n\
           While Player 2 uses 'UP' & 'DOWN' arrow keys to control the plank\n\n\
           Also the game contains options such as \"EASY\", \"MEDIUM\", \"HARD\"\n\
           So, that user can choose as per his ability to control the game\n\n\
           You must not let the ball miss by the plank\n\
           As the game precedes the speed of the ball increases\n\
           10 Miss is given to each player\n\
           \n\n\tPress Esc to go back...");

    for(;;) //forever loop
        if(getch()==27)
        {
            system("COLOR F5");
            break;
        }
}
