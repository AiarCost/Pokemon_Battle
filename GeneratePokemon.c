/***************************************

Contributer: Ariana Acosta
Summary of program: Takes the text file for a pokemon and gives 
variables to the stats to help set up the battle of the pokemon. 
It also will have the generation of the enemy pokemon as well.

****************************************/



#include <stdio.h> 
#include <stdlib.h>  // usages of atoi() function
#include <string.h> //Usages of strcpy() function
#include <time.h> //Usage of time regarding srand()

typedef struct PokemonStats{
  char pokeName[60];
  int pokeHP;
  int pokeAttack;
  int pokeDefense;
  int pokeIV;

}Pokemon;

Pokemon GenerateStats(int UserInput);

int main(){

  Pokemon playerPokmon = GenerateStats(1);
  Pokemon enemyPokemon = GenerateStats(-1);
  
  return (0);
}


Pokemon GenerateStats(int UserInput){
  
  /* vars declared. Want to change some to structs to help with player & enemy stats*/
  /*plan to place this into a function to only call in the main C file*/
  FILE* fp;
  char fileOutput[60];
  int fpLineCounter = 0;
  Pokemon x;
  
  /*This is to open the correct file based on UserInput, If UserInput = -1, this is an AI and will be randomly generated*/
  srand(time(NULL));
  if(UserInput == -1)
    UserInput = rand()%4+1;
  
  switch (UserInput){
    case 1:
      fp=fopen("Pikachu.txt", "r");
      break;
    case 2: 
      fp=fopen("Bulbasaur.txt", "r");
      break;
    case 3:
      fp=fopen("Charmander.txt", "r");
      break;
    case 4:
      fp=fopen("Squirtle.txt", "r");
      break;
  }
  
  /*This will open the correct txt file to read in the pokemon stats*/

  /*This opens the gile and continues to get each line from txt file until no more lines to get*/
  
  while(fgets(fileOutput, 60, fp) != NULL){
    /*This is a line counter. Txt files are made to have this structure for each pokemon. Will assign var to correct line*/
    switch (fpLineCounter){
      case 0:
        strcpy(x.pokeName, fileOutput);
        break;
      case 1:
        x.pokeHP = atoi(fileOutput);
        break;
      case 2:
        x.pokeAttack = atoi(fileOutput);
        break;
      case 3: 
        x.pokeDefense = atoi(fileOutput);
        break;     
    }
    
   fpLineCounter++; 
  }
  
  x.pokeIV = rand()%31+1;
  printf(" name: %s HP: %d \n Attack: %d \n Defense %d \n IV: %d\n", x.pokeName, x.pokeHP, x.pokeAttack, x.pokeDefense, x.pokeIV);
  return(x);


}

