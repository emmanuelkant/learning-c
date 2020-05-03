#include <stdio.h>

int main() {

  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  switch(number) {
    case 1:
      puts("Red");
      break;
    case 2:
      puts("Green");
      break;
    case 3:
      puts("Blue");
      break;
    default:
      puts("Sorry but your choice was wrong, try again next time.");
  }

  return 0;
}
