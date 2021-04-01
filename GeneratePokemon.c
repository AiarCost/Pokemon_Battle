/***************************************

Contributer: Ariana Acosta
Summary of program: Takes the text file for a pokemon and gives 
variables to the stats to help set up the battle of the pokemon. 
It also will have the generation of the enemy pokemon as well.

****************************************/



#include <stdio.h> 
#include <stdlib.h>  // usages of atoi() function
#include <string.h> //Usages of strcpy() function

int main(){

  /* vars declared. Want to change some to structs to help with player & enemy stats*/
  
  /*plan to place this into a function to only call in the main C file*/
  FILE* fp;
  char fileOutput[60];
  char name[60];
  int playerHP;
  int playerAttack;
  int playerDefense;
  int fpLineCounter = 0;
  
  /*This opens the gile and continues to get each line from txt file until no more lines to get*/
  fp=fopen("PokemonFile.txt", "r");
  while(fgets(fileOutput, 60, fp) != NULL){
    /*This is a line counter. Txt files are made to have this structure for each pokemon. Will assign var to correct line*/
    switch (fpLineCounter){
      case 0:
        strcpy(name, fileOutput);
        break;
      case 1:
        playerHP = atoi(fileOutput);
        break;
      case 2:
        playerAttack = atoi(fileOutput);
        break;
      case 3: 
        playerDefense = atoi(fileOutput);
        break;     
    }
    
   fpLineCounter++; 
  }
  printf("name: %s \n HP: %d \n Attack: %d \n Defense %d \n", name, playerHP, playerAttack, playerDefense);
  return(0);
}
