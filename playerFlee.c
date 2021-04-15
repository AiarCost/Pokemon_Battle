#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "GeneratePokemon.h"

void playerFlee(int *Fled){

  int randomRoll;
  srand(time(NULL));
  randomRoll =rand()%100+1;
  
  if(randomRoll < 75){
    printf("Your pokemon sucussfully fled!");
    *Fled = 1;
    
  }
  else{
  printf("Your pokemon couldn't leave the battle this time!");
  
  }


}
