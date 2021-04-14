include <stdio.h>
include <stdlib.h>
include <time.h>

int main(){



}

int playerFlee(int GameOn){

  int randomRoll;
  srand(time(NULL));
  randomRoll =rand()%100+1;
  
  if(randomRoll < 75){
    printf("Your pokemon sucussfully fled!");
    GameOn = 0;
    return 0;
    
  }
  else{
  printf("your pokemon couldn't leave the battle this time!");
  return GameOn;
  
  }


}