/**************************************
    Contributer: Katelyn Ripa
    Summary: Function that displays
    the math that goes into the damamge
    dealt from player and enemy
**************************************/
#include <stdio.h>
#include <math.h>
#include "GeneratePokemon.c"

void pokeDamage (Pokemon *Player, Pokemon *Enemy) //function for the enemy attack
{
  int STAB;
  STAB = pokeAttackPower1 * 1.5;
  modifier = (STAB * type * (random [.85, 1]));
  damage = ((2+10)/250 * ((*Enemy).pokeAttack/(*Player).pokeDefense) * power +2) * modifier);
  
  
}

void playerDamage (Pokemon *Player, Pokemon *Enemy)  //function for the player attack
{
  int STAB;
  STAB = pokeAttackPower1 * 1.5;
  modifier = (STAB * type * critical * other * (random [.85, 1]));
  damage = ((2+10)/250 * ((*Player).pokeAttack/(*Enemy).pokeDefense) * power +2) * modifier);
  

}


int main()
{
  pokeDamage();
  playerDamage();
}
