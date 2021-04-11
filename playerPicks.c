/**************************************

    Zachary Traynor 
    Summary: Function displays the
    starting pokemon, then allows 
    the user to pick which pokemon
    they would like to start the 
    battle with. 

**************************************/

#include <stdio.h> 
#include <string.h> /* Used for reading ASCII arts length within AsciiArt Function. */
#include <ctype.h>  /* Used for the "tolower" function, allowing for error handling from user input. */
#include "GeneratePokemon.c" /* */
#define ASCII 128   /* Global Variable that includes all 128 ASCII Characters. */ 

Pokemon PokemonSelect();
void AsciiArt(FILE *fp);

/* Opens ASCII Art & calls from function AsciiArt. Robust error checking is included too. */                                   

int main() {

    /* Opens up Ascii Art file, then calls for the funtion to print the ASCII Art. */
    char *File = "intro.txt"; 
    FILE *fp;
    fp = fopen(File,"r");
    AsciiArt(fp);
    fclose(fp);

    /* Prompts the user to start the game. */
    char Start[50]; /* String holding the users input */
    int i = 0;      /* Initial condition for while loops */ 
    printf(" \n ");   
    printf("           Type in 'Start' to begin! ");
    fgets(Start,50,stdin); 

    /* Robust error checking */
    while(Start[i]) {
       Start[i] =  tolower(Start[i]);
        i++;
    }
    while((strncmp(Start, "start", 5) != 0) || (strlen(Start) != 6)) {
        printf("            Invalid input. Please type in 'Start!'  ");
        fgets(Start, 50, stdin);
        i = 0; /* Re-initialzing i to 0 */
        for(Start[i]; i <= 6; i++) {
            Start[i] = tolower(Start[i]);
       
        }
    }

    PokemonSelect();

return 0;

}
/* Function that prompts user for which Pokemon they want
   and starts the battle. Includes error checking         */
 
Pokemon PokemonSelect() {

    /* Opens the 2nd Ascii Art file, then calls for the function to print the ASCII Art */
    char *File2 = "start.txt";
    FILE *fp2;         
    fp2 = fopen(File2,"r");
    AsciiArt(fp2);
    fclose(fp2); 
   
    /* Allows the user to pick which pokemon they want out of 4 choices. */
    int PokemonSelect; /* Int allowing the user to select which Pokemon they choose */
    int Check;         /* Int which 'checks' to see what value scanf gives out */
    printf("\n");
    printf("                    Which Pokemon do you choose? ");
    Check = scanf("%d", &PokemonSelect);

    /* Robust error checking */
    while((PokemonSelect <= 0) || (PokemonSelect >= 5) || (Check != 1)) {
        printf("\n");
        printf("           Invalid input. Please type a number 1-4:");
        scanf("%*[^\n]");
        Check = scanf("%d", &PokemonSelect);
    }

    Pokemon player = GenerateStats(PokemonSelect);

return player; 
}


/* Used to print ASCII Art within any file 
   Contributor: Zachary Traynor            */   

void AsciiArt(FILE *fp) {
    
    char Art[ASCII]; /* String that includes the length of all ASCII Characters */ 
    while(fgets(Art,sizeof(Art),fp)!= NULL) { /* While loop that prints characters until it hits a null type */
        printf("%s", Art);
    }
}

/************************ END OF CODE ************************/
