/********************************

Contributer: Ariana Acosta
Program Summary: This will hold the functions for attacking, items, and fleeing
                 during battle for the player


********************************/


#include <stdio.h>
#include <stdlib.h> /* for rand() */
#include <time.h>   /* for srand() */
#include "GeneratePokemon.c"

#define FLEEINGCHANCE 85




int PlayerFleeAttempt(int GameOn){
  
  srand(time(NULL));
  int fleeingNum = rand()%100+1
  if(fleeingNum >= FLEEINGCHANCE){
    printf("You have successfully ran away!");
    return 0;
  }
  else{
    printf("You couldn't flee this time!");
    return 1;
  }
}

