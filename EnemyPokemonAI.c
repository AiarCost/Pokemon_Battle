/***************************************************

Contributors: Ariana Acosta, Katelyn Ripa

Summary: Enemy AI and where the enemy chooses what it should do


**************************************************/


#include <stdio.h>
#include "GeneratePokemon.c"
#include <stdlib.h>
#include <time.h>

void EnemyAIChoose(Pokemon Enemy, int enemyMaxHP);

int main(){

  Pokemon enemy = GenerateStats(-1);
  int enemyMaxHP = enemy.pokeHP;
  EnemyAIChoose(enemy, enemyMaxHP);
return 0;
}


void EnemyAIChoose(Pokemon Enemy, int enemyMaxHP){

  float hpPercentage = Enemy.pokeHP/enemyMaxHP;
  srand(time(NULL));
  float RandomRoll = rand()%100+1;
      
  if( hpPercentage <= .5f){
      //.5% = 35-29.5 .01% = 35-.5
      if(RandomRoll <= (35 - ((hpPercentage*100)/1.7f))){
          //Enemy pokemon flees
          printf("Enemy fleeing!\n");
          }
      else{
          RandomRoll=(int)(RandomRoll+.5)%2+1;
        
          if(RandomRoll == 1){
            //Enemy Attack 1
            printf("Enemy Attack 1\n");
          }
          else{
            //Enemy Attack 2
            printf("Enemy Attack 2\n");
        }
      }
  }   
  else{
    RandomRoll=(int)(RandomRoll+.5)%2+1;
        
    if(RandomRoll == 1){
      //Enemy Attack 1
      printf("Enemy Attack 1\n");
    }
    else{
      //Enemy Attack 2
      printf("Enemy Attack 2\n");
    }
      
  }
}

