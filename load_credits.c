/*
    It includes the credits
*/
void load_credits()
{
    system("cls");
    system("COLOR 4F");
    main_view();
    printf("\tTHE GAME WAS DEVELOPED UNDER THE SUPERVISION OF \n\n\
           \t\t\"SIR BABURAM DAWADI\"\n\n\
        BY:-\n\n\
           \tBCT/070/521\tMIRAN GHIMIRE\n\n\
           \tBCT/070/531\tSABBIU SHAH\n\n\
           \tBCT/070/546\tSHUBHAM KUMAR AGRAWAL\n");
    printf("\n\nPress \"Esc\" to go back");
    for(;;)
        if(getch()==27)
            break;
    system("COLOR F5");
}
