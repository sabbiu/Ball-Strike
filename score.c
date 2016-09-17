/*
    It has all to deal with scores and uses the concept of file handling
*/
#include "header.h"
void _score()
{
    system("COLOR 5F");
    system("cls");
    char i;
    int j,s;
    main_view();
    for(;;)
    {
        FILE *fptr=fopen("record.txt","r");
        if(fptr)
        {
                system("cls");
                main_view();
                printf("\t\tEnter 1, 2 or 3:\n\
                    1. See records for Single Player\n\
                    2. See records for Multi player\n\
                    3. Go back to MAIN MENU\n\n\n\
                    \t\t");
                scanf("%c",&i);
            switch(i)
            {
            case '1':
                {
                    system("cls");
                    main_view();
                    printf("  Press Down arrow to see next page and Esc to return back\n");
                    printf("\n---------------------------------------------------------------");
                    printf("\n S.No.\tPlayer name\tScore\tWinner");
                    printf("\n---------------------------------------------------------------");
                    j=1;
                    rewind(fptr);
                    while(fscanf(fptr,"%s %s %d %d %s",db._name1,db._name2,&db.score1,&db.score2,db.winne)!=EOF)
                    {

                        if(strcmp(db._name1,"COMPUTER")==0)
                        {
                            printf("\n  %d\t %-9s\t %-5d\t %-9s\n",j,db._name2,db.score2,db.winne);
                            if(j%7==0)
                            {
                                for(;;)
                                {
                                    s=getch();
                                    if(s==DOWN)
                                    {
                                        system("cls");
                                        main_view();
                                        printf("  Press Down arrow to see next page and Esc to return back\n");
                                        printf("\n---------------------------------------------------------------");
                                        printf("\n S.No.\tPlayer name\tScore\tWinner");
                                        printf("\n---------------------------------------------------------------");
                                        break;
                                    }
                                    else if(s==27)
                                    {
                                        fclose(fptr);
                                        goto ENDS1;
                                    }
                                    else
                                        continue;
                                }
                            }
                            j++;
                        }
                    }
                    printf("\n\nEND OF RECORD.. press \"Enter\"");
                    for(;;)
                        if(getch()==13)
                            break;
                    fclose(fptr);
                    ENDS1:
                        ;
                    break;
                }
            case '2':
                {

                    system("cls");
                    main_view();
                    printf("  Press Down arrow to see next page and Esc to return back\n");
                    printf("\n---------------------------------------------------------------");
                    printf("\n S.No.\tPlayer 1\tScore\tPlayer 2\tScore\tWinner");
                    printf("\n---------------------------------------------------------------");
                    j=1;
                    rewind(fptr);
                    while(fscanf(fptr,"%s %s %d %d %s",db._name1,db._name2,&db.score1,&db.score2,db.winne)!=EOF)
                    {

                        if(strcmp(db._name1,"COMPUTER")!=0)
                        {
                            printf("\n  %d\t %-9s\t %-5d\t %-9s\t %-5d\t %-9s\n",j,db._name1,db.score1,db._name2,db.score2,db.winne);
                            if(j%7==0)
                            {
                                for(;;)
                                {
                                    s=getch();
                                    if(s==DOWN)
                                    {
                                        system("cls");
                                        main_view();
                                        printf("  Press Down arrow to see next page and Esc to return back\n");
                                        printf("\n---------------------------------------------------------------");
                                        printf("\n S.No.\tPlayer 1\tScore\tPlayer 2\tScore\tWinner");
                                        printf("\n---------------------------------------------------------------");
                                        break;
                                    }
                                    else if(s==27)
                                    {
                                        fclose(fptr);
                                        goto ENDS1;
                                    }
                                    else
                                        continue;
                                }
                            }
                            j++;
                        }
                    }
                    printf("\n\nEND OF RECORD.. press \"Enter\"");
                    for(;;)
                        if(getch()==13)
                            break;
                    fclose(fptr);
                    break;
                }
            case '3':
                {
                    system("COLOR F5");
                    fclose(fptr);
                    goto ends;
                }
            default:
                {
                    break;
                }
            }
        }
        else
        {
            system("cls");
            main_view();
            printf("\n\tNO SCORES FOUND\n\n\tPress Esc to return back");
            for(;;)
                if(getch()==27)
            system("COLOR F5");
                    goto ends;
        }

    }
    ends:
        ;
}
