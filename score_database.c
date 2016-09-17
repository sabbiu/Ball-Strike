#include "header.h"
void save_to_record()
{
    FILE *info;
    info=fopen("record.txt","a+");
    system("cls");
    strcpy(db._name1,name1);
    if(strcmp(name2,"\0"))
        strcpy(db._name2,name2);
    else
        strcpy(db._name2,"UNKNOWN");
    db.score1=score_1;
    db.score2=score_2;
    if(winner==1)
        strcpy(db.winne,name1);
    else
        strcpy(db.winne,name2);

    if(info!=NULL)
    {
        fprintf(info,"%s %s %d %d %s\n",db._name1,db._name2,db.score1,db.score2,db.winne);  //write records to file
        fflush(stdin);
        fclose(info);
    }
    else
    {
        system("cls");
        printf("file not created::::");
    }
}
