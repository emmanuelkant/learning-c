#include <stdio.h>

int main() {

  int x, y;
  y = -10;

  puts("============== STARTS FOR LOOP ================");
  for(x = 1; x <= 20; x++) {
    printf("On for loop the number is %d.\n", x);
  }
  puts("============== END FOR LOOP ================");

  puts("============== START FOR LOOP ================");
  while(y <= 10) {
    printf("On while loop the number is %d.\n", y);
    y = y + 2;
  }
  puts("============== END FOR LOOP ================");

  return 0;
}