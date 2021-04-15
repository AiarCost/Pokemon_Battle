#ifndef GENERATEPOKEMON
#define GENERATEPOKEMON

#include <stdio.h>

typedef struct PokemonStats{
  char pokeName[60];
  int pokeHP;
  int pokeAttack;
  int pokeDefense;
  
  char pokeAttackName1[30];
  int pokeAttackPower1;
  int pokeAttackAcc1;
  
  char pokeAttackName2[30];
  int pokeAttackPower2;
  int pokeAttackAcc2;

  int pokeIV;
  char pokeType[10];
  char pokeAttackType1[10];
  char pokeAttackType2[10];  

}Pokemon;

// These function(s) are within the same file
Pokemon GenerateStats(int UserInput);

// These function(s) are within the same file
// Prints all Ascii Art & Stat Data
void AsciiArt(FILE *fp);

// These function(s) are within the same file
int PlayerFleeAttempt(int GameOn);

// These function(s) are within the same file
void EnemyAIChoose(Pokemon *player, Pokemon *enemy, int enemyMaxHP, int *Fled1);

// These functions are within the same file
float Typemultiplier(Pokemon Attacker, Pokemon Defender);
void pokeDamage (Pokemon *Player, Pokemon *Enemy, int aiInput);
void playerDamage (Pokemon *Player, Pokemon *Enemy, int userInput);

// These function(s) are within the same file
void playerFlee(int *Fled);

// These function(s) are within the same file 
void Inventory(Pokemon *player, int *healPotion);

// These Functions are within the same file
// Prints and prompts user for their move input 
void PlayerInterface(int *PokemonSelect);
// Battle Sequence between the player and enemy AI
void PlayerMove(Pokemon *player, Pokemon *enemy, int *HealthPotion, int *Fled1, int *PokemonSelect);


#endif
