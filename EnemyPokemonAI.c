/***************************************************

Contributors: Ariana Acosta, Katelyn Ripa

Summary: Enemy AI and where the enemy chooses what it should do


**************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "GeneratePokemon.h"


void EnemyAIChoose(Pokemon *player, Pokemon *enemy, int enemyMaxHP, int *Fled1){

  float hpPercentage =(float)(*enemy).pokeHP/enemyMaxHP;
  srand(time(NULL));
  float RandomRoll = rand()%100+1;
  if( hpPercentage <= .5f){
      //.5% = 35-29.5 .01% = 35-.5
      if(RandomRoll <= (35 - ((hpPercentage*100)/1.7f))){
          //Enemy pokemon flees
          *Fled1 = 1;
          printf("\nEnemy fleeing!\n");
          }
      else{
          RandomRoll=(int)(RandomRoll+.5)%2+1;
        
          if(RandomRoll == 1){
            pokeDamage(&(*player), &(*enemy), RandomRoll);
            printf("\nEnemy Attack: %s\n", (*enemy).pokeAttackName1);
          }
          else{
            pokeDamage(&(*player), &(*enemy), RandomRoll);            
            printf("\nEnemy Attack: %s\n",(*enemy).pokeAttackName2);
        }
      }
  }   
  else{
    RandomRoll=(int)(RandomRoll+.5)%2+1;
        
    if(RandomRoll == 1){
      pokeDamage(&(*player), &(*enemy), RandomRoll);
      printf("\nEnemy Attack: %s\n", (*enemy).pokeAttackName1);
    }
    else{
      pokeDamage(&(*player), &(*enemy), RandomRoll);
      printf("\nEnemy Attack: %s\n", (*enemy).pokeAttackName2);
    }
      
  }
}


