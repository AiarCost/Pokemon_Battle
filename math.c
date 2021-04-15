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
#include "GeneratePokemon.h"
#include <string.h>
float Typemultiplier(Pokemon Attacker, Pokemon Defender);
void pokeDamage (Pokemon *Player, Pokemon *Enemy, int aiInput);
void playerDamage (Pokemon *Player, Pokemon *Enemy, int userInput);

float Typemultiplier(Pokemon Attacker, Pokemon Defender){
  
  float typeMultiplier = 1;
  
  //if the attacker attack type and defender poke type are the same, 1/2 mult.
  if(Attacker.pokeAttackType1 == Defender.pokeType) {
      typeMultiplier = .5f;
  }
  
  //ATTACKER: Water
  else if (strncmp(Attacker.pokeAttackType1, "Water", 5) == 0){
    //Defender grass
    if(strncmp(Defender.pokeType, "Grass", 5) == 0){
    
      typeMultiplier = .5f;
    } 
    //Defender Fire
    else if(strncmp(Defender.pokeType, "Fire", 4) == 0){
      typeMultiplier = 2;
    }
    //Defender Electric auto reutrns 1
  } 
  
  //ATTACKER: Fire
  else if (strncmp(Attacker.pokeAttackType1, "Fire", 4) == 0){
    
    //Defender grass
    if(strncmp(Defender.pokeType, "Water", 5) == 0){
      typeMultiplier = .5f;
    } 
    
    //Defender Fire
    else if(strncmp(Defender.pokeType, "Grass", 5) == 0){
      typeMultiplier = 2;
    }
    //Defender Electric auto returns 1
  } 
  

  //ATTACKER: Grass
  else if (strncmp(Attacker.pokeAttackType1, "Grass", 5) == 0){
    //Defender Fire
    if(strncmp(Defender.pokeType, "Fire", 4) == 0){
      typeMultiplier = .5f;
    } 
    //Defender Water
    else if(strncmp(Defender.pokeType, "Water", 5) == 0){
      typeMultiplier = 2;
    }
    //Defender Electric auto returns 1
  }
  
    //ATTACKER: Electric
  else if (strncmp(Attacker.pokeAttackType1, "Electric", 8) == 0){
    //Defender grass
    if(strncmp(Defender.pokeType, "Grass", 5) == 0){
      typeMultiplier = .5f;
      return typeMultiplier;
    } 
    //Defender Water
    else if(strncmp(Defender.pokeType, "Water", 5) == 0){
      typeMultiplier = 2;
      return typeMultiplier;
    }
    //Defender Fire auto returns 1
  }
  return typeMultiplier;
}


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
  
  float type;
  type = Typemultiplier((*Enemy), (*Player));
 // printf("type: %f ", type);
  
  float modifier = (STAB * type * ((float)(rand()%16+85)/100));
 // printf("modifier: %f ", modifier);
  float damage = (((2+10)/250 * ((*Enemy).pokeAttack/(*Player).pokeDefense) * (*Enemy).pokeAttackPower1 +2) * modifier);
 // printf("Damage: %f ", damage);
  damage = (int)(damage + .5);
 // printf("%f ", damage);
  (*Player).pokeHP = (*Player).pokeHP - damage;
 // printf("****%d \n", (*Player).pokeHP);
  
}

void playerDamage (Pokemon *Player, Pokemon *Enemy, int userInput)  //function for the player attack
{
  // printf("\nEnemy HP: %d\n", (*Enemy).pokeHP);
  float STAB;
  if(userInput == 1){
    STAB = 1.5f;
  }
  else {
    STAB = 1;
  }
 // printf("PLAYERSTAB: %f ",STAB);
  float type;
  type = Typemultiplier((*Player), (*Enemy));
 //  printf("Ptype: %f", type);
  
  float modifier = (STAB * type * ((float)(rand()%16+85)/100));
 // printf("Pmodifier: %f ", modifier);
  float damage = (((2+10)/250 * ((*Player).pokeAttack/(*Enemy).pokeDefense) * (*Player).pokeAttackPower1 +2) * modifier);
 // printf("PDamage: %f ", damage);
  damage = (int)(damage +.5);
 // printf(" Enemy Health: %d ",(*Enemy).pokeHP);
 // printf(" %f ", damage); 
  (*Enemy).pokeHP = (*Enemy).pokeHP - damage;
 // printf(" ****%d\n", (*Enemy).pokeHP);

}



