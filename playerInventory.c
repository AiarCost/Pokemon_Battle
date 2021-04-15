#include <stdio.h>
#include <unistd.h>
#include "GeneratePokemon.h"

void Inventory(Pokemon *player, int *healPotion){
  if((*healPotion)>0){
    (*player).pokeHP = (*player).pokeHP + 8;
    printf("Pokemon has been healed!\n");
    printf("New pokemon Hp: %d\n", (*player).pokeHP);
    (*healPotion) = (*healPotion) -1;
    printf("You have %d more potions.\n",(* healPotion));
    sleep(1);
  }
  else{
    printf("No more potions!!! Your pokemon will get attacked!");
    sleep(1);
  }
  

}
