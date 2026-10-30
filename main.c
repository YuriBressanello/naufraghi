#include <stdio.h>

//MENU PRESENTATION

int menu(int choice){

    printf("Menu principale:\n"
            "1. Nuova partita\n"
            "2. Crediti\n"
            "3. Esci\n"
            "Selezione una delle opzioni del menu [1-3]: ");
    do{
        scanf(" %d", &choice);
        if (choice < 1 || choice > 3){
            printf("Le opzioni sono da 1 a 3\n");
            printf("1. Nuova partita\n"
                    "2. Crediti\n"
                    "3. Esci\n"
                    "Selezione una delle opzioni del menu[1-3]: ");
        }
    }while(choice < 1 || choice > 3);

    return choice;

}

int main(){

    //Implementing the logic of the choice
    int choice = menu(choice);
    if (choice == 1)
        return 0;
        //func --> new game
    else if (choice == 2)
        return 0;
        //func --> credits
    else if (choice == 3)
        return 0;
    else if (choice == 4)
        //func --> cheats
        return 0;

    return 0;

}
