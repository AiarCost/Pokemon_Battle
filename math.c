/**************************************
    Contributer: Katelyn Ripa
    Summary: Function that displays
    the math that goes into the damamge
    dealt from player and enemy
**************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "GeneratePokemon.c"

void pokeDamage (Pokemon *Player, Pokemon *Enemy, int aiInput) //function for the enemy attack
{
  //if the attack is an elemental attack...multiply by 1.5
  float STAB;
  if(aiInput == 1){
    STAB = 1.5f;
  }
  else {
    STAB = 1;
  }
  
  
  float modifier = (STAB * type * ((float)(rand()%16+85)/100));
  float damage = (((2+10)/250 * ((*Enemy).pokeAttack/(*Player).pokeDefense) * (*Enemy).pokeAttackPower1 +2) * modifier);
  damage = (int)(damage + .5);
  printf("%d", damage);
  
}

void playerDamage (Pokemon *Player, Pokemon *Enemy, int userInput)  //function for the player attack
{

  float STAB;
  if(userInput == 1){
    STAB = 1.5f;
  }
  else {
    STAB = 1;
  }
  
  
  float modifier = (STAB * type * ((float)(rand()%16+85)/100));
  float damage = (((2+10)/250 * ((*Player).pokeAttack/(*Enemy).pokeDefense) * (*Player).pokeAttackPower1 +2) * modifier);
  damage = (int)(damage +.5);
  printf("%d", damage); 

}


int main()
{
  Pokemon player = GenerateStats(1);
  Pokemon enemy = GenerateStats(-1);
  pokeDamage(&player, &enemy, 1);
  playerDamage(&player, &enemy, 1);
  return 0;
}
