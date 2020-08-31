#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randStat(int, int);
int battleStyle();
void showStats(int, int, int, int);
void continueGame();

int main() {
  srand(time(0));
  printf("Initializing the game.\n");

  struct character {
    char name[32];
    int power;
    int life;
  };

  struct character player;

  printf("Hi welcome to the game\n");
  printf("Say the name of your character: ");
  fgets(player.name, 32, stdin);
  player.life = randStat(15, 20);
  player.power = randStat(3, 6);
  printf("Game initialized\n\n");

  puts("Here is your stats");
  printf("Your name: %s", player.name);
  printf("Your Life: %d\n", player.life);
  printf("Your Power: %d\n", player.power);
  continueGame();

  printf("\nGame Started!!!");
  do {

    struct character enemy;
    enemy.life = randStat(6, 7);
    enemy.power = randStat(3, 6);

    printf("\n\nA new enemy was encountered, this is it stats\n");
    printf("Enemy Life: %d\nEnemy Power: %d\n", enemy.life, enemy.power);
    
    continueGame();

    do {

      showStats(player.life, player.power, enemy.life, enemy.power);

      int choose = -1;
      do{
        choose = battleStyle();
      }while(choose == -1);

      puts("\n\nATTACKING EACH OTHER!!!\n");
      continueGame();

      if (choose == 1) {
        player.life -= enemy.power;
        enemy.life -= player.power + 1;
      } else {
        player.life -= enemy.power - 2;
        enemy.life -= player.power - 1;
      }

      if (enemy.life <= 0) {
        printf("\n\nCONGRATULATIONS! You defeated the enemy\n\n");
        continueGame();
      } 
      
      if (player.life <= 0) {
        printf("You died!\n");
        break;
      }

    } while (enemy.life > 0);



  } while (player.life > 0);

  printf("\nXXXXXXXX GAME OVER XXXXXXXX\n\n");
  printf("\nThank you for playing\nAuthor: Emmanuel Kant Duarte\n\n\n");

  return 0;
}

void continueGame() {
  printf("\nPress [Enter] to continue");
  getchar();
}

void showStats(int pl, int pp, int el, int ep) {

  printf("\n\n||==========================================||\n");
  printf("\n       Your Stats: Life: %d - Power: %d\n", pl, pp);
  printf("\n       Enemy Stats: Life: %d - Power: %d\n", el, ep);
  printf("\n||==========================================||\n\n");

}

int battleStyle() {
  char choose;
  int result;
  printf("Want you attack offensively (+1 on atk) or defensively (-1 atk +2 def)?\n");
  printf("1) Offensively\n");
  printf("2) Defensively\n");
  printf("Choose it: ");
  choose = getchar();
  getchar(); // First work around in C hahaha
  if (choose == '1') {
    printf("\nYou choose attacking offensively\n");
    result = 1;
  } else if (choose == '2') {
    printf("\nYou choose attacking deffensively\n");
    result = 2;
  } else {
    printf("\nWrong enter, please enter with values 1 for Attacking offensively or 2 for attacking defensively\n\n");
    result = -1;
  }
  continueGame();
  return result;
}

int randStat(int from, int to) {
  return rand() % ((to - from) + 1) + from;
}
