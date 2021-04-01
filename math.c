/**************************************
    Contributer: Katelyn Ripa
    Summary: Function that displays
    the math that goes into the damamge
    dealt from player and enemy
**************************************/
#include <stdio.h>
#include <math.h>

int pokeDamage (Enemy) //function for the enemy attack
{
  int pokeHP;
  int pokeAttack;
  int pokeDefense;
  
  modifier = (STAB * type * critical * other * (random [.85, 1]));
  damage = ((2+10)/250 * (pokeAttack/pokeDefense) * power +2) * modifier);
  
  return Enemy;
}

int playerDamage (Player)  //function for the player attack
{
  int playerHP;
  int playerAttack;
  int playerDefense;
  
  modifier = (STAB * type * critical * other * (random [.85, 1]));
  damage = ((2+10)/250 * (pokeAttack/pokeDefense) * power +2) * modifier);
  
  return Player;
}

int main()
{
  pokeDamage();
  playerDamage();
}