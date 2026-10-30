#include <stdio.h>

void menu(){

    printf("Menu principale:\n"
            "1. Nuova partita\n"
            "2. Crediti\n"
            "3. Esci\n"
            "Selezione una delle opzioni del menu [1-3]: ");
    int choice;
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

}

int main(){

    menu();

    return 0;

}
