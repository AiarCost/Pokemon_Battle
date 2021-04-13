#include <stdio.h>
#include "playerInventory.c"

/* Function is used to print the users choices 
   when fighting during the battle             
   Contributor: Zachary Traynor                */

void PlayerInterface(int PokemonSelect) {
       
    if(PokemonSelect == 1) {
        char *Doc1 = "SelectPikachu.txt";
        FILE *dc1;
        dc1 = fopen(Doc1, "r");
        AsciiArt(dc1);
        fclose(dc1);
    }
    else if(PokemonSelect == 2) {
        char *Doc2 = "SelectBulbasaur.txt";
        FILE *dc2;
        dc2 = fopen(Doc2, "r");
        AsciiArt(dc2);
        fclose(dc2);
    }
    else if(PokemonSelect == 3) {
        char *Doc3 = "SelectCharmander.txt";
        FILE *dc3;
        dc3 = fopen(Doc3, "r");
        AsciiArt(dc3);
        fclose(dc3);
    }
    else if(PokemonSelect == 4) {
        char *Doc4 = "SelectSquirtle.txt";
        FILE *dc4;
        dc4 = fopen(Doc4, "r");
        AsciiArt(dc4);
        fclose(dc4);
    }
}

void PlayerMove() {
    
    int Move;
    int Check;
    printf("Type in your move: ");
    Check = scanf("%d", &Move);
     
    /* Robust error checking */
    while((Move <= 0) || (Move >= 5) || (Check != 1)) {
        printf("\n");
        printf("           Invalid input. Please type a number 1-4:");
        scanf("%*[^\n]");
        Check = scanf("%d", &Move);
    }
<<<<<<< HEAD
    
    switch Move{
    
      case 1:
        
      case 2:
      
      case 3:
        playerInventory();
        break;
      case 4:
        playerFlee();
        break
    }
=======
>>>>>>> 8b83184f109a72f1440a02fd00821532bb147e79
}
