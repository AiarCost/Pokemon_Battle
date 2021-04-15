#include <stdio.h>
#include "GeneratePokemon.h"
#include "AsciiArt.h"

/* Function is used to print the users choices 
   when fighting during the battle             
   Contributor: Zachary Traynor                */

void PlayerInterface(int *PokemonSelect) {
       
    if((*PokemonSelect) == 1) {
        char *Doc1 = "SelectPikachu.txt";
        FILE *dc1;
        dc1 = fopen(Doc1, "r");
        AsciiArt(dc1);
        fclose(dc1);
    }
    else if((*PokemonSelect) == 2) {
        char *Doc2 = "SelectBulbasaur.txt";
        FILE *dc2;
        dc2 = fopen(Doc2, "r");
        AsciiArt(dc2);
        fclose(dc2);
    }
    else if((*PokemonSelect) == 3) {
        char *Doc3 = "SelectCharmander.txt";
        FILE *dc3;
        dc3 = fopen(Doc3, "r");
        AsciiArt(dc3);
        fclose(dc3);
    }
    else if((*PokemonSelect) == 4) {
        char *Doc4 = "SelectSquirtle.txt";
        FILE *dc4;
        dc4 = fopen(Doc4, "r");
        AsciiArt(dc4);
        fclose(dc4);
    }
}

void PlayerMove(Pokemon *player, Pokemon *enemy, int *HealthPotion, int *Fled, int *PokemonSelect) {
    
    int Move;
    int Check;
    PlayerInterface(&(*PokemonSelect));
    printf("Your Pokemon: %s Hp: %d\n",(*player).pokeName, (*player).pokeHP);
    printf("\n");
    printf("Enemy Pokemon: %s Hp: %d\n",(*enemy).pokeName, (*enemy).pokeHP);
    printf("\nType in your move: ");
    Check = scanf("%d", &Move);
     
    /* Robust error checking */
    while((Move <= 0) || (Move >= 5) || (Check != 1)) {
        printf("\n");
        printf("           Invalid input. Please type a number 1-4:");
        scanf("%*[^\n]");
        Check = scanf("%d", &Move);
    }

    switch(Move){
        case 1: 
            playerDamage(&(*player), &(*enemy), Move);
            break;
        case 2:
            playerDamage(&(*player), &(*enemy), Move);       
            break;   
        case 3:
            Inventory(&(*player), &(*HealthPotion));
            break;
        case 4:
            playerFlee(&(*Fled));           
            break;    
    }
 
}
