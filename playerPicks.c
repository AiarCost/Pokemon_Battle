/**************************************

    Zachary Traynor 
    Summary: Function displays the
    starting pokemon, then allows 
    the user to pick which pokemon
    they would like to start the 
    battle with. 

**************************************/

#include <stdio.h>
#include <string.h> // Used for reading ASCII arts length within AsciiArt Function
#define ASCII 128   // Includes all ASCII Characters

void AsciiArt(FILE *fp);

// Opens the ASCII Art Introduction File, then calls
// to the function                                   

int main() {
    
    char *File = "intro.txt"; // Setting variable to the ASCII Introduction File
    FILE *fp = NULL;
    fp = fopen(File,"r");
    AsciiArt(fp);
    fclose(fp);
   
    char Start[50];
    printf(" \n ");   
    printf("                Type in 'Start' to begin! ");
    fgets(Start,50,stdin); 

return 0; 
}


// Used to print ASCII Art within any file
// Contributor: Zachary Traynor             
   
void AsciiArt(FILE *fp) {
    
    char Art[ASCII]; // String that includes the length of all ASCII Characters 
    while(fgets(Art,sizeof(Art),fp)!= NULL) {
        printf("%s", Art);
    }
}


